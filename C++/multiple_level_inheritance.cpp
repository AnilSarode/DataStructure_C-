#include <bits/stdc++.h>

using namespace std;

class Person {

    public:

        string name;
        int age;

};

class Student: public Person {

    public:
        
        
        int rollno;
        
        

};

class GradStudent :public Student{

public:

    string researchArea;

};

int main() {
    // your code goes here

    GradStudent s1;

    s1.name = "Anil";
    s1.researchArea = "AI & Signal Processing";

    cout<< s1.name <<"\n";
    cout<< s1.researchArea <<"\n";

    return 0;

}