#include<iostream>
using namespace std;

class Parent
{
    int a,b;
    public :
    void setdata(int x,int y){a = x; b = y;}
    void showdata(){cout<<"a is "<< a<<" b is "<<b<<endl;}
};
class child : public Parent
{
    int m,n;
    public :
    void showdata(){cout<<"m is "<<m<<" n is "<<n<<endl;}
};

int main(){
    Parent *p;
    child c;
    p = &c;                      //upcasting
    p ->setdata(10,11);
    p ->showdata();
    cout<<"--------------------------------------------------------------"<<endl;
    Parent par;
    child *chi = (child*)&par;  //downcasting
    chi->showdata();
}
