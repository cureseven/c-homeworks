#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
  FILE *fp_in ,*fp_out;
  char in_file[16] ,out_file[16];
  int buf[1024];
  int v[1024];
  int i=0 ,sum=0,j=0;
  double ave,a ,b;

  printf("Input File:");
  scanf("%s",in_file);
  printf("Output File:");
  scanf("%s",out_file);

  if((fp_in=fopen(in_file,"r"))==NULL){
    exit(1);
  }
  if((fp_out=fopen(out_file,"w"))==NULL){
    exit(1);
  }
  while(fscanf(fp_in,"%d",buf)!=EOF){
    v[i] = buf[0];
    sum = sum + buf[0];
    i++;
  }
  ave=(double)sum/i;

  for(j=0;j<i;j++){
    a= (v[j]-ave)*(v[j]-ave);
  }
  b= sqrt(a/i);
  fprintf(fp_out,"Ê¿¶Ñ¡§%f\n",ave);
  fprintf(fp_out,"É¸½àÊÐº¹¡§%f\n",b);
  fclose(fp_in);
  fclose(fp_out);
}
