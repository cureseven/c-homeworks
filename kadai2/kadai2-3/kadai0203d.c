#include<stdio.h>
#include<math.h>
#define N 3     /*ÇÛÎó¿ô*/

int main(void){

  int data[N];
  int *ptr;
  int i,j;
  double sum1=0.0,sum2=0.0,ave,dev;

  for(i=0; i<N ; i++){
    printf("À°¿ô:");
    scanf("%d" , &data[i]);  /* ÇÛÎó¤ËÃÍ¤òÂåÆş*/
   }

  ptr = data;
  for(j=0; j<N ;j++){
  *(ptr+j) = data[j];     /* Ìğ°õ¤ÎÀè¤ÎÃÍ¤¬data[i]¤ÎÃÍ*/
    sum1 += data[j];
    sum2 += data[j]*data[j];
  }
  
  ave = sum1/N;
  dev = sqrt(sum2/N -ave*ave);

  printf("Ê¿¶Ñ¡á%f¡¢É¸½àÊĞº¹¡á%f\n",ave,dev);
  
 return(0);

}
