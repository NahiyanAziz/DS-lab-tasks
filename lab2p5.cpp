#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10]={8,4,6,1,6,9,6,1,9,8},b=0;
    for(int c=0;c<10;c++){
    for(int m=0;m<10;m++){
    if(A[c]==A[m]){
    b++;
    }
    }
    cout<<"The number "<<A[c]<<" occurs "<<b<<" times"<<endl;
    b=0;
    }
    return 0;
}
