#include <stdio.h>
#include<time.h>

int binary(int a);
int main()
{
	int x,n;
	clock_t start,end;
	printf("Enter a number to find its FloorSqrt \n");
	scanf("%d",&x);
	
	start=clock();
	{
	n=bin(x);
	printf("FloorSqrt value of %d is:%d \n",x,n);
	}
	end=clock();
	double t=(double)(end-start)/(double)(CLOCKS_PER_SEC);
	printf("Runtime is:%lf \n",t);
	
	return 0;
}
	

int bin(int a)
{
	int mid,low=0,high,result,y;
	high=a-1;
	while(low<=high)
	{
		mid=(low+high)/2 ;
		y=mid*mid ;
		if(y==a)
			 return mid ;
		else if(y<a)
			{
			low=mid+1;
			result=mid;
			}
			
		else
			high=mid-1;
	}
	return result;
}
