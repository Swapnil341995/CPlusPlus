#include<iostream>
using namespace std;

class A{
    virtual void getAdmission() = 0;
    virtual void getRollno() = 0;
    virtual void getBooks() = 0;
};
class B : public A{
    public : 
    void getAdmission(){cout<<"Admission"<<endl;}
    void getBooks(){cout<<"books"<<endl;}
    void getRollno(){cout<<"rollno"<<endl;}

};

int main()
{
    B b;
    b.getAdmission();
    b.getBooks();
    b.getRollno();
}