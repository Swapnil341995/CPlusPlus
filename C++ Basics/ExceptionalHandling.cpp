#include<iostream>
using namespace std;

int main(){
    cout<<"start before try"<<endl;
    try{
        int a = 5;
        cout<<"in try before exception"<<endl;
        int e = 0/5; throw a;
        cout<<"in try after exception"<<endl;
    }catch(int e){
        cout<<"Exception caught "<<e<<endl;
    }
    cout<<"after catch"<<endl;
}