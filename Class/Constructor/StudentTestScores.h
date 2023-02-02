#ifndef STUDENTTESTSCORE_H
#define STUDENTTESTSCORE_H
#include <string>

using namespace std; 

const double defautScore = 0.0;

class StudentTestScore
{
  private: 
    string studentName; //the student's name 
    //Points to array of test score. It purposes is to point to a dynamically allocated int array that holds the student's score 
    double *testScore; 
    int numTestScores; //Number of test scores
    
    //Private member function to create an array of test scores
    void createTestScoreArray (int size)
    { numTestScore = size; 
      testScore = new double[size]; //dynamically allocated an int array for the testScores
      for ( int i = 0; i < size; i++) //Initialize the elements of array to defaultScore = 0.0
        testScore[i] = defaultScore; 
  public: 
    //constructor 
    StudentTestScore(string name, int numScore)
    { studentName = name; 
      creatTestScoreArray (numScore); }
     
    //Destructor to deacllocate the testScores
    ~StudentTestScore ()
    { delete[] testScore; }
    
    //The setTestScore function sets a specific test score value
    void setTestScore(double score, int index)
    { testScore[index] = score; }
    
    //Set student's name 
    void setStudentName (string name)
    { studentName = name; }
    
    //Get student's name 
    string getStudentName () const
    { return studentName; }
    
    //Get the number of score 
    int getNumTestScore () const
    { return numTestScores; }
    
    //Get a specific test score 
    double getTestScore ( int index) const
    { return testScore[index];  }
    
};
#endif
 }
