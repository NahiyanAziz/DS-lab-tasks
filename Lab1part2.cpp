#include <bits/stdc++.h>
using namespace std;


int main(){

    int a[]={12,32,43,1,54,53,15,64,3,13};
    int e=0,o=0;

    for (int i=0;i<10;i++){
           if (a[i]%2==0){
                e++;
            }
            else{
                o++;

            }
            cout<<e<<" : even numbers"<<endl;
            cout<<endl;
            cout<<o<<" : odd numbers"<<endl;
            cout<<endl;
            cout<<"...................................../n";
    }
return 0;
}
