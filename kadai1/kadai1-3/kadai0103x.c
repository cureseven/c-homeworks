#include<stdio.h>
int main(void){
  int i=1,j=2;
  int *ptr1,*ptr2;
  int temp;

  printf("%d %d\n",i,j);

  ptr1=&i;
  ptr2=&j;

  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

  printf("%d %d\n",i,j);
  printf("%p %p\n",&i,&j);

 return   ;
}
