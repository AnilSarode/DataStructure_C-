#include<iostream>
using namespace std;

int sumOfDigits(int n)
{

	if (n/10 ==0)
	{
	
	return n;
	
	}
	
	return n%10 + sumOfDigits(n/10);
	

}

int main()

{

	int n;
	cin>> n;
	
	//cout<< n/10 << "\n";
	//cout<< n%10 << "\n";
	
	cout<<sumOfDigits(n)<<"\n";
	
	return 0;

}
