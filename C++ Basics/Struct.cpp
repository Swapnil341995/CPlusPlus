#include<iostream>
#include<string.h>
using namespace std;

struct book{
	int bookId;
	char title[20];
	float price;
	
	void set_Data(book);
	void display();
};

int main(){
	book b1,b3;
	b1.bookId = 100;
	//b1.title = "ckjfevb";
	strcpy(b1.title,"c++");
	b1.price = 245.50;
	book b2 = {1636,"jgewvfh3v",88.10};
	cout<<b1.bookId<<" "<<b1.title<<" "<<b1.price<<endl;
	cout<<b2.bookId<<" "<<b2.title<<" "<<b2.price<<endl;
}
