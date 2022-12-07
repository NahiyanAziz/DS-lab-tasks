#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

struct Node * head = NULL;
//struct Node * tail = NULL;

void enqueue(int value){
    struct Node *n1;
    n1= new Node();
    n1->data = value;
    n1->next = NULL;

       if(head == NULL){
            head = n1;
        }else{
       struct Node * temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
       }
       temp->next=n1;
}
}
void dequeue()
{
    struct Node * temp = head;
    head = temp->next;
    delete(temp);
}
 void printQueue()
 {
    struct Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
 }
 cout<<"........................."<<endl;
 }

 int stackSum()
 {
     int c = 0 ;
      struct Node * temp = head;
    while(temp!=NULL){
        c=c+temp->data;
        temp=temp->next;
    }
    return c;
 }

 int stackSize()
 {
     int c=0;

     struct Node * temp = head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
 }

 int frontInQueue()
 {
     return head->data;
 }

int lookFor(int value)
{
    struct Node * temp = head;
    while(temp!=NULL)
    {
        if(value==temp->data) return 1;
        temp=temp->next;
    }
    return 0;
}

void searchAndDelete(int value)
{

}

void deleteFromEnd()
{
    struct Node * temp = head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete(temp);
}
int main(){
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
printQueue();
dequeue();
printQueue();
//cout<<frontInQueue()<<endl;
//deleteFromEnd();
//printQueue();



return 0;
}

