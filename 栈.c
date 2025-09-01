#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>//包含bool的头文件

typedef struct Node
{
    int data;
    struct Node * pNext;
}NODE, * PNODE;

typedef struct Stack
{
    PNODE pTop;
    PNODE pButom;
}STACK,*PSTACK;//STACK 指的是 structStack
//栈的创建