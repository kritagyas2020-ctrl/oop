#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    string program;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Program: " << program << endl;
    }
};

int main() {
    Student s;

    s.name = "John";
    s.rollNo = 101;
    s.program = "Data Science";

    s.display();

    return 0;
}