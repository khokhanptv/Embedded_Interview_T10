#include <iostream>

using namespace std;

class Shape {
protected:
    int canh;
    int chieucao;
    float dientich;
    float chuvi;

public:
    virtual void calculateArea() {
        dientich = 0; 
        cout << "Diện tích: " << dientich << endl;
    }

    virtual void calculatePerimeter() {
        chuvi = 0; 
        cout << "Chu vi: " << chuvi << endl;
    }
};

class Circle : protected Shape {
protected:
    int bankinh;

public:
    Circle(int r) : bankinh(r) {}
 
    void calculateArea() override {
        dientich = 3.14 * bankinh * bankinh;
        cout << "Dien tich " << dientich << endl;
    }

    void calculatePerimeter() override {
        chuvi = 2 * 3.14 * bankinh;
        cout << "Chu vi: " << chuvi << endl;
    }
};

class Rectangle  : protected Shape {
protected:
    int chieudai;
    int chieurong;

public:
    Rectangle(int a,int b) : chieudai(a), chieurong(b) {}

    void calculateArea() override {
        dientich = chieudai * chieurong;
        cout << "Dien tich " << dientich << endl;
    }

    void calculatePerimeter() override {
        chuvi = 2 * (chieudai+chieurong);
        cout << "Chu vi: " << chuvi << endl;
    }
};

int main(void) {
    Circle tron(5);
    Rectangle dai(4,5);
    tron.calculateArea();
    tron.calculatePerimeter();
    cout<<"------------"<<endl;
    dai.calculateArea();
    dai.calculatePerimeter();
    return 0;
}
