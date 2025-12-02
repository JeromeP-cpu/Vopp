#include<stdio.h>
#include"vectorOp.h"

int main(){
    int A[3]={1,2,3};
    int B[3]={3,6,8};

    int *c;
    c=vSUB(A,B,3);
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}