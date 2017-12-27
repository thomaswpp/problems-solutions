#include <iostream>
#include <string>

using namespace std;

bool my_replace(string s, string& number)
{
	bool is_int = true;
	char c;
	for(int i=0; i < s.size(); i++)
	{
		c = s[i];
		if(c == 'o' || c == 'O')
			number += '0';
		else if(c == 'l')
			number += '1';
		else if(c == ',' || c == ' ')
			number += "";
		else if(c < 48 || c > 57) //!= digit
			is_int = false;
		else
			number += c;
	}
	return is_int;
}

int main()
{
	string s, number;

	while(getline(cin, s))
	{
		
		//is int ?
		if(my_replace(s, number)){
			try {
	            cout << stoi(number) << endl;
	        } catch (...){
	            cout << "error" << endl;
	        }
    	} else
    		cout << "error" << endl;

    	number = "";
	}

	return 0;
}