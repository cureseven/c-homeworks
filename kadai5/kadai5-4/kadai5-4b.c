#include<stdio.h>

int main(int argc,char *argv[])
{
  int i=0,j=0;
  int n=0,m=0;
  int num[100],data[100];
  int num2[100],data2[100];
  int data_new=0;
  int new=0;
  int count=0;
  FILE *fp,*fp2,*fp3;

  if(argc!=4){                                       /*argcはコマンドの数*/
    fprintf(stderr,"エラー：因数が一致しません。\n");
  }

  fp =fopen(argv[1],"r");
  fp2=fopen(argv[2],"r");
  fp3=fopen(argv[3],"w");

 if(fp==NULL){
    fprintf(stderr,"エラー：ファイル%sをオープンできません。\n",argv[1]);
    //exit(1);
  }
 if(fp2==NULL){
    fprintf(stderr,"エラー：ファイル%sをオープンできません。\n",argv[2]);
    //exit(1);
  }
  if(fp3==NULL){
    fprintf(stderr,"エラー：ファイル%sをオープンできません。\n",argv[3]);
    //exit(1);
  }

  while((fscanf(fp,"%d %d\n",&num[i],&data[i]))!=EOF){
    printf("%04d %d\n",num[i],data[i]);
    i++;
    n++;
  }

  i=0;

   while((fscanf(fp2,"%d %d\n",&num2[j],&data2[j]))!=EOF){
     // printf("%04d %d\n",num2[j],data2[j]);
    j++;
    m++;
  }

   //printf("n=%d m=%d\n",n,m);
   for(i=0 ; i<n ; i++){
     //printf("j=%d\n",i);
  for(j=0; j<n ; i++){
     //printf("j=%d\n",i);
    j=count;

    if(num[i]==0){ num[i]=100000;
    }
    if(num2[j]==0){ num2[j]=10000;
    }
    if(num[i]==num2[j]){
      data_new=num[i];
      new=data[i]+data2[j];
      fprintf(fp3,"%04d %d\n",data_new,new);
      count++;
      break;
    }

    else if(num[i]>num2[j]){
      data_new=num2[j];
      new=data2[j];
      fprintf(fp3,"04d %d\n",data_new,new);
      break;
    }
  }
   }

   fclose(fp);
   fclose(fp2);
   fclose(fp3);
   return(0);
}


/*
[v017ff@YAS72 ~/kadai1130]$ gcc kadai5-4b.c -o kadai5-4b.out
[v017ff@YAS72 ~/kadai1130]$ ./kadai5-4b.out zaiko.txt nyuko.txt zaiko_new.txt
0001 19
0013 13
0029 24
0048 9
0052 6
0070 7
0074 34
0149 21
0203 8
0226 1
1129 36
1802 7
2207 9
[v017ff@YAS72 ~/kadai1130]$ 
*/
