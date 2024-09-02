#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    // fibb(n);
    int a=0;
    int b=1;
    int sum=0;
    for(int i=3;i<=sqrt(n);i++){
        int nexterm=a+b;
        if(nexterm%2==0) sum+=nexterm;
        a=b;
        b=nexterm;
        if(nexterm>n-1) break;

    }
    printf("the sum is %d",sum);
    return 0;
}