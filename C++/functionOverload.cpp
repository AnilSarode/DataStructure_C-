
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class functionOverloading{
    
    public :
    
    void functionOverLoading(int x){
        
        cout << x << "\n";

    }
    
    void functionOverLoading( float x){
        
        cout << x << "\n";
    }
    
    void functionOverLoading( double x, int y=0){
        cout << x << "\n";
        
    }
};

int main() {
    // Write C++ code here
    functionOverloading f ; 
    
    f.functionOverLoading(12.5, 5);
    f.functionOverLoading(12);
    f.functionOverLoading(12.5);

    return 0;
}