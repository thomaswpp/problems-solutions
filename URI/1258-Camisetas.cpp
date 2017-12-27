#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
string color, name, phrase, size;

map<char, char> size_map;
map<char, string> color_map;


char get_key(char value)
{
	map<char, char>::const_iterator it;
	char key;

	for (it = size_map.begin(); it != size_map.end(); ++it)
	{
		if (it->second == value)
		{
			key = it->first;
			break;
		}
	}
	return key;
}

string get_name(string name)
{
	string name_aux;

	for(int i=2; i < name.length(); i++)
	{
		name_aux += name[i];
	}
	return name_aux;
}

void print_solution(vector<string> v)
{
	sort(v.begin(), v.end());

	for(int i=0; i < v.size(); i++)
	{
		phrase = v[i];
		color = phrase[0];
		color = color_map[color[0]];
		size = phrase[1];
		size = get_key(size[0]);
		phrase = color + " " + size + " " + get_name(v[i]);

		cout << phrase << endl;
	}
}

void camisetas(int n, vector<string> *v)
{
	for(int i=0; i < n; i++)
	{
		cin.ignore();
		getline(cin, name);
		cin >> color;
		cin >> size;
		size = size_map[size[0]];
		phrase = color[0] + size + name;
		(*v).push_back(phrase);
	}
	print_solution((*v));
}



int main()
{
	int n = 1, flag = 1;
	
	size_map['P'] = 'a';
	size_map['M'] = 'b';
	size_map['G'] = 'c';

	color_map['b'] = "branco";
	color_map['v'] = "vermelho";

	
	while(n != 0)
	{
		cin >> n;
		if(n > 0 && flag != 1)
			cout << endl;
		flag = 0;
		vector<string> v;
		camisetas(n, &v);


	}

	return 0;

}

