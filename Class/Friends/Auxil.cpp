#include "Auxil.h"
#include "Budget.h"

//Definition of member function mainOffice
//This function is declared a friend by the budget class 
//It adds the value of argument b to the staticc corpBudget member variable of the budget class

void AuxiliaryOffice::addBudget( double b, Budget &div)
{
  auxBudget += b; 
  div.corBudget += b; //static member variable.
}
