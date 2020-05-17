#include <string>
#include <iostream>

using namespace std;

class Ninja {
public:
  Ninja() {}

public:
  // variables
  string name;
  int level;
  int sneakStat;
  int health;

  // functions
  void Run(){

  }

  void Sneak(){

  }

  void Frontflip(){
    
  }

  void printValues() {
    cout << "Name: " << name << endl;
    cout << "level: " << level << endl;
    cout << "sneak: " << sneakStat << endl;
    cout << "health: " << health << endl;
  }

  // Constructors
  Ninja(string in_name) {
      health = 100;
      level = 1;
      sneakStat = 1;
      name = in_name;
  }
  
};

class eliteNinja : public Ninja{
public:
  eliteNinja(string in_name) {
    health = 150;
    level = 2;
    sneakStat = 5;
    name = in_name;
  }

};
