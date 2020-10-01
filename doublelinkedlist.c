#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

typedef struct dnode{
    struct dnode* prev;
    struct dnode* next;
    int data;
}node;

node* createNode(int elm){
    node* t=(node*)malloc((sizeof(node)));
    t->data=elm;
    t->prev=NULL;
    t->next=NULL;
}

node* insert(node* head, int elm){
    node* t=createNode(elm);
    node* p=head;
    while(p->next!=NULL&&){
        p=p->next;
    }
    p->next=t;
    t->prev=p;
    return head;
}