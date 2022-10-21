#include <iostream>
#include <conio.h>
//Bubble Sorting In Array.
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Enter The Size Of An Array:";
	cin>>n;
	cout<<"Enter The Elements In Array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	
	cout<<"After Sorting The Array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	getch();
	return 0;
}
