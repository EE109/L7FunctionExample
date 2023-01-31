#include <iostream>

using namespace std;

void boilPasta();
void howToFish(int numFish);


int main() 
{
  int numberFish = 0;
  boilPasta();
  
  cout << "\nHow many fish do you want to catch?\n";
  cin >> numberFish;

  howToFish(numberFish);
  cout << "\nThanks, the program is over.";
  
  return 0;
}

//JZ - invoke our functions
void boilPasta()
{
//code goes here
  cout << "\nYay!  The pasta boiled nicely.  Al dete.\n";
  
}



void howToFish(int numFish)
{
  //code goes here
  cout << "\nYou will catch " << numFish << " fish.\n";
  
}