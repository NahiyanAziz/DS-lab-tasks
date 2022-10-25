#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6],c=0;
    cout<<"Please enter six numbers into the array: "<<endl;
    for(int i=0;i<6;i++){
        cin>>a[i];
  }
    for(int i=0; i<6;i++){
        for(int j=0;j<6;j++){
            if(j==i){
                continue;
            }
            else if(a[i]==a[j]){
                a[j]=0;
                c=1;
            }
        }
    }


    if(c==1){
         for(int i=0;i<6;i++){
            if(a[i]!=0){
                cout<<a[i]<<" ";
            }
        }
    }

    else{
            cout<<"Array already unique!";
        }

    return 0;
}
