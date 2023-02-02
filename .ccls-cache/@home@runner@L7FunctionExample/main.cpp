/*0*******************************************
* Alabama A&M University - EE109 - Spring 2023
* Lesson 7 & 8 sample code: functions and 'if'
*   & 'else if'  operations
* By: Prof J Zehnpfennig, PE
* Last Updated: 02 Februrary 2023
*********************************************/
#include <iostream>

using namespace std;

void boilPasta();
void howToFish(int numFish);

int main() 
{
  int numberFish = 0;
  boilPasta();
  
  /*
  Place menu here
  */
  
  //collect user input

  //launch selected function or exit
  cout << "\nHow many fish do you want to catch?\n";
  cin >> numberFish;
  howToFish(numberFish);
  
  //return to menu
  
  
  cout << "\nThanks, the program is over.";
  
  return 0;
}

//JZ - invoke our functions
//this is selection "1" from the menu
void boilPasta()  //JZ - takes no values in and returns nothing to the calling function
{
  /*
  Your code goes here
  */
  
  cout << "\nYay!  The pasta boiled nicely.  Al dente.\n";  //JZ - example line to show the function worked.  You can delete it.
  
}

//this is selection "2" from the menu
void howToFish(int numFish)  //JZ takes in an integer valuse numFish and returns nothing to the calling function.
{
  /*
  Your code goes here
  */
  
  cout << "\nYou will catch " << numFish << " fish.\n";     //JZ - example line to show the function worked.  You can delete it.
  
}