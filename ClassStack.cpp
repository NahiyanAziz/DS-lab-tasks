#include <bits/stdc++.h>
using namespace std;


class Stack{
private:
  int top;
  int *a;
  public:
    Stack(){
          top=-1;
          a= new int [5];
    }

   bool isFull(){
if(top==5-1){
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
    int data = a[top];
top--;
return data;

  }
}
};

int main(){
  Stack s;
  s.push(100);
  s.push(200);
  s.push(300);
  s.push(400);
  s.push(500);
  s.push(600);
  s.push(600);
  s.push(600);
  s.Print();



return 0;
}
