#ifndef DLLIST_H
#define DLLIST_H

typedef struct dllist_node_ dllist_node;
struct dllist_node_ {
    void *item;

    dllist_node* prev;
    dllist_node* next;
};

typedef struct {
    dllist_node* head;
} Dllist; // capital letter for user iterface class

// does not return a pointer! the pointer is kept safe inside this list. Just
// set head to NULL. 
Dllist dllist_create();

// again, no pointers since we keep the pointer safe inside the struct
void dllist_destroy(Dllist list);

//This one must take a pointer so we can pass it NULL. 
void* dllist_iterator(Dllist *list);

//retrieve the index-th item from the list
void* dllist_index(Dllist list, int index);

//insert the item into the list at position index
void dllist_insert(Dllist list, int index, void* item);

//remove the indexth item from the list, and return the item 
void* dllist_remove(Dllist list, int index);

//takes a list, a pointer to the item, and a compare function
int dllist_contains(Dllist list, void* item,  int (*comp)(void*,void*));

//returns a pointer to the item when it is found based on comparing the item and the list items using comp
void* dllist_find(Dllist list, void* item,  int (*comp)(void*,void*));

//print list where we print the item pointers
void dllist_printp(Dllist list);

//print list where we use the format function
void dllist_printf(Dllist list, void (*f)(void*));

int dllist_size(Dllist list);

#endif