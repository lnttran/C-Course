## 1. Introduction to the STL vector 
**Cencept:** the STL offers a vector data type, which in many ways, is superior to standard arrays 

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
//This 
 

