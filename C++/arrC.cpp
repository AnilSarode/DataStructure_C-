#include<iostream>
using namespace std;


void print(int *arr, int n)
{

	for (int i=0; i<n; i++)
	{
	
	 cout<<arr[i];
		
	}
   

}

int main()
{

	int n;
	cin>>n;
	
	int arr[n];
	
	for (int i=0;i<n;i++)
	{   
		int x;
		cin>>x;
	
	     arr[i] =x;
	     	
	}
	
	/*for (int i=0; i<n; i++)
	{
	
	 cout<<arr[i];
		
	}*/


	print(arr, n);
	
return 0;

}


