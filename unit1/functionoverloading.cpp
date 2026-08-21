#include<iostream>
using namespace std;
int sum(int a)
{
    int res=10;
    res=res+a;
    return res;


}
int sum (int a, int b, int c){
    int res=(a+b+c);
    return res;
}
int main()
{
    cout<<sum(10)<<endl;
    cout<<sum(2,4,5)<<endl;
    return 0;
    
}