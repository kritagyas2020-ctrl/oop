#include<iostream>
namespace A{
    int x=10;
}
namespace b {
    int x =20;

}
int main ()
{
    std::cout<<"int A x="<< A::x <<std::endl;
    std::cout<<"int B x="<< b::x <<std::endl;
    return 0;

}