
#include "stdafx.h"
#include "Q1.h"
void readdata(githubuser *&arr,int &noofusers,int *&Nooffolders){

	string buff;
	int nooffolder=0;
	ifstream fin("file1.txt");
	fin>>noofusers;
	arr=new githubuser[noofusers];
	Nooffolders=new int[noofusers];
	for(int i=0;i<noofusers;i++){
		if(i==0){
	getline(fin,buff);
		}//Extra To skip The Number Line
	getline(fin,buff);//For Name
	arr[i].name=buff;
	getline(fin,buff);//Fotr User Id
	arr[i].userid=buff;
	getline(fin,buff);//For email address
	arr[i].email=buff;
	fin>>nooffolder;//No Of folders
	Nooffolders[i]=nooffolder;
	arr[i].oopfolder=new string[nooffolder];
	getline(fin,buff);
	for(int j=0;j<nooffolder;j++){
		getline(fin,buff);
		arr[i].oopfolder[j]=buff;
	}
}
}
	void seteduback(githubuser *&arr,int id,int noofusers){
		string str;
		cout<<"There are "<<noofusers<<" NO Of gitHubusers At Present"<<endl;
		cout<<"Enter The UserId:";
		cin>>id;
		arr[id-1].educational_insitute=new string[1];
		arr[id-1].qualification=new string[1];
		cout<<arr[id-1].name<<" enter your institution name: ";
		cin>>str;
		arr[id-1].educational_insitute[0]=str;
		cout<<arr[id-1].name<<"enter your level of qualification: ";
		cin>>str;
		arr[id-1].qualification[0]=str;
}
void printuser(githubuser *&arr,int id,int noofusers){
		cout<<"There are "<<noofusers<<" NO Of gitHubusers At Present"<<endl;
		cout<<"Enter The UserId For Print His Data:";
		cin>>id;
		cout<<"Name Of User Is :"<<arr[id-1].name<<endl;
		cout<<"UserId Of User Is :"<<arr[id-1].userid<<endl;
		cout<<"Email Of User Is :"<<arr[id-1].email<<endl;
	}
void remove(githubuser *&arr,int id,int noofusers){
	int n=0;
	cout<<"If You Want To Remove Your Educational Info Plzz"<<endl;
	cout<<"Press 1 Either Press 0 :";
	cin>>n;
	if(n==1){
		cout<<"Enter The UserId For Remove Educational Info:";
		cin>>id;
		delete [] arr[id-1].educational_insitute;
		arr[id-1].educational_insitute[0]=nullptr;
		delete [] arr[id-1].qualification;
		arr[id-1].qualification[0]=nullptr;
	}
}
void backup(githubuser *&arr,githubuser *arr2,int &noofusers,int *&Nooffolders){
	arr2=new githubuser[noofusers];
	for(int i=0;i<noofusers;i++){
			arr2[i].oopfolder[Nooffolders[i]];
	}
	for(int i=0;i<noofusers;i++){
	arr2[i].name=arr[i].name;
	arr2[i].userid=arr[i].userid;
	arr2[i].email=arr[i].email;
	for(int j=0;j<Nooffolders[i];j++){
	arr2[i].oopfolder[j]=arr[i].oopfolder[j];
	}
}
}
void deallocate(githubuser *arr){
	delete [] arr;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int *Nooffolders;
	int noofusers;
	int id=0;
	githubuser *user;
	githubuser *arr2;
	readdata(user,noofusers,Nooffolders);
	printuser(user,id,noofusers);   //For Printing UserId
	seteduback(user,id,noofusers);  //Function For setting Educational Histroy
	remove(user,id,noofusers);      //For This function you Must have To call Seteduback Fuction first
	backup(user,arr2,noofusers,Nooffolders); //For Making Backup Info
	deallocate(user);  //For Deallocate the Memory
	return 0;
}

