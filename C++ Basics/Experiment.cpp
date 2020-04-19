#include<iostream>
using namespace std;

class Exp
{
    int a, b;
    public :
    void SetData(int x ,int y){
        a = x;
        b = y;
    }
    void ShowData()
    {
        cout<<"a is "<<a<<" b is "<<b<<endl;
    }
};

int main()
{
    Exp *e,a;
    e = &a;
    e->SetData(10,11);
    e->ShowData();
}