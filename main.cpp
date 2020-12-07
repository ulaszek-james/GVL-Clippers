#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

struct Player
{
    string _name;
    string _pos;
    float _age;
    string _team;
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


    Player(string name, string pos, float age, string team, float gSelected, float gStarted,
            float minsPlayed, float fgm, float fga, float fgPct, float threePM, float threePA,
            float threePPct, float twoPM, float twoPA, float twoPPct, float eFG, float ftm, float fta,
            float ftPct, float orb, float drb, float trb, float ast, float stl, float blk,
            float tov, float pf, float pts);
};

class Map
{
public:
    unordered_map<string, Player> playerMap; // for grabbing
    vector<Player> stats; // for filtering
    void readFile();
    float blankStat(const string& stat);
    vector<Player> getPlayerStats(string name, string filter);
    vector<string> getTeam(string name);
    Player getPlayer(string name);
    bool compareStrings(string s1, string s2);
    string zone2pt(Player player);
    string zone3pt(Player player);
};

Player::Player(string name, string pos, float age, string team, float gSelected,
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
    ifstream file("2014-2019_nba_player_stats.csv");
    string lineFromFile;
    getline(file, lineFromFile);
    while (getline(file, lineFromFile))
    {
        istringstream streamFromAString(lineFromFile);

        string name;
        getline(streamFromAString, name, ',');

        string pos;
        getline(streamFromAString, pos, ',');

        string temp;
        getline(streamFromAString, temp, ',');
        float age = blankStat(temp);

        string team;
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

        Player player(name, pos,  age, team,  gSelected,  gStarted,
                 minsPlayed,  fgm,  fga,  fgPct,  threePM,  threePA,
                 threePPct,  twoPM,  twoPA,  twoPPct,  eFG,  ftm,  fta,
                 ftPct,  orb,  drb,  trb,  ast,  stl,  blk,
                 tov,  pf,  pts);

        playerMap.emplace(name, player);
    }
}

float Map::blankStat(const string& stat)
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

bool compareStrings(string s1, string s2)
{
    // comparing both using inbuilt function
    int x = s1.compare(s2);
    bool result;
 
    if (x == 0) {
        result = true;
    }
    else{
        result = false;
    }
    return result;
}

vector<string> Map::getTeam(string name)
{
    vector<string> result;
        for(unsigned int i = 0; i < stats.size(); i++)
        {
            if(compareStrings(stats[i]._team, name))
            {
                result.push_back(stats[i]._name);
            }
        }
    return result;
}

Player Map::getPlayer(string name)
{
    return playerMap.at(name);
}

vector<Player> Map::getPlayerStats(string name, string filter)
{
    vector<Player> thatYear;
    vector<Player> players;
    vector<Player> top3;
    float max;
    string name;

    if(compareStrings(filter, "3pts"))
    {
        for(int i = 0; i < stats.size(); i++)   // entire stats file
        {
            if(stats[i]._3pPct > 0.430)
            {
                players.push_back(stats[i]);
            }
        }

        for (int i = 0; i < 3; i++)     // best in specified stat
        {
            max = players[0]._3pPct;
            name = players[0]._name;

            for(int i = 0; i < players.size(); i++)
            {
                if(players[i]._3pPct > max)
                {
                    max = players[i]._3pPct;
                    name = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name));
        }
    }
    else if(compareStrings(filter, "2pts"))
    {
        for(int i = 0; i < stats.size(); i++)   // entire stats file
        {
            if(stats[i]._2pPct > 0.570)
            {
                players.push_back(stats[i]);
            }
        }
        for (int i = 0; i < 3; i++)     // best in the stat
        {
            max = players[0]._2pPct;
            name = players[0]._name;

            for(int i = 0; i < players.size(); i++)
            {
                if(players[i]._2pPct > max)
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
        for(int i = 0; i < stats.size(); i++)
        {
            if(stats[i]._pts > 9.10)
            {
                players.push_back(stats[i]);
            }
        }
        for (int i = 0; i < 3; i++)
        {
            max = players[0]._pts;
            name = players[0]._name;

            for(int i = 0; i < players.size(); i++)
            {
                if(players[i]._pts > max)
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

string Map::zone2pt(Player player)
{
    // standard for hot is above 44%
    // satndard for cold is below 33%

    if(player._2pPct > 0.44)
    {
        return "hot";
    }
    else if(player._2pPct < 0.33)
    {
        return "cold";
    }
    else
    {
        return "normal";
    }

}

string Map::zone3pt(Player player)
{
    // standard for hot is above 35%
    // standard for cold is below 20%

    if(player._3pPct > 0.35)
    {
        return "hot";
    }
    else if(player._3pPct < 0.20)
    {
        return "cold";
    }
    else
    {
        return "normal";
    }
}

int main()
{
    return 0;
}

// filters for age, team
// display stats of pts, assists, rebounds, steals, blocks, min per game
