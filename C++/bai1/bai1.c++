#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
    string name;
    int old;
    float score;
    public:
    void setthongtin(string ten,int tuoi,float diem ){
        name = ten;
        old = tuoi;
        score = diem;
    }

    void hienthi(){
        cout<<"ten: "<<name<<endl;
        cout<<"tuoi: "<<old<<endl;
        cout<<"diem: "<<score<<endl;

    }
};

int main(void){
    Student st;
    st.setthongtin("thai",30,9.9);
    st.hienthi();

    return 0;

}

