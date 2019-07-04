//
// Created by lego on 3/07/19.
//

#include "double-linked-list.h"
#include <stdlib.h>

/**
 *
 * @param nodeSize tamanio en bytes del nodo que va aser almacenado en la lista
 * @return
 */
DoubleLinkedList* createList(int dataSize){
    if(dataSize<0) return 0;

    DoubleLinkedList *list= malloc(sizeof(DoubleLinkedList));
    list->first=NULL;
    list->last=NULL;
    list->size=0;
    list->dataSize=dataSize;
    return list;
}
bool addAtFirst(DoubleLinkedList* list, void *data){
    ListNode *newNode=createNodeFromData(data);
    if(!newNode) return false;

    if(!list->first){
        list->first=newNode;
        list->last=newNode;
        list->size++;
        return true;
    }
    newNode->next=list->first;
    list->first->previous=newNode;
    list->first=newNode;
    list->size++;
    return true;
}
ListNode* createNodeFromData(void *pData){
    ListNode *node=malloc(sizeof(ListNode));
    node->data=pData;
    node->next=NULL;
    node->previous=NULL;
    return node;
}
bool addAtAppend(DoubleLinkedList* list, void *data){
    ListNode *newNode=createNodeFromData(data);
    if(!newNode) return false;

    if(!list->first){
        return addAtFirst(list,data);
    }
    list->last->next=newNode;
    newNode->previous=list->last;
    list->last=newNode;
    list->size++;
}
void* getFirst(DoubleLinkedList *list){
    return list->first->data;
}
void *getAppend(DoubleLinkedList *list){
    return list->last->data;
}
int getSize(DoubleLinkedList *list){
    return list->size;
}
void interateList(DoubleLinkedList *list,listIterator iterator){
    for(ListNode *i=list->first;i!=NULL; i=i->next){
        iterator(i->data);
    }
}
int getElementSize(DoubleLinkedList *list){
    return list->dataSize;
}
