#include<iostream>
using namespace std;
void show(int arr[],int SIZE)
{
    for(int i=0;i<SIZE;i++){
        cout<<"Value at index "<<i<<" is:"<<arr[i];
    }
}
int main()
{
    const int SIZE=10;
    int arr[SIZE];
    for(int i=0;i<SIZE;i++){
        cout<<"Enter value at "<<i<<" index:";
        cin>>arr[i];
    }
    show(arr[],SIZE);
    return 0;
}
