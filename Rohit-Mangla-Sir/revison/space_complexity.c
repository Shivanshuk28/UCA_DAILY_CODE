#include<stdlib.h>
#include<stdio.h>
#include<sys/resource.h>
int main(){
    struct rusage start_usage;
    getrusage(RUSAGE_SELF,&start_usage);

int* ptr=(int*)malloc(1000000*sizeof(int));
struct rusage end_usage;
    getrusage(RUSAGE_SELF,&end_usage);

    long memoryused=start_usage.ru_maxrss-end_usage.ru_maxrss;
    printf("memory used is %ld",memoryused);
    return 0;   
}