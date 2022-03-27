//
//  11.c
//  mang
//
//  Created by hoang minh on 26/03/2022.
//

#include "11.h"
#include <stdio.h>
#include <string.h>
int main(){
char name[7][50], temp[10];
char i,j;
  for(i=0;i<7;i++)
    {
      printf("nhap vao gia tri : ");
      scanf("%s", name[i]);
    }
    for(i=0;i<7;i++){
    for(j=i+1;j<7;j++){
      if(strcmp (name[i],name[j])>0)
      { strcpy (temp , name[i]);
           strcpy (name[i],  name[j]);
          strcpy (name[j], temp );}}

      }
  for(i=0;i<7;i++)
printf(" %s", name[i]);

}
