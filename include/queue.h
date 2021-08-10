#ifndef QUEUE_H
#define QUEUE_H
#include "dllist.h"

typedef struct {
    dllist_node *top;
    dllist_node *bottom;
} Queue;

Queue* queue_init();

//becareful what you need to free
void queue_destroy(Queue* queue);

int queue_isempty(Queue* queue);

int queue_size(Queue* queue);

void* queue_pop(Queue* queue);

void queue_push(Queue* queue, void* item);

#endif