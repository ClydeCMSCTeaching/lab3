# Lab 3: Data Structures

In this lab you will implement three different data structures. If you are ever are doing coding interviews, keep this code around (you'll want to study it).

You will also be creating some performance information to compare various data structures for their usefulness. 

You will create a multi-file project, including multiple folders. 

```

```

# Requirements 

1. Create a library of generic data structures (required structs and functions below)
2. Create unit tests **for all functions in your library.**
3. Run performance testing (comparing among different compilier optimizations)
4. Write a report outlining the results of the performance testing, and compare it to what the theorectical results might be.

# Creating Your Data Structure Library

We will use a standard file structure found in production coding environments. 

```
src - 
include  -


```


#### Creating a Shared Object
Look [here](https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html)

# Vectors


# Linked Lists

### Single Linked List
Call your struct for single linked list `sllist`. The files should be named `sllist.h` and `sllist.c`. 
- Constructor  `sllist* sllist_create()`
- Destructor `void sllist_destroy(sllist *list)`
- Iterator `void *sllist_iterate(sllist *list)`
- Random Access `void* sllist_index(size_t i)`
- head, tail access `void* sllist_head(sllist *list); void* sllist_tail(sllist *list)`
- remove node `void* sllist_remove_node(sllist *list, int index)`
- find node `void* sllist_find(sllist *lst,void* v);`
- `int sllist_is_empty(sllist *lst); int sllist_contains(sllist *lst,void* v);`

### Double Linked List
Call you struct for double linked list `dllist`. The files shouild be named `dllist.h` and `dllist.c`. 
- Constructor  `dllist* dllist_create()`
- Destructor `void dllist_destroy(dllist *list)`
- Iterator `void *dllist_iterate(dllist *list)`
- Random Access `void* dllist_index(size_t i)`
- head, tail access `void* dllist_head(dllist *list); void* dllist_tail(dllist *list)`
- remove node `void* dllist_remove_node(dllist *list, int index)`
- find node `void* dllist_find(dllist *lst,void* v);`
- `int dllist_is_empty(dllist *lst); int dllist_contains(dllist *lst,void* v);`

# Stack and Queues

# Trees

### Binary search trees.

###  Heaps


# Hash Tables

## 

## Comparisons

Compare across all data structures the following functions:
- Random access (time it takes to access a particular random element)
- Iteration time (time it takes to loop over all the elements)
- Find time (time it takes to find a particular element)
- Remove time (time it takes to remove a random element)
- Insert time (time it takes to insert an element into a random position if possible)

Please put these times into graphs (using Excel, `matplotlib` or whatever suits you). Label the graphs with legends, axis labels, titles, and appropiate captions. 

In the `perf_main.c`, I placed an example fo how to do timing. You should create thunks for running all operations. Then you can collect the data from the file. I will offer `+5` bonus points on this lab if you meet the following criteria: Write to file the output timings in CSV format (+5)

| Data Structure      | Random Insert | Random Read | Contains (x) | Iteration | Random Remove
| -----------         | -----------   | ----------- | -----------  |  ----------- | ----------- |
| Doubly Linked List | X | X | X | X | X | 
| Singly Linked List | X | X | X | X | X | 
| Stack (dll)        | X | X | X | X | X | 
| Queue (dll)        | X | X | X | X | X | 
| Binary Search Tree | X | X | X | X | X | 
| Hash Map           | X | X | X | X | X | 
| Vector             | X | X | X | X | X | 


**WARNING: DO NOT USE COMPILER OPTIZATIONS WHEN COMPILING MAIN!!**

Why? This could lead to optimizing your timing code, which will lead to inaccurate timing. You want to compile your `.so` file with the optimizations, but you do not want to optimize the main function running it! In the case of out of order execution, the timing functions could be reordered without the compiler realizing you want the timing operations to be in very particular places. 