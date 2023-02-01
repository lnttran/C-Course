# Class

## 1. Introduction to classes

**Concept :** In C++, the class is the construct primarily used to create objects

- Similar to a structure
- It is data type defined by the programmer, consisting of variables and functions.
- Members of the class are private in default (cannot be accessed by programming statements outside the class).

**Access Specifier** : `private` and `public`

```cpp
double Rectangle::getArea() const 

returnType Classname::functionName(parameterList)
```

- Two colons are called *scope resolution operator.*

**Accessor :** A member function that gets a value from a class’s member variable but does not change. ( EX: getWidth, getLength)

**Mutator:** A member function that assigns a value to a member variable. (EX: setWidth, setLength)
### Using `const` with accessors

```cpp
double Rectangle::getWidth() const 
```

Marking a member function as const, the compiler will generate an error if you inadvertently write code in the function that changes the calling object’s data. ( decreases the chances f having bugs in your codes)

## 2. Definition an Instance of Class

**Concept:** A class objects must be defined after the class is declared.

- Like structure variables, class objects are not created in memory until they are defined. This is because a class declaration by itself does not create an object.

```cpp
Classname objectname; 
```

 

```cpp
Rectangle box; //declare a class object in the main function
```

### Accessing an Object’s members

The box object is defined as an instance of the Rectangle class. 

`box.setWidth(12.7)`

### Pointers to Objects

You can define pointers to class objects. The `rectPtr` is not an object, but it can hold the address of Rectangle object.

```cpp
Rectangle myrectangle; // A Rectangle object
Rectangle *rectPtr = nullptr; //A Rectangle pointer
rectPtr = &myRectangle; //rectPtr now points to myRectangle
```

<aside>
🗒️ Read more information in the C++ book

</aside>

Class object pointer can be used to dynamically allocate objects. 

```cpp
//Define a Rectangle pointer 
Reactangle *rectPtr = nullptr;

//Dynamically allocate a Rectangle object 
rectPtr = new Rectangle 

//Store values in the object's width and length 
rectPtr->setWidth(10.0)
rectPtr->setLength(15.0)

//Delete the object from memory 
delete rectPtr; 
rectPtr = nullptr;
```

### Using Smart Pointer to Allocate Objects

Use unique_ptr data type as a smart pointer.

`uniques_ptr<Rectangle> rectanglePtr (newRectangle)`;

To use the unique_ptr data type, you must #include the <memory> header file. 

## 3. Why have Private Members

**Concept:** In object-oriented programming, an object should protect its important data by making it private and providing a public interface to access that data. ****

```cpp
void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w; 
	else
	{
		cout << "Invalid width";
		exit(EXIT_FAILURE); 
	}
}
```

The mutators function can also validate the data is stored in the object’s attributes.

## 4. Focus on Software Engineering: Separating Class Specification from Implementation

**Concept:** Usually class declaration are stored in their own header files. Member function definitions are stored in their own .cpp files **** 

- A class declarations are stored in their own header files. Called *class specification* file
- The member function definitions for a class are stored in a separate .cpp file called *class implementation* file. File name usually have the same name as the class.
