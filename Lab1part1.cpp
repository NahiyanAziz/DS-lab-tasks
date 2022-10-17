#include <bits/stdc++.h>
using namespace std;

void printList(int a[], int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void printListReversed(int a[], int n){
    for (int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";

}
}
int main(){

    int a[10];
    for (int i=0;i<10;i++){
            cout<<"Please enter 10 numbers: ";
        cin>>a[i];
    }
    printList(a,10);
    cout<<endl;
    printListReversed(a,10);


return 0;
}
