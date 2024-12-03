#include<iostream>
using namespace std;
int main(){
          const int SIZE=10;
          int arr[SIZE];
          int doublearr[SIZE];
          cout<<"Enter 10 Elements"<<endl;
          for(int i=0;i<SIZE;i++){
            cout<<"Enter "<<i<<" element:";
            cin>>arr[i];
          }
          for(int i=0;i<SIZE;i++){
            doublearr[i]=2*arr[i];
          }
          cout<<"Doubled elements are"<<endl;
          for(int i=0;i<SIZE;i++){
            cout<<doublearr[i]<<"  ";
          }
}
