#include<bits/stdc++.h>
using namespace std;


int calc(int grid[][4],int i,int j,int n,int m){
    if(i==n-1 && j==m-1){
        return grid[i][j];
    }
    if(i>=n || j>=m){
        return INT_MAX;
    }
    int choice1=calc(grid,i+1,j,n,m);
    int choice2=calc(grid,i,j+1,n,m);
    return grid[i][j]+min(choice1,choice2);
}
bool isvalid(int i,int j,int n,int m){
    if(i>=n || j>=m || i<0 || j<0){
        return false;
    }
    return true;
}

int calc2(int grid[][4],int i,int j){
    if(i==3 && j==3){
        return grid[i][j];
    }
    bool isvalid1=isvalid(i+1,j,4,4);
    bool isvalid2=isvalid(i,j+1,4,4);
    if(isvalid1 && isvalid2){
        int choice1=calc2(grid,i+1,j);
        int choice2=calc2(grid,i,j+1);
        return grid[i][j]+min(choice1,choice2);
    }
    if(isvalid1){
        return grid[i][j]+calc2(grid,i+1,j);
    }
    else{
        return grid[i][j]+calc2(grid,i,j+1);
    }
}

int main(){
    int grid[4][4]  = {
            {1, 1, 1, 1},
            {1, 0, 0, 1},
            {1, 1, 1, 1},
            {0, 0, 0, 1}
        };
        // int n=grid.size();
        // int m=grid[0].size();
        int ans=calc2(grid,0,0);
        cout<<ans;
}



