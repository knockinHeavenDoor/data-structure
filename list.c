//
// Created by xuhui on 2017/12/2.
//
#include "list.h"
#define INIT_SIZE 100
#define PLUS 10
#define true 1
#define false 0

int main(){
    struct List lis;
    int x = initList(&lis);
    int q = insert(&lis,1,2);
    insert(&lis,2,3);
//    printf("List:%d\n", lis.elem);
//    printf("List:%d\n", lis.size);
//    printf("List:%d\n", lis.length);
//    printf("q:%d",lis.elem);
    for(int i = 0; i<lis.length; i++){
        printf("q:%d\n",get(lis,i));
    }
    return 0;
}

int initList(list *l){
    (*l).elem = (int *)malloc(INIT_SIZE * sizeof(int));
    if(! (*l).elem) {
        return (int)false;
    }
    (*l).length = 0;
    (*l).size = INIT_SIZE;
    return (int)true;
}

int insert(list *l, int i, int ele){
    int *newbase;
    if(i < 1 || i> (*l).length + 1){
        return (int)false;
    }
    if((*l).length >= (*l).size){
        newbase= (int *)realloc((*l).elem,((*l).size+PLUS)* sizeof(int));
        if(!newbase){
            exit(0);
        }
        (*l).elem = newbase;
        (*l).size += PLUS;
    }
    int *q = &((*l).elem[i-1]);
    for(int *p = &((*l).elem[(*l).length-1]); p>=q;--p) *(p+1) = *p;
    *q = ele;
    ++(*l).length;
    return (int)true;
}

int get(list l, int i){
    return l.elem[i];
}