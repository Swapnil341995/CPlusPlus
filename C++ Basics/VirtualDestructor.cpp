#include<iostream>
using namespace std;

class Parent
{
    int a;
    public :
    int *p;
    Parent(){
        cout<<"In parent constructor"<<endl;
        //delete p;   
    }
    virtual ~Parent(){
        cout<<"In parent destructor"<<endl;
        //delete p;   
    }
};

class Child : public Parent
{
    int b;
    public :
    Child(){
        cout<<"In child constructor"<<endl;
    }
    ~Child(){
        cout<<"In child destructor"<<endl;
        //delete p;
    }
};

int main(){
    //Parent pobj;
    //Child cobj;
    Parent *par = new Parent;
    par = new Child; 
    delete par;
}