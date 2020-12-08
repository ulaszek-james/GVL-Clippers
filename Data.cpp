#include "Data.h"


Player::Player(std::string name, std::string pos, float age, std::string team, float gSelected,
    float gStarted, float minsPlayed, float fgm, float fga, float fgPct,
    float threePM, float threePA, float threePPct, float twoPM, float twoPA,
    float twoPPct, float eFG, float ftm, float fta, float ftPct, float orb,
    float drb, float trb, float ast, float stl, float blk, float tov, float pf,
    float pts)
{
    _name = name;
    _pos = pos;
    _age = age;
    _team = team;
    _gSelected = gSelected;
    _gStarted = gStarted;
    _minsPlayed = minsPlayed;
    _fgm = fgm;
    _fga = fga;
    _fgPct = fgPct;
    _3pm = threePM;
    _3pa = threePA;
    _3pPct = threePPct;
    _2pm = twoPM;
    _2pa = twoPA;
    _2pPct = twoPPct;
    _eFG = eFG;
    _ftm = ftm;
    _fta = fta;
    _ftPct = ftPct;
    _orb = orb;
    _drb = drb;
    _trb = trb;
    _ast = ast;
    _stl = stl;
    _blk = blk;
    _tov = tov;
    _pf = pf;
    _pts = pts;
}

void Map::readFile()
{
    std::ifstream file("2019-20_nba_player_stats.csv");
    std::string lineFromFile;
    getline(file, lineFromFile);
    while (getline(file, lineFromFile))
    {
        std::istringstream streamFromAString(lineFromFile);

        std::string name;
        getline(streamFromAString, name, ',');

        std::string pos;
        getline(streamFromAString, pos, ',');

        std::string temp;
        getline(streamFromAString, temp, ',');
        float age = blankStat(temp);

        std::string team;
        getline(streamFromAString, team, ',');

        getline(streamFromAString, temp, ',');
        float gSelected = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float gStarted = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float minsPlayed = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fgm = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fga = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fgPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePM = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePA = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPM = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPA = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float eFG = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ftm = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fta = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ftPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float orb = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float drb = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float trb = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ast = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float stl = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float blk = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float tov = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float pf = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float pts = blankStat(temp);

        getline(streamFromAString, temp);
        float year = blankStat(temp);

        Player player(name, pos, age, team, gSelected, gStarted,
            minsPlayed, fgm, fga, fgPct, threePM, threePA,
            threePPct, twoPM, twoPA, twoPPct, eFG, ftm, fta,
            ftPct, orb, drb, trb, ast, stl, blk,
            tov, pf, pts);

        playerMap.emplace(name, player);

        stats.push_back(player);
    }
}

float Map::blankStat(const std::string& stat)
{
    float num;
    if (stat.empty() || stat == "\r")
    {
        return 0.0f;
    }
    else
        num = stof(stat);
    return num;
}

bool compareStrings(std::string s1, std::string s2)
{
    // comparing both using inbuilt function
    int x = s1.compare(s2);
    bool result;

    if (x == 0) {
        result = true;
    }
    else {
        result = false;
    }
    return result;
}

std::vector<std::string> Map::getTeam(std::string name)
{
    std::vector<std::string> result;
    for (unsigned int i = 0; i < stats.size(); i++)
    {
        if (compareStrings(stats[i]._team, name))
        {
            result.push_back(stats[i]._name);
        }
    }
    return result;
}

Player Map::getPlayer(std::string name)
{
    return playerMap.at(name);
}

