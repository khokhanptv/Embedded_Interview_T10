#include <iostream>
#include <string>

using namespace std;


class book{
    protected:
    string title;
    string author;
    int quantity ;

    public:
    void thongtin(string sach,string tacgia,int soluong){
        title = sach;
        author = tacgia;
        quantity = soluong;
    }

    void muonsach(int muon){
        quantity= quantity - muon;
        if (quantity<0) {
            cout<<"khong con sach";
        }
        else{
            cout<<"so sach con lai la: "<<quantity<<endl;
        }
    }
    void trasach( int tra){
        quantity= quantity + tra;
        cout<<"so sach hien tai: "<<quantity<<endl;
    }
        void displayAvailableBooks(){
        cout<<"tieu de : "<<title<<endl;
        cout<<"tac gia : "<<author<<endl;
        cout<<"so luong : "<<quantity<<endl;

    } 
};


class library: protected book {
    public:
    void thongtin(string sach,string tacgia,int soluong){
        title = sach;
        author = tacgia;
        quantity = soluong;
    }

    void borrowBook(int muonsach){
        quantity =quantity -muonsach;
        if (quantity<=0) {
        cout<<"khong con sach trong thu vien";
        }
        else{
        cout<<"so sach con lai trong thu vien la: "<<quantity<<endl;
        }
    }

    void returnBook(int trasach){
        quantity = quantity + trasach;
        cout<<"so sach hien tai cua thu vien: "<<quantity<<endl;
    
    }
    void displayAvailableBooks(){
        cout<<"tieu de : "<<title<<endl;
        cout<<"tac gia : "<<author<<endl;
        cout<<"so luong : "<<quantity<<endl;

    } 
};


int main(void){
    book sach;
    library thuvien;
    sach.thongtin("lap trinh C","none",20);
    sach.displayAvailableBooks();
    printf("-----------\n");
    sach.muonsach(5);
    sach.displayAvailableBooks();
    printf("-----------\n");
    sach.trasach(5);
    sach.displayAvailableBooks();
    printf("------------------\n");


    thuvien.thongtin("hsidsd","no",100);
    thuvien.displayAvailableBooks();
    printf("-----------\n");
    thuvien.borrowBook(20);
    thuvien.displayAvailableBooks();
    printf("-----------\n");
    thuvien.returnBook(20);
    thuvien.displayAvailableBooks();


    return 0;


}






