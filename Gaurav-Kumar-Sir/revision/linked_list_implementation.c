#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<limits.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head=NULL;

int n=0;
bool isempty(){
    if(n==0){
        return true;
    }
    return false;
}
int size(){
    return n;
}

void push(int data){
    Node* newhead=(Node*)malloc(sizeof(Node));
    newhead->data=data;
    newhead->next=head;
    head=newhead;
    n++;
}

int getvalue(int index){
    if(index>n ||index<0){
        return INT_MIN;
    }
    Node* temp=head;
    for(int i=0;i<index;i++){
        temp=temp->next;
    }
    return temp->data;
}

int removeat(int index){
    if(index>n ||index<0){
        return INT_MIN;
    }
    Node* prev=NULL;
    Node* temp=head;
    for(int i=0;i<index;i++){
        prev=temp;
        temp=temp->next;
    }
    int item=temp->data;
    if(prev==NULL) head=head->next;
    else prev->next=temp->next;
    free(temp);
    n--;
    return item;
}

void testLinkedList() {
    push(3);
    push(10);
    push(20);

    assert(isempty() == false);
    assert(size() == 3);
    assert(getvalue(0) == 20);
    assert(getvalue(1) == 10);
    assert(getvalue(2) == 3);
    assert(removeat(1) == 10);
    assert(size() == 2);
    assert(getvalue(0) == 20);
    assert(getvalue(1) == 3);
    assert(removeat(0) == 20);
    assert(size() == 1);
    assert(getvalue(0) == 3);
    assert(removeat(0) == 3);
    assert(size() == 0);
    assert(isempty());
}

int main() {
    testLinkedList();
    printf("All tests passed!!\n");
    return 0;
}
