#include <stdio.h>
#include <stdlib.h>

//int pop(int*);
//
//typedef struct LIST{
//  int value;
//  struct LIST *next;
//} list;

typedef struct{
  int iarray[10];
  int isize;
} stack;

//int push(int arg)
//{
//  return 0;
//}

int pop(int *args)
{
  long sizeofargs=sizeof args /sizeof args[0] ;
  printf("size of args=%lu\n",sizeofargs);
  for(int i = 0; i < (int)sizeof(args); i++){
    printf("%ith data=%d\n",i,args[i]);
  }
  printf("size of array=%lu\n",sizeof(args)/sizeof(args[0]));
//  printf("size=%d\n",(int)sizeof(args));
//  printf("size=%d\n",(int)sizeof(args[0]));
  return 0;
}
int func(int *a)
{
  printf("length=%lu\n",sizeof a);
  printf("a in func=%d\n",a[0]);
  return 0;
}

int main(int argc, char *args[])
{
  // create array
  int iarray[10];
  for(int i = 0; i < 10; i++){
    iarray[i] = i+1;
  //  printf("setting: %d\n", iarray[i]);
  }
  printf("in main, iarray[0]=%d\n",iarray[0]);
  printf("in main, *iarray=%d\n",*iarray);
  printf("in main, iarray=%p\n",iarray);
  printf("in main, &iarray=%p\n",&iarray);
  printf("in main, size of a=%lu\n",sizeof iarray);
  printf("in main, size of a[0]=%lu\n",sizeof iarray[0]);
  int iresult = func(iarray);
//  i = pop(iarray);
  printf("###########\n");
  stack mystack;
  return 0;
}
