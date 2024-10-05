#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>


int *array=NULL;
int n=0;
int max_size=1;

void resize(int new_size){
    int *new_array=(int*)malloc(sizeof(int)*new_size);
    for(int i=0;i<n;i++){
        new_array[i]=array[i];
    }
    int * temp=array;
    array=new_array;
    free(temp);

}

void push(int item){
    if(n==0){
        array=(int*)malloc(max_size*sizeof(int));
    }
    if(n==max_size){
        max_size*=2;
        resize(max_size);
    }

    array[n++]=item;
}

int pop(){
    int item=array[--n];
    if(n<=max_size/4){
        max_size/=2;
        resize(max_size);
    }
    return item;
}

bool isEmpty(){
    return n==0;
}

int size(){
    return n;
}

void testing(){
    push(1);
    push(2);
    push(3);
    assert(pop()==3);
    assert((size()==2));
    assert(isEmpty()==false);
}

int main(){
    testing();
    return 0;
}