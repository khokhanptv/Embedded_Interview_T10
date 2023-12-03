#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class book {
protected:
    string title ;
    string author;
	int quantity;
public:

    book(): title(""),author(""),quantity(0){}

    book (string tensach,string tacgia,int soluong)
    : title(tensach),author(tacgia),quantity(soluong){}

    void nhapthongtinsach() {
        cout << "Nhap ten sach: ";
        getline(cin, title);
       

        cout << "Nhap tac gia: ";
        getline(cin, author);
        

        cout << "Nhap so luong sach : ";
        cin >> quantity;
        cin.ignore();   
         
       
    }


    int soluong() const {
        return quantity;
    }
    string layThongTin() const {
        return "ten sach: " + title + "\ntac gia: " + author + "\nSo luong: " + to_string(quantity);
    }

};

class library{
    private:
    vector<book> sachtrongthuvien;
    public:

    void tongsach(){
        book book;  
        book.nhapthongtinsach();
        sachtrongthuvien.push_back(book);

    }

    void trasach(){
        
        book book; 
        sachtrongthuvien.push_back(book);

    }

    void displayAvailableBooks() const {
        for ( auto  book : sachtrongthuvien) {
            cout << book.layThongTin() << endl;
            cout << "-------------" << endl;
        }
    }




};

int main(){

    library thuvien;
    int soluongsach;

    do {
        cout << "Nhap loai sach (khong duoc am): ";
        cin >> soluongsach;
        cin.ignore();
    } while (soluongsach < 0);

    for (int i = 0; i < soluongsach; i++) {
        thuvien.tongsach();      
    }

    //thuvien.trasach();
    thuvien.displayAvailableBooks();

    return 0;

}