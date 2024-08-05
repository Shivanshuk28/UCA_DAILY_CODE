#include<stdio.h>
void copy_file(){
    FILE *srcptr,*destptr;
    printf("ENTER THE NAME OF SOuRCE FILE\n");
    char name[100000];
    scanf("\n%[^\n]%*c",name);
    srcptr=fopen(name,"r");
    if(srcptr==NULL){
        printf("ERROR! THE ELEMENT DOESNOT EXIST");
        return;
    }
    printf("\nEnter The Name of Destination File with .txt:- ");
	scanf("\n%[^\n]%*c", name);

	// Creating a file pointer for Destination File
	destptr = fopen(name, "w");
    char ch;
    while((ch=fgetc(srcptr))!=EOF){
        fputc(ch,destptr);
    }
    fclose(srcptr);
    fclose(destptr);
    printf("\nFile Copying Successfull\n");
	
	printf("\nName of the Copied File :- %s\n", name);

}
