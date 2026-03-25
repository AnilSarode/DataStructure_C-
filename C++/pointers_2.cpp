#include<iostream>
#include<vector>

using namespace std;

void changA(int* ptr, int &c , int d)  // Pass by refrence using pointers and alias and Pass by value
{
    *ptr =20;
     c = 80;
     d = 50;

}

int main()
{

    int a =10 ;
    int b =40 ;
    int d= 100 ;
 
    changA(&a, b, d);\

    cout<<"inside main fnx:" << a << endl;
    cout<<"inside main fnx:" << b << endl;
    cout<<"inside main fnx:" << d << endl;


    return 0;


}