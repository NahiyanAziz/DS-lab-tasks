#include <bits/stdc++.h>
using namespace std;

int main(){

    int starting,ending;

    cout<<"Enter the starting range: ";
    cin>>starting;
//
   cout<<"Enter the ending range: ";
    cin>>ending;
//
    cout << "Odd numbers in given range are: ";
    for(int i=starting;i<=ending;i++){
         if(i%2!=0){
             cout<<i<<" ";
         }
    }
    return 0;
}
