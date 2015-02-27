/*
 * Helloword cpp
 * Author:gssali
 * Date: 2015-2-27
 * Version: 1.0
 */

#include <iostream>
extern void fun(void);
using namespace std;

int main(int argc, char* argv[]){
	/*
	int number1= 0,number2= 0,sum= 0;
	//std::cout << "Hello World!\n" << std::endl;
	cout << "Hello World!\n" << endl;
	//endl >> endline;
	cout << "please input a number1" << endl;
	cin >> number1;
	cout << "please input a number2" << endl;
	cin >> number2;
	sum = number1 + number2;
	cout << sum << endl;
	
	//fun();
	


	return 0;


}


/*void fun(void){*/
	float a = 0; float b = 0; float result = 0; char s = '\0';
	while(1){
		cout << "please input a number1 :";
		cin >> a;
		cout << "please input a number2 :";
		cin >> b;
		cout << "please input a symbol :";
		cin >> s;
		switch(s){
			case '+':
					result = a+b;
					break;
		
			case '-':	
					result = a-b;
					break;
		
			case '*':
					result = a*b;
					break;

			case '/':	
					result = a/b;
					break;

			default :
					break;

		}
		cout << "result = "<< result <<endl;
		cout << "continue?(y/n)" << endl;
		cin >> s;
		if(s == 'n'){
			break;

		}else if (s == 'y'){
			continue;

		}
	}
	
	return 0;
}
