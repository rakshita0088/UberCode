#include<stdio.h>
#include "main.h"

int add1(int a, int b){
    int ret=a+b;
    return ret;
}
void add2(int a,int b){
    int ret1=a+b;
    printf("sum:%d\n",ret1);
}
int add3(){
    int a=2, b=3;
    int ret2=a+b;
    return ret2;
}
void add4(){
    int a=5, b=6;
    int ret3=a+b;
    printf("sum:%d\n",ret3);
}

