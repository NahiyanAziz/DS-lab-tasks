#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[10];

    for(int i=0;i<10;i++){
        cout<<"Please enter 10 numbers: ";
        cin>>a[i];
        cout<<endl;
    }

    for(int i=0;i<10;i++){
        cout<<a[i];
    }
cout<<endl;
     for (int i=9;i>=0;i--){
        cout<<a[i];
    }

return 0;
}
