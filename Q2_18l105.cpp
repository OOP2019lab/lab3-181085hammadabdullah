// Q2_18l105.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Q2.h"
#include <iostream>
using namespace std;

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
void rectangle::rotaterectangle(int temp){
	temp=length;
	length=width;
	width=temp;
}
void rectangle:: drawrectangle(){
	for(int i=0;i<length;i++){
		for(int j=0;j<width;j++){
			cout<<"*";
		}
	}
}

