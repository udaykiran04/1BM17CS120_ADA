#include<iostream>
using namespace std;
int main()
{
	int n,arr[10],max;
	cout<<"Enter the total numbers u want to add"<<endl;
	cin>>n;
	cout<<"Enter all numbers one by one"<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	max=arr[0];
	for(int i=0;i<n;i++)
	{
	 if(arr[i]>arr[i+1])
		 {
			 max=arr[i];
		 }
	}
	cout<<"Maximum integer number is:"<<max<<endl;
	return 0;
}