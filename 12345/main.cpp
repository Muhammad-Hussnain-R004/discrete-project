/* Write a program that lets the user perform arithmetic operations on two numbers.
 Your program allow the user to select the operation (+, -, *, / or %) and input the two integers numbers in main().
 Furthermore, your program must consist of following functions.
i.Function Add(): This function accepts two number as arguments and display their sum on screen.
ii.Function Subtract(): This function accepts two number as arguments and display their difference on the screen.
iii.Function Multiply(): This function accepts two number as arguments display their product on the screen.
iv.Function Divide(): This function accepts two number as arguments and display their quotient on the screen.
v.Function Modulus(): This function accepts two number as arguments and display their reminder on the screen.
vi.Function Message(): This function display a message “Error…invalid option” on the screen. */
#include<iostream>
using namespace std;
//functions list
void selectoperation(int a,int b,char operation){
  int sum;
  if(operation=='+')
  sum=a+b;
  cout<<"Sum is:"<<sum;
  }
void selectoperation(int a ,int b,char operation){
  int difference;
  if(operation=='-')
    difference=a-b;
  cout<<"Difference is:"<<difference;
  }
void selectoperation(int a,int b,char operation){
    int product;
  if(operation=='*')
    product=a*b;
  cout<<"Product is:"<<product;
  }
void selectoperation(int a,int b,char operation){
  int division;
  if(operation=='/')
     division=a/b;
  cout<<"Division is:"<<division;
  }
void selectoperation(int a,int b,char operation){
  int remainder;
  if(operation=='%')
     remainder=a%b;
  cout<<"Remainder is:"<<remainder;
  }
void selectoperation(char operation){
if(operation!='+'&& operation!='-' && operation!='*' && operation!='/' && operation!='%')
    cout<<"You entered a wrong operator please try again";
}

int main()
{
    int num1,num2;
    char operation;
    int selectoperation;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Please select the operation (+, -, *, / or %):";
    cin>>operation;
    selectoperation(num1,num2,operation);
}
