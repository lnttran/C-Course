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

hi
