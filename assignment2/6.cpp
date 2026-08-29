#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    string program;

    Student(string n, int r, string p) {
        name = n;
        rollNo = r;
        program = p;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Program: " << program << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s1("John", 101, "Data Science");
    Student s2("Alice", 102, "Computer Science");

    s1.display();
    s2.display();

    return 0;
}