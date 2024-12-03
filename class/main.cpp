#include<iostream>
using namespace std;
int main()
{
    const int SIZE=10;
    int arr[SIZE]={5,78,99,88,55,33,22,4,59,100};
    int searchnumber;
    cout<<"Enter number you want to search:";
    cin>>searchnumber;
    int low=0,high=9,mid;
    bool found=true;
    for(;low<=high;){
        mid=(low+high)/2;
        if(searchnumber==mid){
            cout<<searchnumber<<" found at index:"<<arr[mid];
            break;
        }
        found=true;
        if(searchnumber>arr[mid]){
            low=mid+1;
        }
        else if(searchnumber<arr[mid]){
            high=mid-1;
        }
    }
    return 0;
}
