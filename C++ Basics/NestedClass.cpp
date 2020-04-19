#include<iostream>
using namespace std;

class Student{
    private :
    int a,b;
    public :
    class Address{
        char* city;
        char* HouseNumber;
        char * street;
        public :
        void showData(){
            cout<<"address data"<<endl;
        }
    };Address add;
    void showData(){
        cout<<"student data"<<endl;
    }
};

int main(){
    Student s;
    Student :: Address a1;
    a1.showData();
    s.showData();
}