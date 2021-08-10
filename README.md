# Lab 3: Data Structures

In this lab you will implement three different data structures. If you are ever are doing coding interviews, keep this code around (you'll want to study it).

You will also be creating some performance information to compare various data structures for their usefulness. 

You will create a multi-file project, including multiple folders. In `src` folder you should place all the `.c` files which have a corresponding `.h` file in the `include` folder. All mains you use for runner code should be the top level directory

# Requirements 

1. Create a library of generic data structures (required structs and functions below)
2. Create unit tests (10/100) **for all functions in your library.**
3. Run performance testing (comparing among different compilier optimizations)
4. Write a report outlining the results of the performance testing, and compare it to what the theorectical results might be. 

# Creating Your Data Structure Library

We will use a standard file structure found in production coding environments. We will be using `gcc` for this assignment which is the stanard compiler for most large-scale programming environments. Use `make` to compile your project. 

# Vectors (10/100)
You will create a vector. A vector is a dynamically resizable array.
- Constructor  `vector* vector_create()`
- Destructor `void vector_destroy(vector *vec)`
- Iterator `void *vector_iterate(vector *vec)`
- Random Access `void* vector_index(vector i)`
- Random Insert `void vector_insert(vector *vec, 

# Linked Lists (20/100)
You will create both linked list styles, single and double linked.

# Stack and Queues (10/100)
Implement a stack and a queue class with 

# Binary search trees (20/100)
Implement a binary search tree.

## Comparisons and Report (30/100)

Compare across all data structures the following functions:
- Random access (time it takes to access a particular random element)
- Iteration time (time it takes to loop over all the elements)
- Find time (time it takes to find a particular element)
- Remove time (time it takes to remove a random element)
- Insert time (time it takes to insert an element into a random position if possible)

Also compare using `-o2` and `-o1` for all of the functions. Place `-o2`, `-o1` and nothing for every single `.o` compilation in the make file (except the main!).

Please put these times into graphs (using Excel, `matplotlib` or whatever suits you). Label the graphs with legends, axis labels, titles, and appropiate captions. 

In the `perf_main.c`, I placed an example fo how to do timing. You should create thunks for running all operations. Then you can collect the data from the file. I will offer `+5` bonus points on this lab if you meet the following criteria: Write to file the output timings in CSV format (+5). You can do timing with a different style if you like. 


This is an example of the tables you should create, one for each optimization level and a couple across starting points of the size of each structure. For instance, you should initalize each structure with say 0, 100, 1000, and 10000, and 100000 things. You should then do each operation below 10,000 times. Then you plot on the x-axis the starting structure size, then you plot each data structure in different colors and optimization levels, and then you have five plots each covering each function. 

| Data Structure      | Random Insert | Random Read | Contains (x) | Iteration | Random Remove
| -----------         | -----------   | ----------- | -----------  |  ----------- | ----------- |
| Doubly Linked List | X | X | X | X | X | 
| Singly Linked List | X | X | X | X | X | 
| Binary Search Tree | X | X | X | X | X | 
| Vector             | X | X | X | X | X | 


**WARNING: DO NOT USE COMPILER OPTIZATIONS WHEN COMPILING MAIN!!**

Why? This could lead to optimizing your timing code, which will lead to inaccurate timing. You want to compile your `.so` file with the optimizations, but you do not want to optimize the main function running it! In the case of out of order execution, the timing functions could be reordered without the compiler realizing you want the timing operations to be in very particular places. 

Besides the required figures, your report should also outline the details of your testing strategy (i.e. how you ran the tests, which values of n you chose, how many times you ran each test, what data types you used). 

**You must also include the theoretical complexity of each operation for each data structure and compare it to your empircal results**. I.e. Random insert in this implementation of vector is O(n) *because there is a single loop in the worst case through all the data*, and figure 1. shows the scaling is linear. You do not need a detailed explaination of your reasoning, but you should include one. You also don't need to do any curve fitting to determine what the empircal results show. 