#include<stdio.h>
#include<math.h>
#define N 3     /*�����*/

int main(void){

  int data[N];
  int *ptr;
  int i,j;
  double sum1=0.0,sum2=0.0,ave,dev;

  for(i=0; i<N ; i++){
    printf("����:");
    scanf("%d" , &data[i]);  /* ������ͤ�����*/
   }

  ptr = data;
  for(j=0; j<N ;j++){
  *(ptr+j) = data[j];     /* ���������ͤ�data[i]����*/
    sum1 += data[j];
    sum2 += data[j]*data[j];
  }
  
  ave = sum1/N;
  dev = sqrt(sum2/N -ave*ave);

  printf("ʿ�ѡ�%f��ɸ���к���%f\n",ave,dev);
  
 return(0);

}
