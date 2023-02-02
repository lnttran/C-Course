//This program demonstrates a static member function
#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std; 

int main()
{
  double mainOfficeRequest; 
  const int numDivs = 4; 
  
  //Get the main office's Budget request
  cout << " Enter the main office;s budget request: ";
  cin >> mainOfficeRequest;
  Budget::mainOffice(mainOfficeRequest);
  
  Budget divisions[numDivs];
  AuxiliaryOffice auxOffices[4]; 
  
  for ( int count = 0; count < NUM_DIVISION; count ++)
  {
    double budgetAmount; 
    cout << "Enter the budget request for division "; 
    cout << (count + 1 ) << " : "; 
    cin >> budgetAmount; 
    division[count].addBudget(budgetAmount);
    
    cout << "Enter the budget request for that division's aixiliary office: ";
    cin >> budgetAmount;
    auxiOffices[count].addBudget(budgetAmount, division[count]);
  }
  
  //Diplay the budget requests and the corporate budget 
  cout << fixed << showpoint << setprecision(2); 
  cout << "\nHere are the division budget requests:\n"
  for ( int count = 0; count < NUM_DIVISION; count ++)
  {
    cout << "\nDivision " << (count + 1) << "\t$"; 
    cout << division[count].getDivisionBudget() << endl;  
    cout << "Auxiliary Office: \t$" << auxiOffices[count].getDivisionsBudget() << endl << endl;
  }
  cout << "\tTotal Budget Request: \t$ "; 
  cout << division[0].getCorBudget() << endl; 
  
  return 0;
