#include "Player.h"

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
