#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    person(string name, int age){
        this->name=name;
        this->age=age;
    }
    protected:
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
};
class employee:public person{
    float salary;
    public:
    employee(string name, int age, float sal):person(name, age),salary(sal){}
    void getinfo(){
        cout<<"Name: "<< this->getname()<<endl;
        cout<<"Age: "<<this->getage()<<endl;
        cout<<"Salary: "<<this->salary<<endl;
    }
};
int main(){
    employee ob("A", 21, 1000.0);
    ob.getinfo();
    return 0;
}
        