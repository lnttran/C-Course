## 1. Character Testing 
**Concepts: ** The C++ library provides several functions for tesing characters. To use theses functions you must include <cctype> hear file.

The table below lists several character-tesing functions. (Should include <cctype>)
| Character Funtion | Description |
|---|---|
|isalpha| Return true if the argument is a letter of the alphabet.|
|isalnum| Return true if the argument is a letter of alphabet or digit|
|isdigit| Return true of the argument is a digit from 0 to 9|
|isprint| rEturn true if the argument is a printable charater|
|islower| Return true if the argument is a lowercase letter|
|ispunct| Return true if the argument is a printable character other than a digit, letter or space.|
|isupper| Return true if the argument is an uppercse letter|
|isspace| return true if the argument is a whitespace charater.|

## 2. Character Case Conversion
**Concept:** The C++ library offers functions for converting a charater to uppercase to lowercase.(must include <cctype>.

|Function|Description|
|---|---|
|toupper| Returns the uppecase quivalent of its argument|
|tolower| Return the lowercase equivalent of its argument|

## 3. Introduction to C String 
**Concepts:** In C++, a C-string is a sequence of charaters stored in consecutive memory locations, terminated by the null character.

```cpp
#include <iostream>
using namespace std; 

int main()
{
  const char *str = "Hello World";
  //"Hello World" is considered as string constant which can utilized a character array. 
  //str is understood an array of character that contain a pointer point to the first character of the array. 
  
  cout << *str << endl; //Output: H
  cout << str << endl ; //Output : Hello world 
  cout << str[3] << endl; //Output : l
}
```

  
> The built-in string is simply an array of characters and thus has the liabilitoes of arrays plus a few more. For instance, == dos not correctly co,pare two built-in strings.

## 4. Library Fucntions for Working with CString
**Concepts:** The C++ library has numerous functions for handling C-strings. These functions perform various tests and manipulation and required <cstring> hear file be included.
  
### The `strlen` Function 

```cpp
#include <cstring>
char name[] = "Thomas Edision"; 
int lenth; 
length = strlen(name); //returns the length of the string. This function looks for the null terminator to indicate the end of the string. 
```

### The `strcat` function 
The `strcat` function accetps two pointers to C-string as its arguments. The functiosn concatenates or appends one string to another. 
```cpp
strcat(string1, string2) //copies the contents of string2 to the end of string1
  
//The strcat functions does's insert a space, make sure that string1 is large enough to get the copy of string2 + null operator.
```
### The `strcpy` function 
An array cannot be assigned to another with the = operator. Each infividual elemt must be assigned, usually inside a loop. The `strcyp` function can be used to copy one string to another. 

```cpp 
const int SIZE = 13;
char string1[SIZE]; 
care string2[SIZE];
strcpy(string1, string2); //the contents of the second arguemnt are copied to the memory location specified by the first argument, including the null operator. 
```
### The `strncat` and `strncpy` Functions 
The `strncat` and `strncpy` functions takes the third argument specifying the maximum number of character from the second string to append to the first. 

```cpp
const int SIZE1 = 17; 
const int SIZE2 = 18; 

char string1[SIZE1] = "Welcome "; 
char string2[SIZE2] = "to North Caralonia.";

//substruction the size of the array to the length of the string stored in the array pluse 1 or \0
maxChars = sizeof(string1) - (strlen(string1) + 1); 

strncat(string1, string2, maxChars);
```
### The `strstr` Function 
The `strstr` function searches for a string inside of a string. If the function finds the second string inside the first, it returns the address of the occurance of the second string within the first string. Otherwise, it return nullptr (the address 0)
```cpp
  strPtr = strstr(array, "seven"); 
  //the first argument is the string to be searched.
  //the second argument is the string for which to look for. 
```
### The `strcmp` Function
`strcmp` function takes two C-string as arguments and returns an integer that indicates how the two strings compare to each other.
```cpp
int strcmp (char *string1, char *string2);
```
- The result zero if the two string are equal in a character-by-character on basis
- The result is negative if string1 comes before string2 in alphabet order.
- The result is positive if string2 comes before string1 in alphabet order.

The expression !strcmp(string1, string2) returns true when both strings the same, false when they are different.

## 5. String/Numeric Conversion Function 
**Concenpt:** the C++ library provides function for converting C-string and string objects to numeric data types and vice versa.

### The `to_string` Function. 
The `to_string` function convert numberic value to a string object. Required the <string> header file.

### Using Pointers to Pass C-string Argument. 

## 6. More anout the C++ `string` class
**Concepts:** Standdard C++ provides a special data types for storing and working with strings.
| string address; | |
| string name("william")| |
| string person1(person2)| |
| string str(str2, 5)| | |
| string loneFull('z', 10);| |
| string firstName(fullName, 0, 7); | |

### Using `string` class Member Function. 
The `string` class also has member functions. 
```cpp
//This program demonstrates a string object's length member function 
#include <iostream>
#include <string>
using namepsace std;

int main()
{
  string town; 
  
  cout << "Where do you love?"; 
  cin >> town; 
  cout << "Your town's name has " << town.length() << "characters." << endl;
  
  return 0; 
}
```
  |Member Function Example|Description|
  |---|---|
  |mystring.append()| |
  |mystring.append()| |
  |mystring.assign()| |
  |mystring.at(x) | |
  |mystring.begin()| |
  |mystring.c_sctr()| |
  |mystring.capacity()| |
  |mystring.compare(str)||
  |mystring.clear()||
  
 ### The `c_str` function 
 The c_str function add the null terminator to the end of the array of the string. It will returns a null-terminated char array version of the string. 
 ```cpp
 #include <iostream>
  #include <string>
  #include <cstring>
  using namespace std; 
  
  int main()
  {
    string str = "Hello, World!";
    const char* cstr = str.c_str(); 
    cout << strlen(cstr); //Output = 13, which contains null operator. 
  
    return 0; 
  }
  
