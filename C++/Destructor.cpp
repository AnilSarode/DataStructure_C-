#include <iostream>

#include<string>

using namespace std;

class Student {

    public:

    string name;
    double * cgpaPtr;

    Student(string name, double cgpa) {


        this -> name = name;
        cgpaPtr = new double;
        * cgpaPtr = cgpa;
    }

    ~Student() {

        cout << "Hi, I delete everything";
        
        delete cgpaPtr;

    }

    void getInfo() {

        cout << "name : " << name << "\n";
        cout << "cgpa : " << * cgpaPtr << "\n";

    }


};

int main()
{
    /* code */

    Student s1("Anil Sarode", 7.11);
    s1.getInfo();

    return 0;
}