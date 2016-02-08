#include<stdio.h>
int main(void){
  char data[127];
  char *ptr;
  int a=0;

  printf("文字列を入力してください。 （１２８文字未満）：");
  scanf("%s",&data);

  ptr = data;
  while(*ptr++){
    a++;
     }

  printf("文字数：%d\n",a);
  return 0 ;
}
