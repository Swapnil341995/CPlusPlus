#include<iostream>
using namespace std;

class grandParent{
    public :
    grandParent(){
        cout<<"Inside grandparent constructor."<<endl;
    }
};
class parent1 : virtual public grandParent{
    public :
    parent1(){
        cout<<"inside parent1 constructor!!!"<<endl;
    }
};
class parent2 : virtual public grandParent{
    public :
    parent2(){
        cout<<"inside parent2 constructor"<<endl;
    }
};
class child : public parent1,parent2
{
    public :
    child(){
        cout<<"in child class constructor"<<endl;
    }
};
int main(){
    child c1;   //to solve the diamond problem lets make virtual
}