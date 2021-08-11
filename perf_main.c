#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "mydslib.h"

double get_time() {return clock();}

int randomMax(int max) {
    return (int) rand() % max;
}

int* allocRandomInserts(int size) {
    int *indexs = (int*)malloc(size * sizeof(int));
    for (int i = 1; i < size; i++) {
        indexs[i] = randomMax(i);
    }
    return indexs; 
}


int* allocRange(int size) {
    int *indexs = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        indexs[i] = i;
    }
    return indexs; 
}


double timeDouble(void (*f)(void*, void*, void*), void* obj, void* init, void* order) {
    double seconds;
    clock_t start, diff;

    start = get_time();
    (*f)(obj, init, order);
    diff = get_time() - start;

    seconds = (diff / (double) CLOCKS_PER_SEC);
    return seconds;
}

void test_sslist_insert(void* starting_struct, void *nums_insert, void *order_ins) {
    int *nums = (int*) nums_insert;
    int *order = (int*) order_ins;
    Sllist list =  *((Sllist*)starting_struct);
    for (int i = 0; i < 100000; i++) {
        sllist_insert(&list, order[i], nums  + i);
    }
}

int main() {
    srand(time(NULL)); // init only call once
    int sizes[5] = {0, 100, 1000, 10000, 100000};

    // test sslist 
    for (int i = 0; i < 5; i++) {
        
        double time = timeDouble(&test_sslist_insert, );
        printf("Time %f seconds\n", time);
    }   
}