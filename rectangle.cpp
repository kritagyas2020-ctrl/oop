#include<iostream>
using namespace std;
class rectangle {
    public:
    int length;
    int breadth;
    public:
    void setAttributes(int l, int b){
        length = l;
        breadth = b;
    }
    int getlength(){
        return length;

    }
    int getbreadth(){
        return breadth;

    }
    int calcualte(){
        return length*breadth;
    }
    int calculateperimeter(){
        return 2*(length+breadth);

    }
};
int main()
{
    rectangle x1;
    x1.setAttributes (5,4);
    cout << "area=" << x1.calcualte() << endl;
    cout << "permiter="<<x1.calculateperimeter()<<endl;
    return 0 ;

}