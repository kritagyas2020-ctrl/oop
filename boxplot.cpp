#include<iostream>
using namespace std;
class box{
    private:
    int length;
    int breadth;
    int heigth;
    public:
    void setdimensions (int l, int b ,int h)
    {
        length=l;
        breadth=b;
        heigth=h;
    }
    int getvloume(){
        return(length*breadth*heigth);
    }
    void display(){
        cout<<"dimension of box is "<< endl;
        cout<<"length"<<length<<endl;
        cout<<"breadth"<<breadth<<endl;
        cout<<"heigth"<<heigth<<endl;

    }

};
int main()
{
    box ob;
    ob.setdimensions (10,8,6);
    int vol=ob.getvloume();
    cout<<"volume"<<vol<<endl;
    ob.display();
    return 0;

}