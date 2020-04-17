#include<iostream>
using namespace std;

class person{
	public :
	virtual void getAdmission() = 0;
	void getFees(){
		cout<<"in get fees function of person class"<<endl;
	}
};

class student : public person
{
	public :
	void getAdmission(){
		cout<<"in get fees function of student class"<<endl;
	}
	void getFees(){
		cout<<"in get fees function of person class"<<endl;		
	}
};

int main()
{
	//person p;
	student s, *p;
	s.getAdmission();
	p = &s;
	p -> getAdmission();
}