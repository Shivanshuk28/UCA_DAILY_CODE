#include "create_file.h"
#include "writefile.h"
#include<stdio.h>
#include "append.h"
#include "copyfiles.h"
int main(){
    printf("YOU CAN START FROM HERE \n");
    printf("press 1 to create a new file\n");
    printf("press 2 to write inside a new file\n");
    printf("press 3 to append in a existing new file\n");
    printf("press 4 to copy the content of one file into another!\n");
    int n;
    scanf("%d",&n);

    if(n==1){
        create_file();
    }
    else if(n==2){
        write_file();
    }
    else if(n==3){
        append();
    }
    else if(n==4){
        copy_file();
    }
}