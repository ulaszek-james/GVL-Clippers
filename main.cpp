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
    string _team;
    string _pos;
    float _year;
    float _age;
    float _gp;
    float _mpg;
    float _minPct;
    float _usgPct;
    float _toPct;
    float _fta;
    float _ftPct;
    float _twoPA;
    float _twoPPct;
    float _threePA;
    float _threePPct;
    float _eFGPct;
    float _tsPct;
    float _ppg;
    float _rpg;
    float _trbPct;
    float _apg;
    float _aPct;
    float _spg;
    float _bpg;
    float _topg;
    float _vi;
    float _ortg;
    float _drtg;

    Player(string name, string team, string pos, float year, float age, float gp, float mpg, float minPct,
           float usgPct, float toPct, float fta, float ftPct, float twoPA, float twoPPct,
           float threePA, float threePPct, float eFGPct, float tsPct, float ppg, float rpg,
           float trbPct, float apg, float aPct, float spg, float bpg, float topg, float vi,
           float ortg, float drtg);
};

class Map
{
public:
    unordered_map<pair<string, float> , Player> playerMap; // for grabbing
    vector<Player> stats; // for filtering
    void readFile();
    float blankStat(const string& stat);
    vector<Player> getPlayerStats(string name, string filter, float year);
    vector<string> getTeam(string name, float year);
    Player getPlayer(string name, float year);
    bool compareStrings(string s1, string s2);
    string zone2pt(Player player);
    string zone3pt(Player player);
};

Player::Player(string name, string team, string pos, float year,float age, float gp, float mpg,
        float minPct, float usgPct, float toPct, float fta, float ftPct, float twoPA,
        float twoPPct, float threePA, float threePPct, float eFGPct, float tsPct, float ppg,
        float rpg, float trbPct, float apg, float aPct, float spg, float bpg, float topg,
        float vi, float ortg, float drtg)
{
    _name = name;
    _team = team;
    _pos = pos;
    _year = year;
    _age = age;
    _gp = gp;
    _mpg = mpg;
    _minPct = minPct;
    _usgPct = usgPct;
    _toPct = toPct;
    _fta = fta;
    _ftPct = ftPct;
    _twoPA = twoPA;
    _twoPPct = twoPPct;
    _threePA = threePA;
    _threePPct = threePPct;
    _eFGPct = eFGPct;
    _tsPct = tsPct;
    _ppg = ppg;
    _rpg = rpg;
    _trbPct = trbPct;
    _apg = apg;
    _aPct = aPct;
    _spg = spg;
    _bpg = bpg;
    _topg = topg;
    _vi = vi;
    _ortg = ortg;
    _drtg = drtg;
}

void Map::readFile()
{
    ifstream file("2019-20_nba_player_pergame_stats.csv");

    string lineFromFile;
    getline(file, lineFromFile);
    while (getline(file, lineFromFile))
    {
        istringstream streamFromAString(lineFromFile);

        string name;
        getline(streamFromAString, name, ',');

        string team;
        getline(streamFromAString, team, ',');

        string pos;
        getline(streamFromAString, pos, ',');

        string temp;
        getline(streamFromAString, temp, ',');
        float year = blankStat(temp);

        string temp;
        getline(streamFromAString, temp, ',');
        float age = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float gp = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float mpg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float minPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float usgPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float toPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float fta = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ftPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPA = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float twoPPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float threePA = blankStat(temp);


        getline(streamFromAString, temp, ',');
        float threePPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float eFGPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float tsPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ppg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float rpg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float trbPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float apg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float aPct = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float spg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float bpg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float topg = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float vi = blankStat(temp);

        getline(streamFromAString, temp, ',');
        float ortg = blankStat(temp);

        getline(streamFromAString, temp);
        float drtg = blankStat(temp);

        Player player(name, team, pos, year, age, gp, mpg, minPct, usgPct,
                      toPct, fta, ftPct, twoPA, twoPPct,threePA, threePPct,
                      eFGPct, tsPct, ppg, rpg, trbPct, apg, aPct, spg, bpg,
                      topg, vi, ortg, drtg);

        playerMap.emplace(make_pair(player._name, player._year), player);
        stats.push_back(player);
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

vector<string> Map::getTeam(string name, float year)
{
    vector<string> result;
        for(unsigned int i = 0; i < stats.size(); i++)
        {
            if(compareStrings(stats[i]._team, name))
            {
                if(year = stats[i]._year)
                {
                    result.push_back(stats[i]._name);
                }
            }
        }
    return result;
}

Player Map::getPlayer(string name, float year)
{
    return playerMap.at(pair(name, year));
}

vector<Player> Map::getPlayerStats(string name, string filter, float year)
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
            if(stats[i]._threePPct > 0.430)
            {
                players.push_back(stats[i]);
            }
        }

        for (int i = 0; i < 3; i++)     // best in specified stat
        {
            max = players[0]._threePPct;
            name = players[0]._name;

            for(int i = 0; i < players.size(); i++)
            {
                if(players[i]._threePPct > max)
                {
                    max = players[i]._threePPct;
                    name = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name, year));
        }
    }
    else if(compareStrings(filter, "2pts"))
    {
        for(int i = 0; i < stats.size(); i++)   // entire stats file
        {
            if(stats[i]._twoPPct > 0.570)
            {
                players.push_back(stats[i]);
            }
        }
        for (int i = 0; i < 3; i++)     // best in the stat
        {
            max = players[0]._twoPPct;
            name = players[0]._name;

            for(int i = 0; i < players.size(); i++)
            {
                if(players[i]._twoPPct > max)
                {
                    max = players[i]._twoPPct;
                    name = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name, year));
        }
    }
    else    // most points per game
    {
        for(int i = 0; i < stats.size(); i++)
        {
            if(stats[i]._ppg > 9.10)
            {
                players.push_back(stats[i]);
            }
        }
        for (int i = 0; i < 3; i++)
        {
            max = players[0]._ppg;
            name = players[0]._name;

            for(int i = 0; i < players.size(); i++)
            {
                if(players[i]._ppg > max)
                {
                    max = players[i]._ppg;
                    name = players[i]._name;
                }
            }

            top3.push_back(getPlayer(name, year));
        }   
    }

    return top3;
}

string Map::zone2pt(Player player)
{
    // standard for hot is above 44%
    // satndard for cold is below 33%

    if(player._twoPPct > 0.44)
    {
        return "hot";
    }
    else if(player._twoPPct < 0.33)
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

    if(player._threePPct > 0.35)
    {
        return "hot";
    }
    else if(player._threePPct < 0.20)
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
