//
//  bai2.c
//  mang
//
//  Created by hoang minh on 27/03/2022.
//

#include "bai2.h"
#include<stdio.h>
int main(){
char kt[50];
int i=0,na=0;
  printf("nhap van ban\n");
  scanf("%s", &kt);

while(kt[i]!='\0'){
if(kt[i]=='a' || kt[i]=='e' || kt[i]=='s' || kt=='o')
    na++;
  i++;
  }
  printf("so nguyen am %d", na);
}
