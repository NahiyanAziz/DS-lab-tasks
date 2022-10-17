#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={10,20,30,40,50};
    int b[8]={1,2,3,4,5,6,7,8};
    int c[13];

    for(int i=0;i<13;i++){
        c[i]=0;
    }

    for(int i=0;i<5;i++){
        c[i]=a[i];
    }

    for(int i=0;i<13;i++){
        for(int z=0;z<13;z++){
            if(c[z]==0){
                c[z]=b[i];
                break;
            }
        }
    }

    for(int i=12;i>=0;i--){
        cout<<c[i]<<" ";
    }
return 0;
}
