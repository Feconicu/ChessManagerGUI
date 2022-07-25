#include <iostream>
#include <vector>
class Player
{
    std::string name;
    int wins;
    int draws;
    bool isVirtual;
    int ranking;

public:
    std::string getName();
    int getWins();
    int getDraws();                 //getters
    bool getIsVirtual();
    int getRanking();

    void setName(std::string);
    void setWins(int);
    void setDraws(int);             //setters
    void setIsVirtual(bool);
    void setRanking(int);

    Player();


};

class Roundrobinsystem
{
    std::string name;
	std::vector <Player> PlayersVector;
    int rotationsCounter;

public:
    Roundrobinsystem();

	bool rotate();

    void addPlayer();
    void addPlayer(std::string);  //.addPlayer() to add Player with default atributes     or      .addPlayer("name") to add Player and set their name
	void addVirtual();            // adds Virual player at the end of Vector

    void clearPlayersVector();    //removes all elements of PlayersVector

    bool removePlayer(int);       //.removePlayer(x) to remove element with index x        or      .removePlayer() to remove last element of PlayersVector
    bool removePlayer();

	Player* getPlayer(int);        //returnes a pointer to a Player which is assigned to the index
    void clearTournament();       //sets default values for all atributes (and clears PlayersVector)
	int  getSize();
	int  getRotationsCounter();
   // void print();  for debuging reasons
};




