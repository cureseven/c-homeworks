#include<stdio.h>
int main(void){
  char data[127];
  char *ptr;
  int a=0;

  printf("ʸ��������Ϥ��Ƥ��������� �ʣ�����ʸ��̤���ˡ�");
  scanf("%s",&data);

  ptr = data;
  while(*ptr++){
    a++;
     }

  printf("ʸ������%d\n",a);
  return 0 ;
}
