//This program demonstates a constructor.
#include <iostream>
using namespace std; 

//Demo class declaration 

class Demo
{
    public:
        Demo();
};

Demo::Demo()
{
    cout << "Welcome to the constructor!" << endl;
}

int main()
{
    Demo DemoObject; 
    cout << "This program demonstates an object with a constructor.\n";
    return 0;

}