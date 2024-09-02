// Online C compiler to run C program online
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}
bool isvalid(int i,int j,int m,int n){
    if(i>=m || j>=n){
        return false;
    }
    return true;
}
int solve(int matrix[][],int i,int j,int m,int n){
    if(i==m-1 && j==n-1){
        return matrix[i][j];
    }
    bool choicevalid1=isvalid(i+1,j,m,n);
    bool choicevalid2=isvalid(i,j+1,m,n);
    if(choicevalid1 && choicevalid2){
        int calchoice1= solve(matrix,i+1,j,m,n);
        int calchoice2= solve(matrix,i,j+1,m,n);
        return matrix[i][j]+Math.min(calchoice1,calchoice2);
    }
    if(choicevalid1){
        int calchoice1=solve(matrix,i+1,j,m,n);
        return matrix[i][j]+calchoice1;
    }
    int calchoice2=solve(matrix,i,j+1,m,n);
    return matrix[i][j]+calchoice2;
    
}
int main() {

    int m=3,n=5;
    int matrix[3][5] = {{1, 1, 1, 1, 1}, 
                        {1, 1, 1, 1, 1}, 
                        {0, 0, 0, 0, 0}};
    int ans=solve(matrix,0,0,m,n);
     printf("The maximum sum path is: %d\n", ans);
    return 0;
}