// Write a program to return the sum of all even numbers in the Fibonacci series till a given number n. Ex: for n = 100, fib series till 100 is [1,1,2,3,5,8,21,34,55,89]. Return sum of even numbers in it : 2+8+34 = 44


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     // fibb(n);
//     int a=0;
//     int b=1;
//     int sum=0;
//     int nexterm=1;

//     for(int i=3;i<=n;i++){
        

//         a=b;
//         b=nexterm;
//         nexterm=a+b;    
//         if(nexterm>n-1) break;
//         if(nexterm%2==0) sum+=nexterm;
        

//     }
//     printf("the sum is %d",sum);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a=2;
    int b=8;
    int sum=0;
    int n=100;
    int t=0;
    while(1){
        if(b>n)break;
        t=4*b+a;
        sum+=t;
        a=b;
        b=t;
    }
    printf("%d",b);
    return 0;
}