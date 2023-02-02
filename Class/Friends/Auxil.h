#ifndef AUXIL_H
#define AUXIL_H

class Budget; //Forward declaration of Budget class
//This simply tells the compiler that a class named Budget will be declare later in the program.

//Aux class declaration 

class AuxiliaryOffice
{
  private: 
    double auxBudget; 
  public: 
    AuxiliaryOffice() //constructor 
    { auxBudget = 0; }
  
    double getDivisionBudget() const 
    { return auxBudget;}
  
    void addBudget ( double, Budget &); //declare in Auxil.cpp
  
};
#endif
  

