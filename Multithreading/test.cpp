// Online C++ compiler to run C++ program online
#include <iostream>
#include<thread>
#include <chrono>
using namespace std;

void run(int count){
    
    while(count--> 0){
        cout << "Anil Sarode"<<"\n";
    }
    this_thread::sleep_for(chrono::seconds(3));

}

int main(){
    
    thread t1(run, 10);
    cout<<"main()"<<"\n";
    t1.join();
    //t1.join()   // avoid this 
    
    if (t1.joinable()){
        t1.join();
    }
    cout<<"main() after"<<"\n";
    return 0;
    
}
