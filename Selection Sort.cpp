#include <iostream>
#include <conio.h>
//Selection Sort In Array
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Enter The Size of Array:";
	cin>>n;
	
	cout<<"Eneter The Elements In Array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"After Sorting The Array:";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	getch();
	return 0;
}
