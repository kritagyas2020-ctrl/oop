#include<iostream>
using namespace std;
class A{
    public:
    int x;
    int y;
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
};
class B : public A{
    public:
    int z;
 };
int main() {
    B obj;
    obj.x = 10;
    obj.y = 20;
    obj.z = 30;
    cout << obj.x << " " << obj.y << " " << obj.z << endl;
    cout<<"x="<<obj.getX()<<" y="<<obj.getY()<<endl;
    cout<<obj.getX()<<" "<<obj.getY()<<endl;
    return 0;
}