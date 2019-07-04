//
// Created by lego on 3/07/19.
//
#include <stdbool.h>
#ifndef C_DOUBLE_LINKED_LIST_H
#define C_DOUBLE_LINKED_LIST_H
typedef void(*listIterator)(void*);
typedef struct ListNode{
    struct ListNode *next;
    struct ListNode *previous;
    void* data;
} ListNode;
typedef struct DoubleLinkedList{
    struct ListNode *first;
    struct ListNode *last;
    int size;
    int dataSize;
} DoubleLinkedList;
DoubleLinkedList* createList(int);
bool addAtFirst(DoubleLinkedList* list, void *data);
bool addAtAppend(DoubleLinkedList* list, void *data);
ListNode* createNodeFromData(void *pData);
void* getFirst(DoubleLinkedList*);
int getSize(DoubleLinkedList *list);
void *getAppend(DoubleLinkedList *list);
void interateList(DoubleLinkedList *list,listIterator iterator);
int getElementSize(DoubleLinkedList *list);
#endif //C_DOUBLE_LINKED_LIST_H