## 1. Instance and Static Members

Concept: Each instance of a class has its own copies of the class’s instance variable. If a member variable is declared static, however, all instances of that class have access to that variable. If a member function is declared static, it may be called without any instances of the class being defined.

### Static Member Variables

- When a member variable is declared with the key word static, there will be only one copy of the member variable in memory, regardless of the number of instances of the class that might exit.
### Static Member Functions

- A function that is a static member of a class cannot access any nonstatic member  in its class


🗒️ The lifetime of a class’s static member variable is the lifetime of the program. This means that a class’s static member variables come into existence before any instances of the class are created.


🗒️ A class’s static member functions can be called before any instances of the class are created. This means that a class’s static member functions can access the class’s static member variables before an instances of the class are defined in memory

