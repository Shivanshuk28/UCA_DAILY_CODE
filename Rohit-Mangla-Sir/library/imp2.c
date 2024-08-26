#include<stdio.h>

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int min(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int abss(int a,int b){
    int diff = a - b;
    return diff < 0 ? -diff : diff;
}

int mod(int a,int b){
    if (b == 0) {
        printf("Division by zero\n");
        return 0; 
    }
    int remainder = a % b;
    return remainder < 0 ? remainder + b : remainder;
}