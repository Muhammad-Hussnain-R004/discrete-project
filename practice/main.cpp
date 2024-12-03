#include<iostream>
using namespace std;
void primefun(no)
{
    bool prime=true;
    for(int i=2;(i<=no/2 && prime==true);i++){
        if(no%i==0){
            prime=false;
        }
    }
    string str;
    if(prime==true)
        str="This is prime number";
    else if(prime==false)
        str="This is not prime number";
    return str;
}
int main()
{
    int no;
    cout<<"Enter number to check whether it is prime or not:";
    cin>>no;
    string result;
    result=primefun(no);
    cout<<result;
}

