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
  
