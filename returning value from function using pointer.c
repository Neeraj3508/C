#include<stdio.h>
#include<stdlib.h>

int* add(int a, int b) 
{
int *p = (int *)malloc(sizeof(int));
*p=a+b;

//free(p); //after freeing the pointer it is picking up garbage values.

// printf("value of pointer is %d",*p);
return p;	// p is a position in heap section, which is permanent storage.
}

int main() 
{
	int x=2, y=6;
int *sum;
sum = add(x,y);
printf("x+y = %d\n", *sum);
  return 0;
}