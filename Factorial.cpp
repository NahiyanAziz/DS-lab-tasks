#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int k){
    for (int i=0; i<n; i++){
        if (arr[i]==k){
            return i;
        }
    }
return -1;

}

int factorial(int n){
    if (n==0)
        return 1;
    return n*factorial(n-1);
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};

    int x;
    cout<<"please enter the number you want to search: ";
    cin>>x;
    cout<<x<<" is at the index "<<linearSearch(arr,9,x)<<endl;

    int y;
    cout<<"please enter the number you want the factorial for: ";
    cin>>y;
    cout<< y <<"! = "<<factorial(y)<<endl;

return 0;
}

