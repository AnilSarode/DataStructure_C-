// Online C++ compiler to run C++ program online
#include <iostream>
#include<thread>
#include <chrono>
using namespace std;

void run(int count){
    
    while(count--> 0){
        cout << "Anil Sarode"<<"\n";
    }
    //this_thread::sleep_for(chrono::seconds(5));
    cout <<"thread is Finished"<<"\n";
}

int main(){
    
    thread t1(run, 10);
    cout<<"main()"<<"\n";
    t1.detach();
    
    cout<<"main() after"<<"\n";
    this_thread::sleep_for(chrono::seconds(10));
    return 0;
    
}
