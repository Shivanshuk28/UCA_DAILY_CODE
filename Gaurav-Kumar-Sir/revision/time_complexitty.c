#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>

int main(){
    struct timeval before;

    gettimeofday(&before,NULL);
    long long before_time=before.tv_sec*1000000LL+before.tv_usec;
    int sum=0;
    for(int i=0;i<10000000;i++){
        sum+=i;
    }

    struct timeval after;
    gettimeofday(&after,NULL);
    long long after_time=after.tv_sec*1000000LL+after.tv_usec;

    printf("time elapsed is %lld micro sec",(after_time-before_time));
    return 0;
}