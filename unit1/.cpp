#include<iostream>
using namespace std;
int add_number(int a){
    return (a+10);
}
int add_number(int i, int j){
    return (i+j);
}
float add_number(float x, float y, float z)
{
    return(x+y+z);
}
int main()
{
    cout<< add_number(35)<<endl;
    cout << add_number(4,10)<< endl;
    cout << add_number (3,5,6)<<endl;


    return 0;

}