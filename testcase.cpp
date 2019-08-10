#include<iostream>
using namespace std;
int main()
{
	int t,arr[10],n,num;
	cout<<"Enter the number of test cases"<<endl;
	cin>>t;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number of array elements"<<endl;
		cin>>n;
		cout<<"Enter the elements of the sorted array"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the number to be searched"<<endl;
		cin>>num;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==num)
			{
				cout<<"1"<<endl;
				break;
			}
			else
			{
				cout<<"-1"<<endl;
				break;
			}
		}
	}
	return 0;
}