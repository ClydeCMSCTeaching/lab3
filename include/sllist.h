#ifndef  SLLIST_H
#define SLLIST_H

typedef struct sllist_node_ sllist_node;
struct sllist_node_ {
    void *item;
    sllist_node* next;
};

typedef struct {
    sllist_node* head;
} Sllist; // capital letter for user iterface class


Sllist* sllist_create();

void sllist_destroy(Sllist* list);

void* sllist_iterator(Sllist *list);

//retrieve the index-th item from the list
void* sllist_index(Sllist* list, int index);

//insert the item into the list at position index
void sllist_insert(Sllist* list, int index, void* item);

//remove the indexth item from the list, and return the item 
void* sllist_remove(Sllist* list, int index);

//takes a list, a pointer to the item, and a compare function
int sllist_contains(Sllist* list, void* item,  int (*comp)(void*,void*));

//returns a pointer to the item when it is found based on comparing the item and the list items using comp
void* sllist_find(Sllist* list, void* item,  int (*comp)(void*,void*));

//print list where we print the item pointers
void sllist_printp(Sllist* list);

//print list where we use the format function
void sllist_printf(Sllist* list, void (*f)(void*));

int sllist_size(Sllist* list);







#endif