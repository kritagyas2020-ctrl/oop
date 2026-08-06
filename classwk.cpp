#include<iostream>
using namespace std;
int max(int i, int j){
    return (i>j)? i:j;

}
int main(){
    int i, j;
    cout<<"enter 2 num";
    cin>>i>>j;
    cout << max(i,j)<< endl;
    return 0;


}