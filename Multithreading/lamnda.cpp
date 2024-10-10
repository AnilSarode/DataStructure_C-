// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
  auto sum = [] (int a, int b) ->int{
     
     return a+b; 
  };

  
 cout << sum(5,6) << "\n";
    return 0;
}
