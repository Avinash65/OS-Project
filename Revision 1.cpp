#include<iostream>
using namespace std;
int arr[10][6];
voidswap(int*a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void arrangeArrival(int num,int arr[][6])
{
for(int i=0;i<num;i++)
{
	for(int j=0;j<num-i-1;j++)
	
	{
		if(arr[j][1]>arr[j+1][1])
		{
			for(int k=0;k<5;k++)
			{
				swap(arr[j][k],arr[j+1][k]);
			}
		}
	}
}
}
