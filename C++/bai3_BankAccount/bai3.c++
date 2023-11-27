#include <iostream>
#include <string>

using namespace std;

class BankAccount{
    private:
       unsigned long accountNumber;
       unsigned long balance;
       string ownername ;

    public:
    void thongtin(unsigned long stk,unsigned long sodu, string ten ){
        accountNumber = stk;
        balance = sodu;
        ownername = ten;
    }
    void displayInfo(){
        cout<<"accountNumber: "<<accountNumber<<endl;
		cout<<"balance: "<<balance<<endl;
		cout<<"ownerName: "<<ownername<<endl;
    }
    void guitien(unsigned long themtien){
        balance = balance +themtien;
        cout<<"da gui tien OK, so du moi la: "<<balance<<endl;
    }
    void ruttien(unsigned long ruttien){
        balance = balance -ruttien;
        if(balance>0){
        cout<<"rut tien OK, so du con lai: "<<balance<<endl;
        }
        else{
            cout<<"rut tien NOK,so du khong du"<<endl;    

        }
    }
};
int main(void){
    BankAccount bank;
    bank.thongtin(123123,99999,"thai");
    bank.displayInfo();
    bank.guitien(1000000);
    bank.displayInfo();

    return 0;

}

    





 
