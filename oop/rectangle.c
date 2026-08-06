#include<stdio.h>
struct rectangle{
    int length;
    int breadth;

}
;
int calculatearea( struct rectangle *e){
    int area= e-> length * e->breadth;
    return area;
}
int main()
{
    struct rectangle ob;
    ob.length=5;
    ob.breadth=3;
    calculatearea(&ob);
    return 0;

}