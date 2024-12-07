#include <bits/stdc++.h>
using namespace std;


class base {
    
    public :
    
        virtual void print(){
            
            cout<< "this is the base class's print function" << "\n";
        }
    
        void display(){
            
            cout<< "this is the base class's display function" << "\n";
        }
    
};

class derived : public base {
    
    public:
    
    
        
        void print(){
            
            cout<< "this is the derived class's print function" << "\n";
        }
    
        void display(){
            
            cout<< "this is the derived class's display function" << "\n";
        }
    
    
};


int main() {
	// your code goes here
	
	
	base *basePtr;
	
	derived obj;
	
	basePtr = &obj;
	
	(*basePtr).print();
	(*basePtr).display();
	
	
	return 0;
	
	
	

}
