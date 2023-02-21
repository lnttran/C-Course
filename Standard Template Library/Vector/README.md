## 1. Introduction to the STL vector 
**Cencept:** the STL offers a vector data type, which in many ways, is superior to standard arrays 

> The problem with the built in C++ array is that it does not behave like a first=class object. For instance, built-in arrays cannot be copied with =, a built-in array does not remember how many items it can stored.=, an its indexing operator does not check that index is valid. 

A vector is container that can sotre data. It is like an array in the following way: 
- A vector holds a sequence of value or elements.
- A vector stores its elements in contigious memory locations
- You can use the array subscript operator [] to read the individual elements in the vector.

A vector offers several advantages over array 
- you do not habe to declare the number of elemets that the vector will have. 
- If you add a value to vector that is already full, the vector will automatically increase its size to accommodate tje new value. 
- Vectors can report the number of elements they contain. 

### Definding a `vector`
```cpp 
#include <vector>
```
<aside>
🗒️ To use the `vector` data type, you should also have the using namespace std;

</aside>

The sytax for defining vector 
```cpp 
vector<int> numbers; //define numbers as a vector of ints. Do not need to define the size of an vectors since it expands itself when the vector are full. 

vector<int> numbers(10); //You can define a stating size if you prefer.

vector<int> numbers(10,2); //Vector od 10 ints. Each element in numbers is initialize to the value 2

vector<int> set1(set2); //can initialize a vector with the value in another vector. Set2 will be a copy of set1

vector<int> numbers {10, 12, 13, 40}; //Vector of 4 ints, initialized with the value 10,12, 14, 40.
```

<aside>
🗒️ The size declaration in vector is enclosed in a paratheses not square braket.
</aside>

### Storing and Retrieving Values in a `Vector`
To store a value in an element that already exists in a vector, you may use the array subscript operator []. 
```cpp
vector <int> hours(3); 

cout << " Please enter the hours works."; 
for ( int i = 0, i < 3, i++)
  { cout << "Hours worked number # " << ( i + 1) << ": "; 
    cin >> hours[i];
  }
  
```
### Using the Range-Base `for` loop with a `vector`
```cpp
//This program demontrates the range-based for loop with a vector.
#include <iostream>
#include <vector> 
using namespace std; 

int main()
{
  //Defien and initialize a vector.
  vector<int> numbers(5);
  
  for ( int &val : numbers)
  { cout << "Enter an interger: "; 
    cin >> val; 
  }
  
  //Display the vector elemets
  for (int val : numbers)
    cout << val << endl; 
  /*
  Output: 
  10
  20
  30
  40
  50
  */
  return 0; 
}
```
### Using the push_back Member Function 
You cannot use the [] operator to access a vector element that does not exits. To store a value in a `vector` does not have a staring size, or that is already full, use the `push_back` member function. The `push_back` member function accepts a value as an argument and store that value after the last element of the `vector`.

```cpp
members.push_back(25); //store the value of 25 to the vector that is fulled or does not have size declaration. 
```

### DEtermining the Size of a `vector`
`vector` can report the number of element they contain. Using the `size` member function. 
```cpp
numValue = numbers.size();
//numbers is the vector. numValue is the variable stores the number of element in the vector numbers

voi 
//numbers is the vector. numValue is the variable stores the number of element in the vector number

void showValue (vector<int> vect)
{
  for(int i = 0, i < vect.size(), i++)
    cout << vect[i] << endl; 
}
```
### Removing Elements from a `vector`
Using `pop_back` meber function to remove the last element from a vector. 
```cpp
collection.pop_back(); 
```
### Clearing a `vector`
Using `clear` member function to completely clear contents of the `vector`.
```cpp
numbers.clear(); 
```

### Detecting an Empty `vector`
Using `empty` member function to determine of a vector is empty. The function return true if the vector is empty, false if the vector has elements stored in it. 
```cpp
if (numberVector.empty())
  cout << "No values in numberVector."
```
### Some of the vector Member Functions
|Member Function | Description |
| --- | --- |
|at(element) | Return the value of the element located at elemnt in the vector EX: x = vect.at(5). This assigned the value of the fifth element of the vect to x|
| clear()| |
| empty() | |
| pop_back() | |
| push_back(value)| |
| resize(elements, value) | Resize the vector by the elements. Each of the new elements is initialized with the value in `value`.|
| swap(vector2) | Swaps the contents of the vector with the contents of vector2. EX: `vect1.swap(vect2);` The value of vect1 is swapped with vect2.|

## 2. Copying vector 
**Concepts:** Vectors can be copied using the `=` operator. 

Vector can be copied using assignment operator `=`. The assignment operator will create a deep copy of the vector = meaning that new vector will be created with its own memory allocation, and the elements and values of the original vector will be copied into the vector. 
```cpp
#include <vector>
#include <iostream>

int main() {
  std::vector<int> v1 {1, 2, 3, 4};
  std::vector<int> v2;

  // Copy v1 into v2 using the assignment operator
  v2 = v1;

  std::cout << "v1: ";
  for (int x : v1) //Using range-base for loop 
  {
    std::cout << x << " "; 
  }
  std::cout << "\nv2: ";
  for (int x : v2) {
    std::cout << x << " "; // output: v2: 1, 2, 3, 4
  }
  std::cout << "\n";

  return 0;
}
```
