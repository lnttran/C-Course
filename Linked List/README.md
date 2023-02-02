- Lecture Video 
        
        [Creating the Node of a Single Linked List](https://www.youtube.com/watch?v=DneLxrPmmsw)
        

## Introduction to the linked list ADT

**Concept:** Dynamically allocated data structures may be linked together in memory to form a chain.

A linked list is a series of connected nodes, where each node is a data structure. A linked list can grow or shrink in size as the program runs. If the new data need to be added to a linked list, the program simply allocates another node and inserts it into the series. If a particular piece of data needs to be removed from the linked list, the program deletes the node containing the data. 

- Advantages:
    - linked list can easily grow or shrink in size.
    - A node inserted into or deleted from the list is faster than vectors.
### The composition of the linked list

Each node in a linked list contains one or more members that represent data. In addition to the data, each node contains a pointer, which can point to another node. 

<aside>
📍 List head → the first node → the second node → the third node → null (last one in the list, address 0)

</aside>

### Declarations

A linked list is created in C++

`struct ListNode`

`{`

`double vale; //the first member of the LestNode strucutre is a double named value. Used to be hold node's data.`

`ListNode *next; //The second member is a pointer named next`

`};`

Because the ListNode structure contains a pointer to an object of the same type as that being declared, it is known as *self-referential data structure*. That it creates nodes that point to another nodes with the same data types. 

## Linked List Operations

Concept: The basic linked list operations are appending a node, traversing the list, inserting a node, deleting a node and destroying the list.

Check the visual studio code folder Linked List

The first call to appendNode passes 2.5 as the argument. In the following statements, a new node is allocated in memory, 2.5 is copied onto its value member and nullptr is assigned to the node’s next pointer: 

```cpp
newNode = new ListNode; 
newNode →value = num; 
newNode →next = nullptr; 
```

![Figure 1: State of the head pointer and the new node ](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/898d53a9-37bc-43c3-82d8-71da330ddc07/Untitled.png)

Figure 1: State of the head pointer and the new node 

The next statement to execute is the following if statement: 

```cpp
if (!head)
head = newnode; 
```

Because head is a null pointer, the condition !head is true. The statement head = newNode; is executed, making newNode the first node in the list.

![Figure 2: Head points to newNode](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/282babed-b757-4212-9d47-1dbd26cca0de/Untitled.png)

Figure 2: Head points to newNode

In the second call to appendNode, 7.9 is passed as the argument. Once again, the first three statement in the function create a new node, store the argument in the node’s value member and assigned its next pointer to nullptr.
