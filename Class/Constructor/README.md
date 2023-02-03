## 1. Constructor

**Concept:** A constructor is a **member function** that is automatically called when a class object is created 

```cpp
class Demo 
{
		public:
			Demo(); //Constructor, which has the same name as a class object 
};

Demo::Demo()
{
	cout << "Welcome to the constructor";
}
```

 The constructor’s function header looks different than that of a regular member function. There is no return data type - not even void. This is because the constructors are not executed by explicit function calls and cannot return a value. 

 

### Using Member Initialization Lists

The constructor below uses assignment statements to store the initial values.

```cpp
Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;
}
```

- Alternative way: Member Initialization List. To initialize the members of a class.

```cpp
Rectangle::Rectangle():
width(0.0), length(0.0){}
```

<aside>
🗒️ When a constructor has a member initialization list, the initializations take place before any statements in the body of the constructor execute. Therefore, it allows compilers to generate more efficient code.

</aside>

### In-place Member Initialization

In C++ 11, you can initialization a member variable in its declaration statement, just as you can with a regular variable. 

```cpp
class Rectangle
{
private: 
	double width = 0.0;
	double length = 0.0;
}
```

### Default Constructor

A default constructor is a constructor that takes no arguments. Like a regular functions, constructors may accept arguments, have default arguments. be declared inline, and be overloaded. 

<aside>
🗒️ If you write a class with no constructor, when the class is compiled, C++ will automatically write a default constructor that does nothing

</aside>

## 2. Passing an argument to Constructors

**Concept:** A constructor can have parameters and can accept arguments when an object is created

```cpp
//Specification file for the REctangle class. 
//This version has a constructor 
#ifndef RECTANLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double width; 
		double length;
	public: 
		Rectangle(double, double);
		void setWidth (double);
		void setLength (double);

		double getWidth() const
		{ return width;}
		double getLength() const
		{ return length;}
		double getArea () const
		{ return width * length;}
};
#endif
```

```cpp
//Implementation file for the Rectangle class
//This version has a constructor that accepts arguments.
#include Rectangle.h
#include <iostream>
#inclulde <cstdlib>
using namespace std;

Rectangle::Rectangle(double w, double l)
{
	width = w; 
	length = l;
}
void setWidth (double w) //Since you can initialise the value of width and length in the constructor, this getter can be deleted.
{
	if (w >= 0)
		width = w;
	else
	{
			cout << "Invalid width\n";
			exit(EXIT_FAILURE);
	}
}
void setLength (double l)
{
	if (l >= 0)
		length = l;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
```

### Using Default Arguments with Constructors

Default arguments are passed to parameters automatically if no argument is provided in the function call.

```cpp
//This version of the sale class uses a default argument in the constructor 
#ifndef SALE_H
#define SALE_H

class Sale
{
	private: 
		double itemCost; //Cost of the item
		double taxRate; //Sale tax rate
	public: 
		Sale ( double cost, double rate = 0.05)
					{itemCost = cost; 
						taxRate = 0.05}
		double getItemCost() const //The compiler will terminate if the code is different from the calling object's data type
			{ return itemCost;} 
		double getTaxRate() const
			{ return taxRate;}
		double getTax() const
			{ return (itemCost * taxRate);}
	double getTotal()
			{ return (itemCost + getTax());}
};
# endif 
				
```

When the constructor has default arguments for each of its parameters. The constructor can be called with no argument.
## 7. Destructor

**Concept:** A destructor is a member function that is automatically called when an object is destroyed.

Destructor are member functions with the same name as the class, preceded by a tilde character (~). Destructor perform a shut down performance when an object is destroyed. The common use of destructor is to free memory that was dynamically allocated by the class.

```cpp
//Specification file for the contact class
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <cstring> //Needed for strlen and strcpy

//ContactInfo class declaration 
class ContactInfo
{
	 private: 
		char *name; 
		char *phone; 
	 public: 
		//Constructor
		ContactInfo(char *n, char *p)
		{ //Allocate just enough memory for the same and phone number.
				name = new char [strlen(n) + 1];
				phone = new char [strlen(p) + 1]; //Rather than storing the name and phone number
        //in char array with a fixed size, the constructor gets a length of the C-string  and dynamically 
        // allocate just enough memory to hold it. 
				
				//Copy the name and phone number to the allocated memory
				strcpy(name, n);
				strcpy(phone, p); }
	
			//Destructor
		~ContactInfo()
		{ delete [] name; 
			delete [] phone; }

		const char *getNAme() const
		{ return name; }
		
		const char *getPhoneNumber () const 
		{ return phone; }
};
#endif

```

```cpp
//This program demonstrates a class with a destructor 
#include <iostream>
#include "ContactInfo.h"
using namespace std; 

int main()
{
	//DEfine a ContactInfo object with the following data:
	//Name: Kristen Lee, Phone number: 555-2021
	ContactInfo entry("Kristen Lee", "555-2021");

	//Display the object's data
	cout << "Name: " << entry.getName() << endl;
	cout << "Phone Number: " << entry.getPhoneNumber() << endl; 
	return 0;
}
```

<aside>
🗒️ Destructor cannot accept arguments, so they never have a parameter list.

</aside>

## 8. Overloading constructor

Concept: A class can have more than one constructor. 

A class can have more than one constructor, as long as their parameters lists are different. 

### Only one default constructor and one destructor.

A class can only have one default constructor. A default constructor is the constructor has no arguments or have a default argument in their parameters. It would be an error to create a constructor that accepts no parameters along with another constructor that has default arguments for all its parameters. 

A class also can only have one destructor.

## 9. Copy Constructor 
**Concept:** A copy contructor is a special constructor that is called whenever a mew bject is created and initialized with another object's data;

Contents of [StudentTestScores.h](https://github.com/lnttran/C-Course/blob/main/Class/Constructor/StudentTestScores.h)

**Problem:** The following statement creates a StudentTestScores object name `student1`, whose `testScores` member references dynamically allocated memory holding an array of 5 double's 
```cpp
StudentTestScore student1("John", 5); 

StudentTestscore student2 = student1;
```
The statement above uses `student1` object to create and initialize `student2` object. The constructor of `student2` isn't called. Instead, the memberwise assignment takes place, copying each of the `student1`'s number variables into `student2`. This means that a separate section of memory is not allocated for `student2`'s testScore member. It simply gets a copy of the address stored in `student1`.**Both pointer point to the same address.**

**Solution:** Create a copy constructor for the object. It has the same form as other constructors, except it has a reference parameeter of the same class type as the object itself.
```cpp
StudentTestSCore (StudentTestScores &obj)
{ studentName = obj.studentName; 
  numTestScores = obj.numTestScores;
  testScore = new double[numTestScore]; 
  for (int i = 0; i < numTestScore; i++)
     testScore[i] = obj.testScores[i]; 
}
```
The studentObjectScores object that appears on the right side of the = operator is passed as an argument to the copy constructor. `student2`'s testScore member will properly reference its own dynamically allocated memory. There will be no danger of `student1` inadvertently destroying or corrupting `student2`'s data
<aside>
🗒️ C++ requires that a copy constructor's parameter be a reference object.

</aside>

The `const` key word ensures that the function cannot change the contents of the parameters. This will prevent you from inadvertently writing code that currupts data.
```cpp
StudentTestSCore (const StudentTestScores &obj)
{ studentName = obj.studentName; 
  numTestScores = obj.numTestScores;
  testScore = new double[numTestScore]; 
  for (int i = 0; i < numTestScore; i++)
     testScore[i] = obj.testScores[i]; 
}
```

