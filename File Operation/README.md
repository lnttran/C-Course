## 1. Using File for Data Storage

**Concept:** When a program needs to save data for later use, it writes the data in a file. The data can then be read from the file at a later time.

### Types of Files

In general, there are two types of files: text and binary. 

### File Access Methods

There are two general ways to access data stored in a file: Sequential access and direct access. Sequential-access file access data from the beginning to the end of the file. The random-access file (direct-access file) can jump directly to any piece of data in the file.

|  File Stream Data Type | Description |
| --- | --- |
| ofstream | Output file stream. You create an object of this data type when you want to create a file and write data to it |
| ifstream | Input file stream. You create an object of this data type when you want to open an existing file and read data from it |
| fstream | File stream. Objects of this data types can be used to open files for reading, writing and both |

### Detecting the End of the File

```cpp
// This program reads the data from file 
#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	ifstream file; 
	int number;
	file.open("ListofNumber.txt");

	//Read the numbers from the file and display them
	while (file >> number)
	{
		cout << number << endl;
	}
	//Close the file
	file.close(); 
	return 0; 
}
```

while ( file >> number) is the statement used as the Boolean expression in the while loop. If the item is successfully read from the file, the item is stored in the number variable and the expression returns true to indicate that it succeeded. The loop repeats. If there are no more item to read from the file, the Boolean expression returns false, indication that it did not read a value. The loop terminate.

### Texting for File Open Errors

```cpp
//This program tests for file open errors
#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	ifstream file; 
	int number; 
	file.open("number.txt");

	//If the file successfully opened, process it 
	if(file) //Can be written in another way : if (file.fail())
	{
		//Read the numbers from the file and displays
		while (file >> number)
		{
			cout << number << endl; 
		}
		file.close(); 
	}
	else
	{
			cout << "Error opening the file."}
	}
	return 0; 
}
```

## 2. Using the fstream data type

You can use an fstream object’s open function to open file. An fstream object’s open function requires two arguments. The first argument is a string containing the name of the file. The second argument is a file access flag that indicates the node in which you wish to open the file. 

dataFile.open(”info.txt”, ios::out);

| File Access Flag | Meaning |
| --- | --- |
| ios::app | Append mode. If the file already exists, its contents are preserved and all output is written to the end of the file. |
| ios::ate | If the file already exists, the program goes directly to the end of it. Output may be written anywhere in the file. |
| ios::binary | Binary mode. When a file os opened in binary mode, data are written to or read from it in pure binary format |
| ios::in | Input mode |
| ios::out | Output mode |
| ios::trunc | If the file already exists, its contents will be deleted. This is default mode used by the ios::out. |

### Passing File Stream Objects to Functions

******************Concepts:****************** File stream objects may be passed by reference to functions.

```cpp
bool openFileIn (fstream &file, string name)
{
    file.open(name, ios::in);
    if (file.fail())
        return false; 
    else 
        return true; 
}
```

### The getline Function

```cpp
//This file demonstrates the getline function with a specific delimiter
#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

int main ()
{
    string input; 
    fstream data("data.txt", ios::in); 

    if (data)
    {
        getline(data, input, '$');
        while (data)
        {
            cout << input << endl;
            getline(data, input, '$');
        }
        data.close(); 

    }
    else 
    {
        cout << "Cannot open file.\n";
    }
    return 0;
}
```

### The get Member Function

The file stream object’s get member function is also useful. It reads a single character from the file. 

`inFile.get(char)`

### The put member Function

The `put` member function writes a single character to the file. 

`outFile.put(char)`

## 3. Random-Access File

**Concept:** Random access means non-sequentially accessing data in the file

### The seekp and the seekg Member Functions

The seekp function is used with files opened for output, and seekg is used with files opened for input.
| Mode Flag | Description |
| --- | --- |
| ios::beg | The offset is calculated from the beginning of the file. |
| ios::end | The offset is calculated from the end of the file |
| ios::cur | The offset is calculated from the current position. |
