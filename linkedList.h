//
// Created by xuhui on 2017/12/4.
//

#ifndef DATA_STRUCTURE_C_LINKEDLIST_H
#define DATA_STRUCTURE_C_LINKEDLIST_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct LNode{
    int data;
    struct LNode * next;
} LNode;
void create(LNode *l,int n);
#endif //DATA_STRUCTURE_C_LINKEDLIST_H