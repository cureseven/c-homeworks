#include<stdio.h>

typedef struct complex complex;  /*complex�Ȥ����ǡ����������*/
int main(void){
  struct comp{     /*ʣ�ǿ���complex number*/
    int real;      /*�¿���ʬ*/
    int imag;      /*������ʬ*/
  };
  struct comp c1,c2,cf;   /*cx.real cx.imag  cy.real cy.imag  cz.real cz.imag*/

  printf("ʣ�ǿ�1��  x + iy\n(x,y)=");
  scanf("%d %d",&c1.real,&c1.imag);
  printf("ʣ�ǿ�2�� x + iy\n(x,y)=");
  scanf("%d %d",&c2.real,&c2.imag);

  cf.real = c1.real*c2.real - c1.imag*c2.imag;
  cf.imag= c1.imag*c2.real + c1.real*c2.imag;

  printf("ʣ�ǿ����� = %d + %di\n",cf.real,cf.imag);
  return(0);
}

/*

[v017ff@YAS72 ~/kadai1207]$ gcc kadai7-1.c -o kadai7-1.out
[v017ff@YAS72 ~/kadai1207]$ ./kadai7-1.out
ʣ�ǿ�1��  x + iy
(x,y)=2 3 
ʣ�ǿ�2�� x + iy
(x,y)=4 5
ʣ�ǿ����� = -7 + 22i
[v017ff@YAS72 ~/kadai1207]$ 

*/
