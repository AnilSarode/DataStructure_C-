#include <bits/stdc++.h>

using namespace std;

class Person {

    public:

        string name;
        int age;

    // Person (string name, int age){

    //     this->name = name;
    //     this->age = aga;
    // }

        Person() {
            
            cout <<"Perent class Constructor"<<"\n";

        }

};

class Student: public Person {

    public:

        
        Student(){
            
            cout << "Child Class Constructor" <<"\n"; 
        }

        
        int rollno;
        
        
        void getInfo() {

        cout << "name : " << name << "\n";
        cout << "age : " << age << "\n";
        cout << "rollno : " << rollno << "\n";


    }


};

int main() {
    // your code goes here

    Student s1;
    s1.name = "Anil";
    s1.age = 31;
    s1.rollno = 41;

    s1.getInfo();
    return 0;

}