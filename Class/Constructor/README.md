## Constructor

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

## Passing an argument to Constructors

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
