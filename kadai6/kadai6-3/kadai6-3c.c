 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

 int main(int argc, char *argv[])
 {
 FILE *fp[99];
 char c=0;
 int i=1;
 while(i<argc){
 if((fp[i]=fopen(argv[i],"r"))==NULL) {
 fprintf(stderr,"エラー: ファイル %s をオープンできません。\n",argv[i]);
 exit(1);
 }
 while(1){
 if((c = fgetc(fp[i])) != EOF) fputc(c,stdout);
 else if(c==EOF){
 fprintf(stdout,"\n");
 break;
 }
 }
 fclose(fp[i]);
 i++;
 }
 }

/*
[v017ff@MDS248 ~/kadai1109]$ gcc kadai6-3c.c -o kadai6-3c.out -lm
[v017ff@MDS248 ~/kadai1109]$ ./kadai6-3c.out a.txt b.txt
Pitz



*/
