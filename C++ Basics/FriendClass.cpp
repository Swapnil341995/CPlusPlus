#include<iostream>
//using namespace std;

class B;

class A 
{
    private :
    int a;
    friend class B;
    public :
    void SetData(int z){
        a = z;
    }
};

class B
{
    public :
    void ShowData(A &x){
        std :: cout<<"A :: a ="<<x.a<<std :: endl;
    }
};

int main()
{
    B b;
    A a;
    a.SetData(10);
    b.ShowData(a);
}