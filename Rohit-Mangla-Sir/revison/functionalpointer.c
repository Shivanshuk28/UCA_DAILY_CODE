#include<stdio.h>

int multiply(int a ,int b){
    return a*b;
}
int add(int a,int b){
    return a+b;
}
void operation(int a,int b,int (*operate)(int,int)){
    printf("%d\n",operate(a,b));
}

int main()
{
    int (*funcptr)(int,int);
    operation(5,4,multiply);
    operation(5,4,add);

    return 0;
}