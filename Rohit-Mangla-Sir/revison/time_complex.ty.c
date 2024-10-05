#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
    clock_t startTime,endTime;
    double total_time;

    startTime=clock();
    int sum=0;
    for(int i=0;i<1000000000;i++){
        sum+=i;
    }
    endTime=clock();
    total_time=((double)(endTime-startTime))/CLOCKS_PER_SEC;
    printf("total time used is %f",total_time);
    return 0;
}