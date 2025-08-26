#include<stdio.h>
#include "main.h"

int sub1(int a, int b){
    int retu=a-b;
    return retu;
}
void sub2(int a,int b){
    int retu1=a-b;
    printf("sub:%d\n",retu1);
}
int sub3(){
    int a=7, b=3;
    int retu2=a-b;
    return retu2;
}
void sub4(){
    int a=9, b=6;
    int retu3=a-b;
    printf("sub:%d\n",retu3);
}