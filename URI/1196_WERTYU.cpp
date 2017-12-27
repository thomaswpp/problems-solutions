#include <stdio.h>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

inline void fastRead_string(char *str)
{
	register char c = 0;
	register int i = 0;

	while (c < 33)
		c = getchar();

	while (c != '\n')
	{
		str[i] = c;
		c = getchar();
		i = i + 1;
	}

	str[i] = '\0';
}


map<char,char> create_map(){
	// O S, GOMR YPFSU/ =  I AM FINE TODAY.
	map<char,char> m;
	//1 LINHA DO TECLADO
	m['1'] = '`';
	m['2'] = '1';
	m['3'] = '2';
	m['4'] = '3';
	m['5'] = '4';
	m['6'] = '5';
	m['7'] = '6';
	m['8'] = '7';
	m['9'] = '8';
	m['0'] = '9';
	m['-'] = '0';
	m['='] = '-';

	//2 LINHA DO TECLADO
	m['W'] = 'Q';
	m['E'] = 'W';
	m['R'] = 'E';
	m['T'] = 'R';
	m['Y'] = 'T';
	m['U'] = 'Y';
	m['I'] = 'U';
	m['O'] = 'I';
	m['P'] = 'O';
	m['['] = 'P';
	m[']'] = '[';
	m['\\'] = ']';

	//3 LINHA DO TECLADO
	m['S'] = 'A';
	m['D'] = 'S';
	m['F'] = 'D';
	m['G'] = 'F';
	m['H'] = 'G';
	m['J'] = 'H';
	m['K'] = 'J';
	m['L'] = 'K';
	m[';'] = 'L';
	m['\''] = ';';

	//4 LINHA DO TECLADO
	m['X'] = 'Z';
	m['C'] = 'X';
	m['V'] = 'C';
	m['B'] = 'V';
	m['N'] = 'B';
	m['M'] = 'N';
	m[','] = 'M';
	m['.'] = ',';
	m['/'] = '.';

	return m;
}

inline char troca_letra(map<char, char>& m, char letra){

	if(m.find(letra) != m.end())
		return m[letra];
	else 
		return letra;
}

int main (int argc, char *argv[]) {
	string frase;
	char letra;
	map<char,char> m = create_map();

	while(getline(cin, frase)) {
		for(int i=0; i<frase.size();i++){
			if(frase[i] != ' ') {
				letra = troca_letra(m, frase[i]);
				frase[i] = letra;
			}
		}
		cout << frase << endl;

	}


}