/*waitを親プロセスで用いない場合*/
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
  if(fork()==0){
    int i;
    for(i=10;i>=0;i--){
      printf("child「%d」\n",i);
      sleep(1);
    }
    int pid=getpid();
    printf("%d\n",pid);
  }
  else{ 
int j;
    for(j=10;j>=0;j--){
      printf("parent「%d」\n",j);
      sleep(1);
    }
    int pid2=getpid();
    printf("%d\n",pid2);
}
  return(0);
}
/*
[v017ff@YAS72 ~/kadai1224]$ gcc kadai13-1a.c -o kadai13-1a.out
[v017ff@YAS72 ~/kadai1224]$ ./kadai13-1a.out
parent「10」
child「10」
parent「9」
child「9」
parent「8」
child「8」
parent「7」
child「7」
child「6」
parent「6」
child「5」
parent「5」
child「4」
parent「4」
child「3」
parent「3」
parent「2」
child「2」
parent「1」
child「1」
parent「0」
child「0」
10773
10774
[v017ff@YAS72 ~/kadai1224]$ 
*/
