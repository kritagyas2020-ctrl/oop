#include<iostream>
using namespace std;
class Engine{
    int cubiccapacity;
    bool status;

    public:
    Engine(int cc, bool sc):cubiccapacity(cc),status(sc){}
    int getcc();
    bool getstatus();
    void updatestatus();
    };
int Engine::getcc(){
    return cubiccapacity;
}
bool Engine::getstatus(){
    return status;
}
void Engine::updatestatus(){
    if (status==true){
        status=false;
    }
    else{
        status=true;
    }
}
class bike{
    string brand;
    Engine *eng;
    int speed;
    public:
    bike(string br, Engine *e):brand(br),eng(e),speed(0){}
    void start();
    void stop();
    void accelerate(int qty);
    void getbikeinfo();
};
void bike::start(){
    if(eng->getstatus()==true){
        cout<<"Bike is already started"<<endl;
    }
    else{
        eng->updatestatus();
        cout<<"Bike is started"<<endl;
    }
}
void bike::stop(){
    if(eng->getstatus()==true){
        eng->updatestatus();
        speed=-1;
        cout<<"Bike is stopped"<<endl;
    }
    else{
        cout<<"Bike is already stopped"<<endl;
    }
}
void bike::accelerate(int qty){
    if(eng->getstatus()==true){
        speed+=qty;
        cout<<"Bike is accelerated to "<<speed<<" km/h"<<endl;
    }
    else{
        cout<<"Bike is not started yet"<<endl;
    }
}
int main(){
    Engine e(150, true);
    bike b("Yamaha", &e);
    b.start();
    b.accelerate(20);
    b.stop();
    return 0;
}
