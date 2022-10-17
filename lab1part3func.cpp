#include <bits/stdc++.h>
using namespace std;

void oddCheck(int starting, int ending){
    for(int i=starting;i<=ending;i++){
         if(i%2!=0){
             cout<<i<<" ";
         }
    }
}

int main(){

    int starting,ending;

    cout<<"Enter the starting range: ";
    cin>>starting;
//
   cout<<"Enter the ending range: ";
    cin>>ending;
//
    cout << "Odd numbers in given range are: ";
    oddCheck(starting,ending);

    return 0;
}
