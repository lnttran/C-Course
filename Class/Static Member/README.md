## 1. Instance and Static Members

Concept: Each instance of a class has its own copies of the class’s instance variable. If a member variable is declared static, however, all instances of that class have access to that variable. If a member function is declared static, it may be called without any instances of the class being defined.

### Static Member Variables

- When a member variable is declared with the key word static, there will be only one copy of the member variable in memory, regardless of the number of instances of the class that might exit.

Class/Static Member/Tree.cpp
