// Function Overiding


#include <iostream>
#include<string>

using namespace std;


class Shape{

public:

	virtual void draw() =0;



};

class Circle : public Shape{

public:
	void draw(){


		cout<<" drawing a Circle";
	}
};


int main(){
    
    Shape* s1 = new Circle();

// 	Circle c1;
// 	c1.draw();
    (*s1).draw();

	return 0;
}