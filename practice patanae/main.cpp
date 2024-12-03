#include<iostream>
using namespace std;
int main()
{   const int SIZE=5;
    int arr1[SIZE],arr2[SIZE],commmon[SIZE];
    int commoncount=0;
    cout<<"Enter 5 values for first array"<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>arr1[i];
    }
    cout<<endl<<"Enter 5 Values for second array"<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>arr2[i];
    }
    cout<<endl<<endl;
}

