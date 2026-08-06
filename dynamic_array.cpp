#include<iostream>
using namespace std;
int main()

{
    int *arr, size;
    int i;
    cout << "enter the size of arryay:";
    cin>>size;
    arr= new int [size];
    cout<<"enter "<< size<<"numbers;"<< endl;
    for (i=0; i<size; i++)
    {
        cin>>arr[i];

    }
    cout<<"aaray elements are"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"value at address"<<(arr+i)<<"is:"<<*(arr+i)<<endl;

    }
    delete[]arr;
    return 0;
    
}

