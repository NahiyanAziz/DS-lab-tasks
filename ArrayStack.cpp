#include <bits/stdc++.h>>
using namespace std;

#define n 8

int a[n];
int top=-1;

bool isFull(){
if(top==n-1){
    return true;
}
return false;
}

void push(int data){
  if(isFull()){
      cout<<"Stack Overflow"<<endl;
  }else{
  top++;
  a[top]=data;
  }


}
void Print(){
  for (int i=top;i>=0;i--){
    cout<<a[i]<<endl;
  }
cout<<"\n";
}

bool isEmpty(){
if(top<0){
   return true;

}
return false;
}
int pop(){

  if (isEmpty()){
      cout<<"Stack is Empty"<<endl;

  }else{
    int value = a[top];
top--;
return value;

  }

}

int main(){

  push(10);
  push(20);
  push(30);
  push(40);
  pop();
  Print();

return 0;
}
