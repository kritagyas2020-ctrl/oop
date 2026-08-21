#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(){
        x=-1;
            cout<<"default constructer is called"<<endl;
        }
        A(int i){
            x=i;
            cout<<"parametrized constructer is called "<<x<<endl;
        }
};
int main(){
    A obj1, obj2, obj3;
    return 0;
}