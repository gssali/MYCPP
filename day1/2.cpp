#include <iostream>
using namespace std;
void fun(int a, int* b){
	a=5;
	*b=10;

}

int main(int argc, char* argv[]){
	int i=0;
	int j=0;
	fun(i,&j);
	cout<<i<<endl;
	cout<<j<<endl;
	return 0;
}
