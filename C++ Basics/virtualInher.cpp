#include<iostream>
using namespace std;

class Car
{
	public :
	Car(int x)
	{
		cout<<"In car class constructor"<<endl;
	}
	public :
	virtual void shiftGear(){
		//cout<<"In shift gear function of car class"<<endl;
	}
	~Car()
	{
		cout<<"In car class destructor"<<endl;
	}
};

class SportsCar : public Car
{
	public : 
	//int a = 190;
	SportsCar() : Car(5)
	{
		cout<<"In sportsCar class constructor"<<endl;
	}
	public :
	virtual void shiftGear(){
		//cout<<"In shift gear function of sportsCar class"<<endl;
	}
	~SportsCar()
	{
		cout<<"In sportsCar class destructor"<<endl;
	}
};

int main()
{
	//Car c;// *p;
	SportsCar sc ;
	//p = &sc;
	sc.shiftGear();
	//p -> shiftGear();
}