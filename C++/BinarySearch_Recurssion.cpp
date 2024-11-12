// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


int recBinarySerach(vector<int> arr ,int tar, int st, int end){
    
    // int st=0, end=arr.size()-1;
    
    if(st<= end){
        
        int mid = (st+end)/2;
        
        if (tar> arr[mid]){
            st =mid+1;

            return recBinarySerach(arr, tar, st, end);
            
        }
        else if (tar < arr[mid]){
            
            end = mid-1; 
            return recBinarySerach(arr, tar, st, end);

        }
        else {
            return mid;
        }
    }
    
    return -1;
    
}

int main() {
    // Write C++ code here
    int n;
    cin>> n;
    
    vector<int>arr1;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);   // Add element to the vector
    }
    
    int tar1 = 6;

    
    
    cout<< recBinarySerach(arr1, tar1, 0, n-1);

    return 0;
}