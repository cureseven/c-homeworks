#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

  int a=0;
  char *ptr;
  char in_file[16],out_file[16];
  char buf[1024];
  FILE *fp_in,*fp_out;

  if(argc!=3){
    fprintf(stderr,"エラー:引数が一致しません\n");
    exit(1);
  }

  fp_in=fopen(argv[1],"r");
  fp_out=fopen(argv[2],"w");
 
  if(fp_in==NULL){
    exit(1);
  }
  if(fp_out==NULL){
    exit(1);
  }

  ptr = buf;
  while(fscanf(fp_in,"%c",buf)!=EOF){
    *ptr++;
    a++;
  }

  fprintf(fp_out,"文字数:%d\n",a-1);

  fclose(fp_in);
  fclose(fp_out);
}

/*

[v017ff@MDS245 ~/kadai1019]$ gcc kadai6-1d.c -o kadai6-1d.out
[v017ff@MDS245 ~/kadai1019]$ ./kadai6-1d.out
エラー:引数が一致しません
[v017ff@MDS245 ~/kadai1019]$ ./kadai6-1d.out data.txt datak.txt
[v017ff@MDS245 ~/kadai1019]$ cat data.txt
splatoon
[v017ff@MDS245 ~/kadai1019]$ cat datak.txt
文字数:8
[v017ff@MDS245 ~/kadai1019]$ 


*/
