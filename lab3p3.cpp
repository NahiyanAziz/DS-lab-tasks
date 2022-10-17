#include <bits/stdc++.h>
using namespace std;

int main()
{
    int id_credit[10][2];
    double cgpa[10];

    for(int i=0;i<10;i++){
        cout << "Please enter the info of Student "<<i+1<<endl;
        cout << "ID : ";
        cin  >> id_credit[i][0];
        cout << "Credits Completed : ";
        cin  >> id_credit[i][1];
        cout << "CGPA : ";
        cin  >> cgpa[i];
        cout <<endl;
    }
    cout <<endl<<endl;
    cout << "ID's of the students having cgpa more than 3.75 !\n";
    for (int i=0;i<10;i++){
a
        if(cgpa[i]>3.75){
            cout << "ID   : "<<id_credit[i][0]<<endl;
            cout << "CGPA : "<<cgpa[i];
            cout <<endl<<endl;
        }
    }
    cout <<endl<<endl;
    cout << "ID's of the students who have completed more than 50 credits !\n";
    for (int i=0;i<10;i++){

        if(id_credit[i][1]>50){
            cout << "ID   : "<<id_credit[i][0]<<endl;
            cout << "Credits Completed : "<<id_credit[i][1];
            cout <<endl<<endl;
        }
    }
return 0;
}
