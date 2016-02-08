#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp_in ,*fp_out;
  char *ptr;
  char in_file[16] ,out_file[16];
  char buf[1024];
  int a=0;

  printf("Input File:");
  scanf("%s",&in_file);
  printf("Output File:");
  scanf("%s",&out_file);

  if((fp_in=fopen(in_file,"r"))==NULL){
    exit(1);
  }
  if((fp_out=fopen(out_file,"w"))==NULL){
    exit(1);
  }

  ptr = buf;
  while(fscanf(fp_in,"%c",buf)!=EOF){
    *ptr++;
    a++;
     }

  
  fprintf(fp_out,"文字数：%d\n",a);
  
  fclose(fp_in);
  fclose(fp_out);
}

/*
[v017ff@YBS07 ~/kadai1019]$ gcc kadai6-1a.c -o kadai6-1a.out
[v017ff@YBS07 ~/kadai1019]$ ./kadai6-1a.out
Input File:data.txt
Output File:datak.txt
[v017ff@YBS07 ~/kadai1019]$ cat datak.txt
文字数：9
[v017ff@YBS07 ~/kadai1019]$ 
*/
