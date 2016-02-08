#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
  if(fork()==0){
int i;
  for(i=10;i>=0;i--){
    printf("%d\n",i);
    sleep(1);
  }
  int pid=getpid();
  printf("%d\n",pid);
  }

 else{
   int j;
   wait(NULL);
   for(j=10 ; j>=0 ; j--){
     printf("%d\n",j);
     sleep(1);
   }
   int pid2=getpid();
   printf("%d\n",pid2);
 }
  return(0);
}

/*
[v017ff@YAS72 ~/kadai1224]$ gcc kadai13-1b.c -o kadai13-1b.out
[v017ff@YAS72 ~/kadai1224]$ ./kadai13-1b.out
10
9
8
7
6
5
4
3
2
1
0
17665
10
9
8
7
6
5
4
3
2
1
0
17664
[v017ff@YAS72 ~/kadai1224]$ 

*/
