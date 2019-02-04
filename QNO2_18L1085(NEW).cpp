// QNO2_18L1085(NEW).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Q2.h"
#include <iostream>
using namespace std;
//All functions Manufacturing
void rectangle::setwidth(int widths){
	width=widths;
}
void rectangle::setlength(int lengths){
	length=lengths;
}  
int rectangle::getwidth(){
	return width;
}

int rectangle::getlength(){
	return length;
}

int rectangle::setarea(){
	int A=length*width;
	return A;
}
void rectangle::rotaterectangle(){
	int temp;
	temp=length;
	length=width;
	width=temp;
}
void rectangle:: drawrectangle(){
	cout<<"The Rectangle becomes:"<<endl;
	for(int i=0;i<length;i++){
		for(int j=0;j<width;j++){
			cout<<"*";
		}
		cout<<endl;
		cout<<endl;
	}
}



