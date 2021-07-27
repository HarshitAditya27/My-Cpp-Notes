#include <iostream> 
#include <string> 
using namespace std; 
class Player 
{ 
private: 
    std::string name; 
    int health; 
    int xp; 
public: 
//Overloaded Constructors
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    };
           Player::Player(std::string name_val, int health_val, int xp_val) 
           : name{name_val}, health{health_val}, xp{xp_val} { 
              cout<<"Three-args contructor"<<endl; 
               }
int main() { 
    Player empty; 
    Player frank {"Frank"}; 
    Player villain {"Villain",100,55}; 
    return 0; 
}   