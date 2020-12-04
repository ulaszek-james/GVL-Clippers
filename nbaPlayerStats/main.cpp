#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct Player
{
    string _name;
    string _team;
    string _pos;
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

    Player(string name, string team, string pos, float age, float gp, float mpg, float minPct,
           float usgPct, float toPct, float fta, float ftPct, float twoPA, float twoPPct,
           float threePA, float threePPct, float eFGPct, float tsPct, float ppg, float rpg,
           float trbPct, float apg, float aPct, float spg, float bpg, float topg, float vi,
           float ortg, float drtg);
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
    Node* insert(Node* node, Player player);
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

        Player player(name, team, pos, age, gp, mpg, minPct, usgPct,
                      toPct, fta, ftPct, twoPA, twoPPct,threePA, threePPct,
                      eFGPct, tsPct, ppg, rpg, trbPct, apg, aPct, spg, bpg,
                      topg, vi, ortg, drtg);
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

Player::Player(string name, string team, string pos, float age, float gp, float mpg,
        float minPct, float usgPct, float toPct, float fta, float ftPct, float twoPA,
        float twoPPct, float threePA, float threePPct, float eFGPct, float tsPct, float ppg,
        float rpg, float trbPct, float apg, float aPct, float spg, float bpg, float topg,
        float vi, float ortg, float drtg)
{
    _name = name;
    _team = team;
    _pos = pos;
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

Node* BST::insert(Node *node, Player player)
{
    if (node == nullptr)
        return new Node(player);
    if (player._name < node->player._name)
        node->left = insert(node->left, player);
    else
        node->right = insert(node->right, player);

    return node;
}