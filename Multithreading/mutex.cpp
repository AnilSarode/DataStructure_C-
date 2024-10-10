// Online C++ compiler to run C++ program online
#include <iostream>
#include<thread>
#include <chrono>
using namespace std;


int myAmount =0;

void addMoney(){
    ++myAmount ;
    this_thread::sleep_for(chrono::seconds(3)); 
}

int main(){
    
    thread t1(addMoney);
    thread t2(addMoney);
    t1.join();
    t2.join();

    cout<<myAmount<<"\n";

    return 0;
    
}
