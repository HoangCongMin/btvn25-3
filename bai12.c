//
//  bai12.c
//  mang
//
//  Created by hoang minh on 27/03/2022.
//

#include "bai12.h"
#include<stdio.h>
int main(){
int so[5];
  int i;
int min,max;
  for(i=0;i<5;i++){
  scanf("%d", &so[i]);}
  min=so[0];
  max=so[0];
  for(i=1;i<5;i++)
    if(so[i]>max){
      max=so[i];
    }
  for(i=1;i<5;i++)
    if
    (so[i]<min)
      min=so[i];
  
  printf("solonnhatla%d\n",max);
  printf("solonnhola%d",min);
}
