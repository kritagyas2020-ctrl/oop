#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<this<<endl;
    }
};
int main(){
    demo ob;
    cout<< &ob<<endl;
    return 0;
}