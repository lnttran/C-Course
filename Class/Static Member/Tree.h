//Tree class 
class Tree
{
  private: 
    static int objectCount; 
  public: 
    //constructor; 
     Tree()
      { objectCount++;}
     //Accessor function for objectCount++
     int getObjectCount() const
      { return objectCount;}
};

//Definition of the static member variable, written outside the class
int Tree::objectCount = 0;
