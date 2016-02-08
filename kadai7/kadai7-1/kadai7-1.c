#include<stdio.h>

typedef struct complex complex;  /*complexというデータ型を定義*/
int main(void){
  struct comp{     /*複素数：complex number*/
    int real;      /*実数部分*/
    int imag;      /*虚数部分*/
  };
  struct comp c1,c2,cf;   /*cx.real cx.imag  cy.real cy.imag  cz.real cz.imag*/

  printf("複素数1＝  x + iy\n(x,y)=");
  scanf("%d %d",&c1.real,&c1.imag);
  printf("複素数2＝ x + iy\n(x,y)=");
  scanf("%d %d",&c2.real,&c2.imag);

  cf.real = c1.real*c2.real - c1.imag*c2.imag;
  cf.imag= c1.imag*c2.real + c1.real*c2.imag;

  printf("複素数の積 = %d + %di\n",cf.real,cf.imag);
  return(0);
}

/*

[v017ff@YAS72 ~/kadai1207]$ gcc kadai7-1.c -o kadai7-1.out
[v017ff@YAS72 ~/kadai1207]$ ./kadai7-1.out
複素数1＝  x + iy
(x,y)=2 3 
複素数2＝ x + iy
(x,y)=4 5
複素数の積 = -7 + 22i
[v017ff@YAS72 ~/kadai1207]$ 

*/
