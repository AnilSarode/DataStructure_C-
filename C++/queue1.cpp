// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>

using namespace std ;

int main() {
    
    queue<int> q;
    
    for (int i =0; i<5; i++){
        q.push(i);
    }
    cout<< "Front Element: " << q.front()<<"\n";
    q.pop();
    cout << "Front element after pop: " << q.front()<<"\n";
    
    if (q.empty()){
        cout<<"Queue is empty"<<"\n";
        
    }else{
        cout<<"Queue is not empty"<<"\n";
    }
    
    return 0;
}
