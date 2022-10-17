#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,common=0,c=0;

    cout<<"Enter the size of the first array : ";
    cin>>n1;
    cout<<"Enter the size of the second array : ";
    cin>>n2;

    int array1[n1];
    int array2[n2];

    cout<<endl;
    for(int i=0; i<n1;i++){
        cout<<"Enter the number "<<i+1<<" element of the first array :";
        cin>>array1[i];
    }
    cout<<endl;
    for(int i=0; i<n2;i++){
        cout<<"Enter the number "<<i+1<<" element of the second array : ";
        cin>>array2[i];
    }
    for(int i=0;i<n1;i++){
        for(int k=0;k<n2;k++){
            if(array1[i]==array2[k]){
                common+=1;
                break;
            }
        }
    }
    if(common == 0){
        cout<<"No common element";
        return 0;
    }
    int cArray[common];
    for(int i=0;i<n1;i++){
        for(int k=0;k<n2;k++){
            if(array1[i]==array2[k]){
                for(int z=c;z<common;z++){
                    cArray[z]=array1[i];
                    c+=1;
                    break;
                }
            }
        }
    }

    for(int i=0;i<common;i++){
        for(int x=i+1;x<common;x++){
            if(cArray[i]==cArray[x]){
                cArray[x]= NULL ;
            }
        }
    }
    for(int i=0;i<common;i++){
        if(cArray[i] != NULL){
            cout<<cArray[i];
            cout<<" ";
        }
    }
return 0;
}
