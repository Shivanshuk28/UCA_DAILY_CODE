#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(&arr[i],&arr[mini]);
    } 
}
long long time_elapsed(int n){
    
    int *arr = (int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(int i=0; i<n; i++){
        arr[i]=rand();
    }
    struct timeval before;

    gettimeofday(&before,NULL);
    long long before_micros=before.tv_sec*1000000LL + before.tv_usec;
    // printf("HELLO");
    selection_sort(arr,n);

    struct timeval after;

    gettimeofday(&after,NULL);
    long long after_micros=after.tv_sec*1000000LL + after.tv_usec;
    free(arr);
    return after_micros-before_micros;
}

// void test_simple(){
//     int input[]={64, 25, 12, 22, 1};
//     int n=sizeof(input)/sizeof(input[0]);
//     int expected[]={1, 12, 22, 25, 64};
//     selection_sort(input,n);
//     for(int i=0; i<n; i++){
//         assert(input[i]==expected[i]);
//     }
// }


int main(){
    
    
    // test_simple();
    long long time=time_elapsed(80000);
    long long time2=time_elapsed(40000);
    printf("Time elapsed for ratio: %lld",time/time2);
    return 0;
}