// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

void reverse(const string *str, string *rev, int i){
    if (i== (*str).size()){
        return ;
        
    }
    reverse(str, rev, i+1);
    
    (*rev).append(1,(*str)[i]);
    
    // cout <<*str<<*rev<<"A"<<"\n";
}


int main() {
    // Write C++ code here
    
    string myString = "ANIKITA";
    cout<<"The Give String "<<myString<<"\n";
    string reverseString;
    int i=0;
    reverse(&myString, &reverseString, i);
    cout << "The Reversed String: " << reverseString << "\n";

    return 0;
}
