#include <iostream>
using namespace std;



int main(){

    int A[]={8,4,6,1,6,9,6,1,9,8},num,c=0;

    cout<<"Please enter the Number you want to search: ";
    cin>>num;

    for(int i=0;i<10;i++){
        if(num==A[i]){
            c++;
        }
    }
    cout<<"The number you entered occurs "<<c<<" times"<<endl;

return 0;
}







