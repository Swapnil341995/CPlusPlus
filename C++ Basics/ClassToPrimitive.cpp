#include<iostream>
using namespace std;

class Complex
{
	private :
	int a,b;
	public : 
	void SetA(int a){this->a = a;}
	int GetA(){return a;}
	void SetB(int b){this->b = b;}
	int GetB(){return b;}
	void ShowData(){cout<<"\n a is "<<a<<" b is "<<b<<endl;}
	
	Complex(){}
	Complex (int x)
	{
		SetA(x);
	}
	operator int(){
		return a;
	}
};

int main(){
	int x = 12;
	Complex c1;
	c1.SetA(100);
	x = c1;
	c1.ShowData();
	cout<<x;
}