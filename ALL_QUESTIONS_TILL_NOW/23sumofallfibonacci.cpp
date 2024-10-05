// Write a program to return the sum of all even numbers in the Fibonacci series till a given number n. Ex: for n = 100, fib series till 100 is [1,1,2,3,5,8,21,34,55,89]. Return sum of even numbers in it : 2+8+34 = 44


#include<stdio.h>
int main()
{
    int a=0;
    int b=1;
    int c=1;
    int ans=0;
    int n=100;
    while(c<n){
        if(c%2==0){
            printf("%d ",c);
            ans+=c;
        }
        a=b;
        b=c;
        c=a+b;
    }
    printf("\n%d",ans);
    return 0;
}