#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
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
    float _year;


    Player(string name, string pos, float age, string team, float gSelected, float gStarted,
            float minsPlayed, float fgm, float fga, float fgPct, float threePM, float threePA,
            float threePPct, float twoPM, float twoPA, float twoPPct, float eFG, float ftm, float fta,
            float ftPct, float orb, float drb, float trb, float ast, float stl, float blk,
            float tov, float pf, float pts, float year);
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
};

BST readPlayers(BST tree);
float blankStat(const string& stat);

int main()
{
    BST tree;
    tree = readPlayers(tree);

    int option;
    cin >> option;
    if (option == 1)
    {

    }

    return 0;
}

BST readPlayers(BST tree)
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
                 tov,  pf,  pts,  year);

        tree.root = tree.insert(tree.root, player);
    }
    return tree;
}

float blankStat(const string& stat)
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

Player::Player(string name, string pos, float age, string team, float gSelected,
        float gStarted, float minsPlayed, float fgm, float fga, float fgPct,
        float threePM, float threePA, float threePPct, float twoPM, float twoPA,
        float twoPPct, float eFG, float ftm, float fta, float ftPct, float orb,
        float drb, float trb, float ast, float stl, float blk, float tov, float pf,
        float pts, float year)
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
    _year = year;
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

