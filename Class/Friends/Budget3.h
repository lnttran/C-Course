#ifndef BUDGET3_H
#define BUDGET3_H
#include "Auxil.h"

//Budget class declaration
class Budget 
{
  private: 
    static double corBudget; //static member 
    double divisionBudget; 
  public: 
    Budget()
      { divisionBudget = 0; }
      
    void addBudget (double b)
      { divisionBudget += b; 
        corBudget += b; }
        
    double getDivisionBudget () const
      { return divisionBudget; }
      
    double corBudget () const
      { return corBudget; }
      
    //Static member function 
    static void mainOffice (double);
    
    //Friend function 
    friend void AuxiliaryOffice::addBudget(double, Budget &)
};
#endif
