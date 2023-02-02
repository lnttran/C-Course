//This program demonstate a static class member variable and static member function
#include <iostream>
#include <iomanip>
#include "Budget2.h"
using namespace std; 

int main()
{
  int count; 
  double mainOfficeRequest; 
  const int NUM_DIVISION = 4; //The size of the array ( number of division)
  
  //Get the main office's budget request
  //Note that no instances of the Budget class have been defined 
  cout << "Enter the main office's budget request: ";
  cin >> mainOfficeRequest; 
  Budget:: mainOffice(mainOfficeRequest);
  
  Budget division[NUM_DIVISION]; //Array of the Budget objects
  
  //Get the budget requests for each division
  for ( count = 0; count < NUM_DIVISION; count ++)
  {
    double budgetAmount; 
    cout << "Enter the budget request for division "; 
    cout << (count + 1 ) << " : "; 
    cin >> budgetAmount; 
    division[count].addBudget(budgetAmount);
  }
  
  //Diplay the budget requests and the corporate budget 
  cout << fixed << showpoint << setprecision(2); 
  cout << "\nHere are the division budget requests:\n"
  for ( count = 0; count < NUM_DIVISION; count ++)
  {
    cout << "\nDivision " << (count + 1) << "\t$"; 
    cout << division[count].getDivisionBudget() << endl;  
  }
  cout << "\tTotal Budget Request: \t$ "; 
  cout << division[0].getCorBudget() << endl; 
  
  return 0;
