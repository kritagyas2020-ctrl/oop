#include<iostream>
#include<string>
using namespace std;

class employee{
    private:
    string name;
    int age;
    double salary;

    public:
    // Method to initialize attributes
    void setAttributes(string n, int a, double s){
        name = n;
        age = a;
        salary = s;
    }

    // Getter methods
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    double getSalary(){
        return salary;
    }

    // Method to increment salary
    void incrementSalary(double amt){
        salary = salary + amt;
    }
};

int main(){
    employee emp;

    emp.setAttributes("Anup", 21, 50000);

    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    emp.incrementSalary(5000);

    cout << "Updated Salary: " << emp.getSalary() << endl;

    return 0;
}