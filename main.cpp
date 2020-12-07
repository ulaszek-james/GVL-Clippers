#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <chrono>

struct Player
{
    std::string _name;
    std::string _pos;
    float _age;
    std::string _team;
    float _gSelected;
    float _gStarted;
    float _minsPlayed;
    float _fgm;
    float _fga;
    float _fgPct;
    float _3pm;
    float _3pa;
    float _3pPct;
    float _2pm;
    float _2pa;
    float _2pPct;
    float _eFG;
    float _ftm;
    float _fta;
    float _ftPct;
    float _orb;
    float _drb;
    float _trb;
    float _ast;
    float _stl;
    float _blk;
    float _tov;
    float _pf;
    float _pts;


    Player(std::string name, std::string pos, float age, std::string team, float gSelected, float gStarted,
            float minsPlayed, float fgm, float fga, float fgPct, float threePM, float threePA,
            float threePPct, float twoPM, float twoPA, float twoPPct, float eFG, float ftm, float fta,
            float ftPct, float orb, float drb, float trb, float ast, float stl, float blk,
            float tov, float pf, float pts);
};

struct Node
{
    Player player;
    Node* left;
    Node* right;

    Node(Player obj) : player(obj), left(nullptr), right(nullptr){}
};

class BST
{
public:
    Node* root;
    BST()
    {
        root = nullptr;
    }
    Node* insert(Node* node, const Player& player);
    std::vector<Player> getPlayersOnTeam(Node* node, std::vector<Player> &playersOnTeam, const std::string& team);
    Player getPlayer(Node* node, const std::string& name);
};

class Map
{
public:
    std::map<std::string, Player> playerMap; // for grabbing
    void readFile();
    float blankStat(const std::string &stat);
    std::vector<Player> getTeam(const std::string &name);
    Player getPlayer(const std::string &name);
};

BST readPlayers(BST tree);
float blankStat(const std::string& stat);

int main()
{
    BST tree;
    tree = readPlayers(tree);

    return 0;
}

BST readPlayers(BST tree)
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

        Player player(name, pos,  age, team,  gSelected,  gStarted,
                 minsPlayed,  fgm,  fga,  fgPct,  threePM,  threePA,
                 threePPct,  twoPM,  twoPA,  twoPPct,  eFG,  ftm,  fta,
                 ftPct,  orb,  drb,  trb,  ast,  stl,  blk,
                 tov,  pf,  pts);

        tree.root = tree.insert(tree.root, player);
    }
    return tree;
}

float blankStat(const std::string& stat)
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

Node* BST::insert(Node *node, const Player& player)
{
    if (node == nullptr)
        return new Node(player);
    if (player._name < node->player._name)
        node->left = insert(node->left, player);
    else
        node->right = insert(node->right, player);

    return node;
}

std::vector<Player> BST::getPlayersOnTeam(Node* node, std::vector<Player> &playersOnTeam, const std::string& team)
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

Player BST::getPlayer(Node *node, const std::string& name)
{
    if (node->player._name == name)
        return node->player;
    else if (name < node->player._name)
        return getPlayer(node->left, name);
    else
        return getPlayer(node->right, name);
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

        getline(streamFromAString, temp);
        float pts = blankStat(temp);

        Player player(name, pos,  age, team,  gSelected,  gStarted,
                      minsPlayed,  fgm,  fga,  fgPct,  threePM,  threePA,
                      threePPct,  twoPM,  twoPA,  twoPPct,  eFG,  ftm,  fta,
                      ftPct,  orb,  drb,  trb,  ast,  stl,  blk,
                      tov,  pf,  pts);

        playerMap.emplace(name, player);
    }
}

float Map::blankStat(const std::string& stat)
{
    float num;
    if (stat.empty())
    {
        return 0.0f;
    }
    else
        num = stof(stat);
    return num;
}

std::vector<Player> Map::getTeam(const std::string& name)
{
    std::vector<Player> results;

    for (auto iter = playerMap.begin(); iter != playerMap.end(); iter++)
    {
        if (iter->second._team == name)
            results.push_back(iter->second);
    }

    return results;

}

Player Map::getPlayer(const std::string& name)
{
    return playerMap.at(name);
}
