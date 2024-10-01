// Online C compiler to run C program online
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int maxElement(vector<int>& arr,int i){
    
    if(i==arr.size()){
        return 0;
    }
    int maxVal= maxElement(arr,i+1);
    
    if(arr[i]>maxVal){
        return arr[i];   
    }
    
    return maxVal;
 //i,    
}

int main() {
    // Write C code here
    vector<int> arr={8,5,1,2,7};
    int i=0;
    cout<< maxElement(arr,i)<<"\n";
    
    return 0;
}
