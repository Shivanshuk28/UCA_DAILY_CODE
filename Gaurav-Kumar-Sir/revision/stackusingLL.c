#include<stdlib.h>
#include<stdio.h>
#include<assert.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;
int n=0;
Node* head=NULL;

void push(int item){
    Node* oldhead=head;
    head=(Node*)malloc(sizeof(Node));
    head->data=item;
    n++;
    head->next=oldhead;
}

int pop(){
    if(n==0)return 0;
    Node* temp=head;
    int data=temp->data;
    head=head->next;
    n--;
    free(temp);
    return data;
}

int isEmpty(){
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
    assert(isEmpty()==0);

    assert(pop()==2);
    assert(isEmpty()==0);

    assert(pop()==1);
    assert(isEmpty()==1);
}

int main(){
    testing();
    return 0;
}