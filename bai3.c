//
//  bai3.c
//  mang
//
//  Created by hoang minh on 26/03/2022.
//

#include "bai3.h"
#include <stdio.h>
#include <string.h>

int main(void) {
  int i=0;
  int num[5];
  for(i=0;i<5;i++)
    {
      scanf("%d", &num[i]);
    }
  printf("nhapvaogia tri sau khi dao nguoc\n");
  for(i=4;i>=0;i--){
   printf("%d\n", num[i]); }

 
}
