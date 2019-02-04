// Q1_l181085.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Q1.h"
void readdata(githubuser *&arr){
	string buff;
	int noofusers;
	int nooffolder=0;
	ifstream fin("file1.txt");
	fin>>noofusers;
	//cout<<noofusers;
	arr=new githubuser[noofusers];
	for(int i=0;i<noofusers;i++){
		getline(fin,buff);
		arr[i].name=buff;
		cout<<arr[i].name<<endl;
		getline(fin,buff);
		arr[i].userid=buff;
		cout<<arr[i].userid<<endl;
		getline(fin,buff);
		arr[i].email=buff;
		cout<<arr[i].email<<endl;
		fin>>nooffolder;
		cout<<nooffolder;
		arr[i].oopfolder=new string[nooffolder];
		for(int j=0;j<nooffolder;j++){
			getline(fin,buff);
			arr[i].oopfolder[j]=buff;
		}
	}
	

}

int _tmain(int argc, _TCHAR* argv[])
{
	
	githubuser *arr;	
	readdata(arr);
	return 0;
}

