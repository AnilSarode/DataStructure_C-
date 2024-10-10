#include<iostream>
using namespace std;
#define n 20

class queue{
    int *arr;
    int front;
    int back;
    
    // This is the constructor 
    
    public:
    queue(){
        arr = new int [n];
        front = -1;
        back = -1;
    }
    
    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if (front ==-1){
            
            front++;
        }
        
    }
    
    void dequeue(){
        if (front ==-1 || front > back){
            cout <<"No Element Queue"<<"\n";
            return;
        }
        front ++;
        
    }
    
    int peek(){
        
           if (front ==-1 || front > back){
            cout <<"No Element Queue"<< "\n";
            return -1;
        }
        return arr[front];
    } 
    
    bool empty(){
            if (front ==-1 || front > back){
            return true;
            }
            
            return false;
            
    }
    
};

int main(){
    
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    
    cout<<q.peek()<<"\n";
    q.dequeue();
    
    cout<<q.peek()<<"\n";
    q.dequeue();
    
    cout<<q.peek()<<"\n";
    q.dequeue();
    
    cout<<q.peek()<<"\n";
    q.dequeue();
    
    cout<<q.empty()<<"\n";
    
    return 0;
    
}
