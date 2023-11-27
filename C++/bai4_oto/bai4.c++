#include <iostream>
#include <string>

using namespace std;

class car{
    private:
    int speed;
    string color;
    float fuelCapacity;
    public:
    void nhapthonngtin(int vt, string mau, int xang){
        speed = vt;
        color = mau;
        fuelCapacity = xang;
    }

    void accelerate(int tang){
        speed = speed + tang;
        cout<<"toc do sau khi tang la: "<<speed<<endl;
    }

    void brake(int giam){
        speed = speed -giam;
        cout<<"toc do sau khi giam la: "<<speed<<endl;
    }
    void displayInfo(){
        cout<<"speed: "<<speed<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"fuelCapacity: "<<fuelCapacity<<endl;
    }
};

int main(void){
    car oto;
    oto.nhapthonngtin(40,"xanh",4.2);
    oto.displayInfo();
    printf("---------"); 
    oto.accelerate(10);
    oto.displayInfo();
    printf("---------");
    oto.brake(5);
    oto.displayInfo();

}