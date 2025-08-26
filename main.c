#include <stdio.h>
#include "main.h"

int main(){
    int ret=0;
    int num;
    ret=add1(3,4);
    printf("sum:%d\n",ret);
    add2(4,5);
    add3(9,7);
    num=add3();
    printf("sum:%d\n",num);
    add4();
    int retu=0;
    int numb;
    retu=sub1(6,5);
    printf("sub:%d\n",retu);
    sub2(44,33);
    sub3(97,65);
    numb=sub3();
    printf("sub:%d\n",numb);
    sub4();

}