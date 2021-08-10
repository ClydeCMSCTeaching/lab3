#include <time.h>
#include <stdio.h>

#include "sllist.h"

double timeThunk(void (*f)(void)) {
    double msec;
    clock_t start, diff;

    start = clock();
    (*f)();
    diff = clock() - start;

    msec = (diff * 1000 / CLOCKS_PER_SEC) / 1000.0;
    return msec;
}

void test_func() {
    unsigned long sum = 0;
    for (int i = 0; i < 1000000; i++) {
        sum += i;
    }
}

int main() {
    double time = timeThunk(test_func);
    printf("Time %f seconds", time);
}
