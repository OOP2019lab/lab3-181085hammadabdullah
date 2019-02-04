#include "stdafx.h"
#include <iostream>
#include "Q2.h"
using namespace std;

void main(){
	//All fuctions has been Call To check the Struct
	rectangle a;
	a.setwidth(10);
	a.setlength(12);
	cout<<"Width Is:"<<a.getwidth()<<endl;
	cout<<"Height Is:"<<a.getlength()<<endl;
	int A=a.setarea();
	cout<<"The Area Is:"<<A<<endl;
	a.drawrectangle();
	a.rotaterectangle();
	cout<<"After Rotate Rectangle The New Width and Height Becomes:"<<endl;
	cout<<"Width Is:"<<a.getwidth()<<endl;
	cout<<"Height Is:"<<a.getlength()<<endl;
	cout<<"After Rotate Rectangle The Rectangle Becomes:"<<endl;
	a.drawrectangle();
}