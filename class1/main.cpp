#include<iostream>
using namespace std;
int main()
{
    const int SIZE=10;
    int arr[SIZE]={6,-1,8,-9,-3,4,6,8,9,10};
    for(int i=0;i<SIZE;i++){
        cout<<"Value at "<<i<<" Index is:"<<arr[i]<<endl;
    }
    for(int i=0;i<SIZE-1;i++){
        for(int j=0;j<SIZE-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"\n\n Sorted array"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Value at "<<i<<" Index is:"<<arr[i]<<endl;
    return 0;
}}
