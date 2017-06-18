#include <iostream>

#define debug false

using namespace std;
bool checkLuhn( string s ){
	int temp = 0;
	int i=0;
	int sum = 0;
	int temp2;
	if ( debug ){
		cout << s[1] << endl;
		cout << s << endl;
	}
	while ( i < s.length() ){
		temp = s[s.length() - i - 1 ] - '0';
		if(debug)cout << temp << "\t";
		if ( i %2 == 0 ){
			sum += temp;
			if (debug)cout << temp;
		}
		else{
			//sum += ( temp * 2 );
			temp2 = temp*2;
			if ( temp2 >= 10 ){
				sum += ( temp2 - 9 );
				if(debug)cout << temp2 - 9 ;
			}
			else{
				sum += temp2;
				if(debug)cout << temp2;
			}
		}
			
		i++;
		if(debug)cout << "\t" <<sum << endl;
	}
	if(debug)cout << sum << endl;
	if ( sum % 10 == 0 )
		return true;
	else
		return false;
}
