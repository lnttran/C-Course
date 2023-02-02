#ifndef BUDGET_H
#define BUDGET_H

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
};
#endif
