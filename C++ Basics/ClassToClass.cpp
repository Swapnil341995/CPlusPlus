#include<iostream>
using namespace std;

class Product{
	private : 
	int m , n;
	public : 
	void SetData(int x,int y){
		m = x;
		n = y;
	}
	void ShowData(){
		cout<<"m is "<<m<<" n is "<<n<<endl;
	}
	int getM(){return m;}
	int getN(){return n;}
};

class Item{
	int a,b;
	public :
	Item(){
		//cout<<" a is "<<a<<" b is "<<b;
	}
	
	Item(Product p ){
		a = p.getM();
		b = p.getN();
	}
	void ShowData(){
		cout<<"a is "<<a<<" b is "<<b<<endl;
	}
};



int main(){
	Item i1;
	Product p1;
	p1.SetData(100,200);
	p1.ShowData();
	i1 = p1;
	i1.ShowData();
}