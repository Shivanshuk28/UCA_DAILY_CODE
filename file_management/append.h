#include<stdio.h>
void append(){
    char name[1000];
    printf("ENTER thE NAME OF THE FILE YOU WANT TO append IN\n");
    scanf("\n%[^\n]%*c",name);
    FILE *fileptr;
    fileptr=fopen(name,"r");
    if(fileptr==NULL){
        printf("ERROR\n");
        return;
    }
    fileptr=fopen(name,"a");
    printf("\n ENTER THE CONTENT OF FILE\n");
    char s[10000];
    scanf("\n%[^\n]%*c",s);
    fprintf(fileptr,"%s\n",s);
    fclose(fileptr);
    printf("YOU HAVE ADDED CONTENT TO THE %s file\n",name);
}
