#include "exercise1.h"

#include <iostream>
using namespace::std;

using namespace::iotek;

void iotek::output_info(char* name){
	int age=0;
	cout<<"My name is ";
	cout<<name<<endl;
	cout<<"your age :";
	cin>>age;
}

int main(int argc, char* argv[]){
	int age=0;
	if(argc<2){
		cout<<"My name is secret"<<endl;
		cout<<"your age :";
		cin>>age;
		return 1;	

	}
	
	iotek::output_info(argv[1]);

	return 0;
}
