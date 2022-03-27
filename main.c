//
//  main.c
//  mang
//
//  Created by hoang minh on 25/03/2022.
//

#include <stdio.h>
int main(){
int a[5];
    int i;
    int max, min, sum = 0;
    float avg;
    for(i=0;i<5;i++){
        printf("Nhap gia tri %d: ",i+1);
        scanf("%d", &a[i]);
        if(i==0){
            max = a[i];
            min = a[i];
        }else{
            if(max < a[i])
            max=a[i];
            if(min > a[i])
            min=a[i];
        }
        sum += a[i];
    }
    printf("\n%d la gia tri lon nhat trong 5 so vua nhap vao", max);
    printf("\n%d la gia tri nho nhat trong 5 so vua nhap vao", min);
    printf("\nTong gia tri 5 so vua duoc nhao vao la %d", sum);
    avg = (float)sum/5;
    printf("\nGia tri trung binh cua 5 so vua duoc nhap vao la %f", avg);}
