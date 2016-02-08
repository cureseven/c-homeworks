#include <stdio.h>
#include<string.h>
#define N 3

typedef struct {
  char name[10];     /* 名前 */
  char address[20];  /* 住所 */
  double phone;      /* 電話番号 */
} personal_t;        /* アドレス帳のデータ型の宣言 */

int main(int argc,char *argv[]){
  int i;
  /*** アドレス帳の構造体配列の定義、初期化とポインタ変数の定義 ***/
  personal_t pd[N] = {{"Ai", "Ube", 210},
                      {"Ken", "Tsu", 211},
                      {"Syu", "Aio", 212}},
   *pd_p;

 if(argc!=2){
   fprintf(stderr,"エラー:引数が一致しません\n");
 }

pd_p = pd;  /* 構造体配列 argv[1] の先頭アドレスをポインタ変数に代入 */

 for(i=0 ; i<N ; i++){if(strcmp(pd_p->name,argv[1])==0){
    printf("住所: %s\n", pd_p->address);      /* 住所を表示 */
    printf("電話番号: %.0f\n", pd_p->phone);  /* 電話番号を表示 */
  }
   pd_p++;
 }
 return(0);
}

/*
[v017ff@YBS07 ~/kadai1214]$ gcc kadai8-1c.c -o kadai8-1c.out
[v017ff@YBS07 ~/kadai1214]$ ./kadai8-1c.out Ai
住所: Ube
電話番号: 210
[v017ff@YBS07 ~/kadai1214]$ 

*/
