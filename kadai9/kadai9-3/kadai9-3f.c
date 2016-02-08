#include <stdio.h>
#include<string.h>
#include<string.h>
#define N 3

typedef struct {
  char name[10];     /* 名前 */
  char address[20];  /* 住所 */
  double phone;      /* 電話番号 */
} personal_t;        /* アドレス帳のデータ型の宣言 */
personal_t *search(personal_t *pd_p, int n, char name[])
{
  while(n--) {
    if(strcmp(pd_p->name,name)==0) {  /* 検索したい文字列と一致するか */
      return pd_p;  /* 見つかったら構造体配列の要素の先頭アドレスを返す */
    }
    pd_p++;  /* 次の構造体配列の要素を指しなおす */
  }
  return NULL;  /* 見つからなかったらNULLを返す */
}


int main(int argc,char *argv[]){
  /*** アドレス帳の構造体配列の定義、初期化とポインタ変数の定義 ***/
  personal_t pd_a[N] = {{"Ai", "Ube", 210},
                      {"Ken", "Tsu", 211},
                      {"Syu", "Aio", 212}},
   *pd_p;

 if(argc!=2){
   fprintf(stderr,"エラー:引数が一致しません\n");
}

 //pd_p = pd_a;  /* 構造体配列 argv[1] の先頭アドレスをポインタ変数に代入 */

 pd_p = search(pd_a,N,argv[1]);  /* アドレス帳を検索 */
 if(pd_p==NULL){
   fprintf(stderr,"エラー、検索結果が見つかりません\n");
 }
 else{
    printf("住所: %s\n", pd_p->address);      /* 住所を表示 */
    printf("電話番号: %.0f\n", pd_p->phone);  /* 電話番号を表示 */
}
 return(0);
}

/*
[v017ff@MDS241 ~/kadai1221]$ gcc kadai9-3f.c -o kadai9-3f.out
[v017ff@MDS241 ~/kadai1221]$ ./kadai9-3f.out Ai
住所: Ube
電話番号: 210
*/
