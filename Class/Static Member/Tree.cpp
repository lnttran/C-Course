//This program demonstrates a static member variable.
#include <iostream>
#include "Tree.h"
using namespace std; 

int main()
{
  //Define tree object 
  Tree oak;
  Tree elm; 
  Tree pine; 
  
  //Display the number of Tree objects we have
  cout << "We have " << pine.getObjectCount() << " tree in our program.\n";
  //The program calls the getObjectCount number function to retrieve the number of instances that have been created.
  //Regardless of what object the program call, the same value would be return. 
  //oak.gotObjectcount == elm.getObjectCount == pine.getObjectCount; 
  return 0; 
}
