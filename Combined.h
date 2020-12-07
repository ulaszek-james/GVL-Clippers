#include "Player.h"

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
    BST readPlayers(BST tree);
    float blankStat(const std::string& stat);
};

class Map
{
public:
    std::map<std::string, Player> playerMap; // for grabbing
    std::vector<Player> stats; // for filtering
    void readFile();
    float blankStat(const std::string& stat);
    std::vector<Player> getPlayerStats(std::string name, std::string filter);
    std::vector<std::string> getTeam(std::string name);
    Player getPlayer(std::string name);
    bool compareStrings(std::string s1, std::string s2);
    std::string zone2pt(Player player);
    std::string zone3pt(Player player);
};

