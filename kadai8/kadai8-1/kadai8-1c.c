#include <stdio.h>
#include<string.h>
#define N 3

typedef struct {
  char name[10];     /* ̾�� */
  char address[20];  /* ���� */
  double phone;      /* �����ֹ� */
} personal_t;        /* ���ɥ쥹Ģ�Υǡ���������� */

int main(int argc,char *argv[]){
  int i;
  /*** ���ɥ쥹Ģ�ι�¤������������������ȥݥ����ѿ������ ***/
  personal_t pd[N] = {{"Ai", "Ube", 210},
                      {"Ken", "Tsu", 211},
                      {"Syu", "Aio", 212}},
   *pd_p;

 if(argc!=2){
   fprintf(stderr,"���顼:���������פ��ޤ���\n");
 }

pd_p = pd;  /* ��¤������ argv[1] ����Ƭ���ɥ쥹��ݥ����ѿ������� */

 for(i=0 ; i<N ; i++){if(strcmp(pd_p->name,argv[1])==0){
    printf("����: %s\n", pd_p->address);      /* �����ɽ�� */
    printf("�����ֹ�: %.0f\n", pd_p->phone);  /* �����ֹ��ɽ�� */
  }
   pd_p++;
 }
 return(0);
}

/*
[v017ff@YBS07 ~/kadai1214]$ gcc kadai8-1c.c -o kadai8-1c.out
[v017ff@YBS07 ~/kadai1214]$ ./kadai8-1c.out Ai
����: Ube
�����ֹ�: 210
[v017ff@YBS07 ~/kadai1214]$ 

*/
