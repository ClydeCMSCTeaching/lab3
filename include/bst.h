#ifndef BST_H
#define BST_H

typedef int (*Comparator)(void*, void*);

typedef struct bstnode_ bstnode;
struct bstnode_ {
    void* data; 
    bstnode *right_child; 
    bstnode *left_child; 
};

typedef struct {
    bstnode *root;
    Comparator comp;
} Bst;

Bst* bst_create(Comparator comp);
void bst_destroy(Bst* bst);

void* bst_iterate(Bst *bst);

//return 0 if successful, return -1 if failure, return 1 if *v was already in the tree
int bst_insert(Bst* bst, void* v);
void* bst_remove(Bst* bst, void* v);
int bst_contains(Bst* bst, void* v);
void* bst_index(Bst* bst, int index);

int bst_size(Bst* bst);



#endif