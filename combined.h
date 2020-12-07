#include "player.h"

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
    void readFile();
    float blankStat(const std::string& stat);
    std::vector<Player> getTeam(const std::string& name);
    Player getPlayer(const std::string &name);
};
