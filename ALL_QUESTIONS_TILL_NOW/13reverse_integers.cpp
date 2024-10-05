#include<stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0;
    int isneg=0;
    if(n<0){
        isneg=1;
    }

    while(n>0){
        int rem=n%10;
        if(rev>(INT_MAX-rem)/10){
            return 0;
        }
        rev=rev*10+rem;
        n=n/10;
    }

    if(isneg){
        printf("%d",-rev);
    }
    else{
        printf("%d",rev);
    }
    return 0;
}