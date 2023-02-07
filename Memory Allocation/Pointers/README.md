## 1. Pointer
**Concept:** a pointer variable is a variable that stores the address where another object resides.

### Pointers to Objects 
```cpp
int main()
{
  IntCell *m; //The *indicarte that m is a pointer vairable; it allowed to point an Incell object. The value of m is the address of the objetcts that points at.
  
  m = new IntCell{0};
  m->write(5); 
  cout << "Cell contents: " << m->read90 << endl; 
  
  delete m; //avoid memory leaks
  return 0; 
}
```

### Address-of Operator (&) 
This operator returns the memory location/ address where the object resides. 
