#include<iostream>
using namespace std;
class weight{
    float value;
    public:
    weight(float value){
        this->value=value;
    }
    float getvalue(){
        return this->value;
    }
    void  findheavier(weight &obj){
        if(this->value > obj.getvalue()){
            cout<<"weight 1 is heavier than weight 2"<<endl;
        }
        else if(this->value < obj.getvalue()){
            cout<<"weight 2 is heavier than weight 1"<<endl;
        }
        else{
            cout<<"Both weights are equal"<<endl;
        }
    }
};
int main(){
    weight w1(10), w2(20);
    cout<<"weight 1 is "<<w1.getvalue()<<endl;
    cout<<"weight 2 is "<<w2.getvalue()<<endl;
    w1.findheavier(w2);
    return 0;
}