#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
typedef struct Node {
    int data;
    struct Node* next;
}Node;

int n=0;
Node* head=NULL;
Node* tail=NULL;
int size() {
    return n;
}

bool isempty() {
    return n == 0;
}
void push(int data){
    Node* oldtail=tail;
    tail=(Node*)malloc(sizeof(Node));
    tail->data=data;
    tail->next=NULL;
    if(isempty())head=tail;
    else oldtail->next=tail;
    n++;
}

int pop(){
    if(isempty())return -1;
    int item=head->data;
    Node* temp=head;
    head=head->next;
    free(temp);
    if(isempty())tail=NULL;
    n--;
    return item;
}



void testQueue() {
    push(3);
    push(10);
    push(20);

    assert(isempty() == false);
    assert(size() == 3);
    assert(pop() == 3);
    assert(size() == 2);
    assert(pop() == 10);
    assert(size() == 1);
    assert(pop() == 20);
    assert(size() == 0);
    assert(isempty());
}
int main(){
    testQueue();
    return 0;
}