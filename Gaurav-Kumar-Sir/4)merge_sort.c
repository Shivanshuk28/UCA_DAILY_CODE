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
void merge(int arr[],int aux[], int left, int mid,int right){
    for(int k=left;k<=right;k++) aux[k]=arr[k];
    int i=left;
    int j=mid+1;
    for(int k=left;k<=right;k++){
        if(i>mid) arr[k]=aux[j++];
        else if(j>right) arr[k]=aux[i++];
        else if(aux[i]<aux[j]) arr[k]=aux[i++];
        else arr[k]=aux[j++];
    }
}
void merge_sort_recursive(int arr[],int aux[],int left,int right){
    if(left>=right){
        return;
    }
    int mid=(left+right)/2;
    merge_sort_recursive(arr,aux,left,mid);
    merge_sort_recursive(arr,aux,mid+1,right);
    merge(arr,aux,left,mid,right);

}
void merge_sort(int arr[],int n){
    int *aux=(int *)malloc(n*sizeof(int));
    merge_sort_recursive(arr,aux,0,n-1);
    free(aux);
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
    merge_sort(arr,n);

    struct timeval after;

    gettimeofday(&after,NULL);
    long long after_micros=after.tv_sec*1000000LL + after.tv_usec;
    free(arr);
    return after_micros-before_micros;
}
void test_simple(){
    int input[]={64, 25, 12, 22, 1};
    int n=sizeof(input)/sizeof(input[0]);
    int expected[]={1, 12, 22, 25, 64};
    merge_sort(input,n);
    for(int i=0; i<n; i++){
        assert(input[i]==expected[i]);
    }
}

int main(){
    
    
    test_simple();
    long long time=time_elapsed(32000);
    long long time2=time_elapsed(16000);
    printf("Time elapsed for ratio: %lld",time/time2);
    return 0;
}