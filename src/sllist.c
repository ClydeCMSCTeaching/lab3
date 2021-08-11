#include <stdio.h>
#include <stdlib.h>

#include "sllist.h"

/* This is here to show you that there are many cases to check!
 * you should double check this
 */
void sllist_insert(Sllist* list, int index, void* item) {
    if (list == NULL) {
        return;
    }

    sllist_node *pos = list->head;
    
    if (pos == NULL) {
        if (index != 0) {return;}
        list->head = (sllist_node*) malloc(sizeof(sllist_node));
        list->head->item = item;
        return;
    }

    if (index == 0) {
        sllist_node *tmp = list->head;
        list->head = (sllist_node*) malloc(sizeof(sllist_node));
        list->head->item = item;
        list->head->next = tmp;
        return;
    }

    while (pos != NULL && pos->next != NULL) {
        if (index == 0) {
            sllist_node *tmp = pos->next;
            pos->next = (sllist_node*) malloc(sizeof(sllist_node));
            pos->next->item = item;
            pos->next->next = tmp;
            return;
        }
        index--;
    }   
}