#include<iostream>
using namespace std;
void sumofarr(int arr[], int SIZE)
{

	for(int i=0;i<SIZE;i++)
	{
		if(arr[i]<8)
		sum=sum+arr[i];
	}
	 return sum;
}
int main()
{
    const int SIZE = 10;
	int arr[SIZE];
	int sum=0;
	for(int i=0;i<SIZE;i++)
	{
		cout<<"Enter value at "<<i<<" index: ";
		cin>>arr[i];
	}
	sumofarr(arr,SIZE,sum);
	cout<<"SUM of array is:"<<sum;
	return 0;
}
