// Online C++ compiler to run C++ program online
#include <iostream>
#include<thread>
using namespace std;

int main() {
    // Write C++ code here
  auto sum = [] (int a, int b){
     
     cout << a+b <<"\n";
  };

  
 thread t(sum,5,6);
 t.join();
 
 return 0;
}
