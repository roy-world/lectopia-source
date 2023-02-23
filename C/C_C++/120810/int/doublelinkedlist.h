#pragma once
#pragma warning(disable:4996)
#include <stddef.h>

typedef struct _node Node;
typedef struct _node{  // Node 구조체 선언
	Node *prev;
	Node *next;
}Node;

typedef struct _linkedlist{		// LinkedList 구조체 선언
	 Node *headp;
	 Node *tailp;
	 Node *curp;
	int len;
}LinkedList;


void create(LinkedList *);
Node * appendFromTail(LinkedList *, void *, size_t, void(*)(void *, void *));
Node * appendFromHead(LinkedList *, void *, size_t, void(*)(void *, void *));
void display(LinkedList *list, void(*dataPrint)(void*));
Node* insertBefore(LinkedList *list, Node *index, void *item, size_t size, void(*myMemcpy)(void *, void *));
Node* insertAfter(LinkedList *list, Node *index, void *item, size_t size, void(*myMemcpy)(void *, void *));
Node* searchUnique(LinkedList *list, void *pos, int (*compare)(void *, void *));
Node* nodeDelete(LinkedList *list, Node *index, void(*dataFree)(void *));
void destroy(LinkedList *list, void (*dataFree)(void *));
void sort(LinkedList *list, size_t size, int (*compare)(void *, void *), void (*myMemcpy)(void *, void *));
void getAt(Node *index, void *getData, void(*myMemcpy)(void *, void *));