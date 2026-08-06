#include<iostream>
using namespace std;
int x;
 int&test_ref()
 {
    return x;

 }
 int main()
 {
    test_ref()
 }