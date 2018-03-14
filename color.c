#include<iostream>
using namespace std;
#include"concol.h"

void main()
{
	char a[30];
	SetConsoleTitle("Color");
	concol b=concol(backcolor());
	cout<<red<<"Hello"<<endl;
	setcolor(red,yellow);
	cout<<"Hello2"<<endl;
	setcolor(cyan,b);
	cout<<"Hello3"<<endl;
	cout<<blue<<"Enter a word ";
	cin>>green>>a;
	cout<<pink<<"You entered "<<yellow<<a<<endl;
}