std::vector<Player> Map::getPlayerStats(std::string name, std::string filter)
{
    std::vector<Player> thatYear;
    std::vector<Player> players;
    std::vector<Player> top3;
    float max;
    std::string tempName;

    if (compareStrings(filter, "3pts"))
    {
        for (int i = 0; i < stats.size(); i++)   // entire stats file
        {
            if (stats[i]._3pPct > 0.430)
            {
                players.push_back(stats[i]);
            }
        }

        for (int i = 0; i < 3; i++)     // best in specified stat
        {
            max = players[0]._3pPct;
            tempName = players[0]._name;

            for (int i = 0; i < players.size(); i++)
            {
                if (players[i]._3pPct > max)
                {
                    max = players[i]._3pPct;
                    tempName = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name));
        }
    }
    else if (compareStrings(filter, "2pts"))
    {
        for (int i = 0; i < stats.size(); i++)   // entire stats file
        {
            if (stats[i]._2pPct > 0.570)
            {
                players.push_back(stats[i]);
            }
        }
        for (int i = 0; i < 3; i++)     // best in the stat
        {
            max = players[0]._2pPct;
            name = players[0]._name;

            for (int i = 0; i < players.size(); i++)
            {
                if (players[i]._2pPct > max)
                {
                    max = players[i]._2pPct;
                    name = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name));
        }
    }
    else    // most points per game
    {
        for (int i = 0; i < stats.size(); i++)
        {
            if (stats[i]._pts > 9.10)
            {
                players.push_back(stats[i]);
            }
        }
        for (int i = 0; i < 3; i++)
        {
            max = players[0]._pts;
            name = players[0]._name;

            for (int i = 0; i < players.size(); i++)
            {
                if (players[i]._pts > max)
                {
                    max = players[i]._pts;
                    name = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name));
        }
    }

    return top3;
}

std::string Map::zone2pt(Player player)
{
    // standard for hot is above 44%
    // satndard for cold is below 33%

    if (player._2pPct > 0.44)
    {
        return "hot";
    }
    else if (player._2pPct < 0.33)
    {
        return "cold";
    }
    else
    {
        return "normal";
    }

}

std::string Map::zone3pt(Player player)
{
    // standard for hot is above 35%
    // standard for cold is below 20%

    if (player._3pPct > 0.35)
    {
        return "hot";
    }
    else if (player._3pPct < 0.20)
    {
        return "cold";
    }
    else
    {
        return "normal";
    }
}

// filters for age, team
// display stats of pts, assists, rebounds, steals, blocks, min per game

BST::BST() {
    root = nullptr;
}

BST BST::readPlayers(BST tree)
{
    std::ifstream file("2019-20_nba_player_stats.csv");
    std::string lineFromFile;
    getline(file, lineFromFile);
    while (getline(file, lineFromFile))
    {
        std::istringstream streamFromAString(lineFromFile);

        std::string name;
        getline(streamFromAString, name, ',');

        std::string pos;
        getline(streamFromAString, pos, ',');

        std::string temp;
        getline(streamFromAString, temp, ',');
        float age = blankStat(temp);

        std::string team;
        getline(streamFromAString, team, ',');

        getline(streamFromAString, temp, ',');
        float gSelected = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float gStarted = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float minsPlayed = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fgm = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fga = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fgPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePM = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePA = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPM = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPA = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float eFG = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ftm = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fta = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ftPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float orb = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float drb = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float trb = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ast = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float stl = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float blk = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float tov = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float pf = blankStat(temp);

        getline(streamFromAString, temp);
        float pts = blankStat(temp);

        Player player(name, pos, age, team, gSelected, gStarted,
            minsPlayed, fgm, fga, fgPct, threePM, threePA,
            threePPct, twoPM, twoPA, twoPPct, eFG, ftm, fta,
            ftPct, orb, drb, trb, ast, stl, blk,
            tov, pf, pts);

        tree.root = tree.insert(tree.root, player);
    }
    return tree;
}

float BST::blankStat(const std::string& stat)
{
    float num;
    if (stat.empty() || stat == "\r")
    {
        return 0.0f;
    }
    else
        num = stof(stat);
    return num;
}

Node* BST::insert(Node* node, const Player& player)
{
    if (node == nullptr)
        return new Node(player);
    if (player._name < node->player._name)
        node->left = insert(node->left, player);
    else
        node->right = insert(node->right, player);

    return node;
}

std::vector<Player> BST::getPlayersOnTeam(Node* node, std::vector<Player>& playersOnTeam, const std::string& team)
{
    if (node == nullptr)
        ;
    else
    {
        getPlayersOnTeam(node->left, playersOnTeam, team);
        if (node->player._team == team)
            playersOnTeam.push_back(node->player);
        getPlayersOnTeam(node->right, playersOnTeam, team);
    }

    return playersOnTeam;
}

Player BST::getPlayer(Node* node, const std::string& name)
{
    if (node->player._name == name)
        return node->player;
    else if (name < node->player._name)
        return getPlayer(node->left, name);
    else
        return getPlayer(node->right, name);
}