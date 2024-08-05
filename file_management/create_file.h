// #create
// #close

#include<stdio.h>


void create_file(){
    char name[1000];
    printf("ENTER THE NAME OF TEH FILE YOU WANT TO MAKE WITH extension\n");
    scanf("\n%[^\n]%*c",name);
    FILE *fileptr;
    fileptr = fopen(name,"w");
    if(fileptr==NULL){
        printf("ERROR!\n");
        return;
    }
    printf("ENTER the Contents of the file");
    char s[10000];
    scanf("\n%[^\n]%*c",s);
    fprintf(fileptr,"%s\n",s);
    fclose(fileptr);
    printf("\nFile Creation Successfull\n");	
	printf("\nFile Name :- %s\n", name);

}