#include<iostream>
using namespace std;
void power(int base,int exponent)
{
    return int pow(base,exponent);
}
int main(){
    int base,exponent;
    int result=1;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter exponent:";
    cin>>exponent;
    result=power(base,exponent);
    cout<<base<<" to power "<<power<<" is:"<<result;
}
