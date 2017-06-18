#include <iostream>
#include<string>
#include"Luhn.h"
using namespace std;

int main( int Debug, char ** args ){
	string num = "4048022207868134";
	//num = "4417123456789113";
	//num = "367167896748732";
	//num = "79927398713";
	//char str[20];
	//cin.getline( str,20 );
	//cout << num.substr(0,5) << endl;
	//cout << num << endl;
	int temp;
	//cout << "hi";
	//cout << Debug << args[1];
	if ( args[1] == "1" ){
		cout << args[0] << endl;
		cout << args[1] << endl;
		cout << args[2] << endl;
		cout << checkLuhn( args[2] ) << endl;
		
	}
	
	//cout << ( checkLuhn( args[2] ) +1 ) %2;
	/*if ( args == "" )
		return 1;
	
	
	temp = checkLuhn( args );
	if ( temp )
		return 0;
	else
		return 1;*/
	
	
	//cout << false;
	//cout << "拉拉";
	
	return ( checkLuhn( args[2] ) +1 ) %2;
}







