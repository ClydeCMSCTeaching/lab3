#ifndef STACK_H
#define STACK_H
#include "dllist.h"

typedef struct {
    dllist_node *top;
} Stack;

Stack* stack_init();

//becareful what you need to free
void stack_destroy(Stack* stack);

int stack_isempty(Stack* stack);

int stack_size(Stack* stack);

void* stack_pop(Stack* stack);

void stack_push(Stack* stack, void* item);

#endif