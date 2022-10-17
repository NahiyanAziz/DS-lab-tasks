#include <bits/stdc++.h>
using namespace std;

void evenCheck(int a[],int n){
    int e=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
            cout<<e<<" : eVEN nUMBERS"<<endl;

        }
    }
}
void oddCheck(int a[], int n){
    int o=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            o++;
            cout<<o<<" : oDD nUMBERS"<<endl;

}
    }
}
int main(){
    int a[]={12,32,43,1,54,53,15,64,3,13};
    evenCheck(a,10);
    cout<<endl;
    oddCheck(a,10);

return 0;
}
