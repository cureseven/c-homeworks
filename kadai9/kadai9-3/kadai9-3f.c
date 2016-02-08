#include <stdio.h>
#include<string.h>
#include<string.h>
#define N 3

typedef struct {
  char name[10];     /* ̾�� */
  char address[20];  /* ���� */
  double phone;      /* �����ֹ� */
} personal_t;        /* ���ɥ쥹Ģ�Υǡ���������� */
personal_t *search(personal_t *pd_p, int n, char name[])
{
  while(n--) {
    if(strcmp(pd_p->name,name)==0) {  /* ����������ʸ����Ȱ��פ��뤫 */
      return pd_p;  /* ���Ĥ��ä��鹽¤����������Ǥ���Ƭ���ɥ쥹���֤� */
    }
    pd_p++;  /* ���ι�¤����������Ǥ�ؤ��ʤ��� */
  }
  return NULL;  /* ���Ĥ���ʤ��ä���NULL���֤� */
}


int main(int argc,char *argv[]){
  /*** ���ɥ쥹Ģ�ι�¤������������������ȥݥ����ѿ������ ***/
  personal_t pd_a[N] = {{"Ai", "Ube", 210},
                      {"Ken", "Tsu", 211},
                      {"Syu", "Aio", 212}},
   *pd_p;

 if(argc!=2){
   fprintf(stderr,"���顼:���������פ��ޤ���\n");
}

 //pd_p = pd_a;  /* ��¤������ argv[1] ����Ƭ���ɥ쥹��ݥ����ѿ������� */

 pd_p = search(pd_a,N,argv[1]);  /* ���ɥ쥹Ģ�򸡺� */
 if(pd_p==NULL){
   fprintf(stderr,"���顼��������̤����Ĥ���ޤ���\n");
 }
 else{
    printf("����: %s\n", pd_p->address);      /* �����ɽ�� */
    printf("�����ֹ�: %.0f\n", pd_p->phone);  /* �����ֹ��ɽ�� */
}
 return(0);
}

/*
[v017ff@MDS241 ~/kadai1221]$ gcc kadai9-3f.c -o kadai9-3f.out
[v017ff@MDS241 ~/kadai1221]$ ./kadai9-3f.out Ai
����: Ube
�����ֹ�: 210
*/
