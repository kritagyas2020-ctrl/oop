#include<iostream>
using namespace std;
class calculator{
    private:
    int Num1;
    int Num2;
    public:
    void setvalue(int x, int y){
        Num1=x;
        Num2=y;
    }
    int addition(){
        return(Num1 + Num2);
    }
    int subtraction(){
        return(Num1-Num2);
    
    }
    int multiply(){
        return(Num1*Num2);
    }


};
int main(){
    calculator ob;
    ob.setvalue(4,5);
    cout<<"addition"<<ob.addition()<<endl;

    return 0;

}

