#include<iostream>
using namespace std;

class A{
	float a;
	float b;
	public :
	void set_Data(float x,float y){
		a = x;
		b = y;
	}
	void ShowData();
	
	A operator -(A z){
		A temp;
		temp.a = a - z.a;
		temp.b = b - z.b;
		return temp;
	}
	
};

void A :: ShowData(){
	cout<<"a is "<<a<<" b is "<<b<<endl;
}

int main(){
	A a1,a2,a3;
	a1.set_Data(200.45,100.50);
	a1.ShowData();
	a2.set_Data(100,300);
	a3 = a1-a2;
	a3.ShowData();
	
}