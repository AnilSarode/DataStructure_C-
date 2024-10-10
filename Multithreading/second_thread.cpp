// Online C++ compiler to run C++ program online
#include <iostream>
#include<thread>

using namespace std;

void fun(int x){
    while(x-->0){
        cout<< x << "\n";
    }
}
int main() {
    
    thread t(fun, 10);
    t.join();
    return 0;
}
