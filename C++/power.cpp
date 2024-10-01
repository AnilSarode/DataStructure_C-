// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int pow(int value, int n){
    if(n==0)
    {
        return 1;
    }
   
    return value * pow(value,n-1);
}

int main() {
    // Write C++ code here
    int n;
    int value;
    cin >> value >> n ;
    cout<<"value "<<value<< " nth Power "<<n <<"\n";
    cout<<pow(value, n)<<"\n";

    return 0;
}
