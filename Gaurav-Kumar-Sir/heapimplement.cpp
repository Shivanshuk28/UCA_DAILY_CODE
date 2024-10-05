#include<bits/stdc++.h>
using namespace std;

//delete operation in a heap;


class PriorityQueue{
    private:
    vector<int>pq;
    int n;
    void exh(int i,int j){
        int temp=pq[i];
        pq[i]=pq[j];
        pq[j]=temp;
    }
    void swim(int k){
        while(k>1 && pq[k/2]<=pq[k]){
            exh(k,k/2);
            k=k/2;
        }
    }
    void sink(int k){
        while(2*k<=n){int j=2*k;
        if(j<n && pq[j]<pq[j+1])j++;
        if(pq[j]<=pq[k])break;
        exh(k,j);
        k=j;}
    }

public:
    PriorityQueue(int size):n(0){
        pq.resize(size+1);
    }
    void insert(int x){
        pq[++n]=x;
        swim(n);
    }
    int delmax(){
        int maxp=pq[1];
        pq[1]=pq[n--];
        pq.pop_back();
        sink(1);
        return maxp;
    }
    bool isEmpty(){
        return n==0;
    }
    int size(){
        return n;
    }
    void printHeap(){
        cout << "Heap elements: ";
        for (int i = 1; i <= n; i++) {
            cout << pq[i] << " ";
        }
        cout << endl;
    }

};




int main(){
    PriorityQueue pq(10);
    pq.insert(10);
    pq.insert(20);
    pq.insert(30);
    pq.insert(40);
    pq.insert(50);
    pq.insert(60);
    pq.printHeap();
}