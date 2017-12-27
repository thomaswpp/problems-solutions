#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

	

int main(void)
{
	int t, m, n;
	
	string jap, pt, sentence, word;

	map<string, string> dic;
	
	cin >> t;

	while(t--)
	{
		cin >> m >> n;
		cin.ignore();
		//traducao
		for(int i = 0; i < m; i++)
		{
			getline(cin, jap);
			getline(cin, pt);
			dic[jap] = pt;
		}


		for(int i = 0; i < n; i++)
		{
			getline(cin, sentence);
			//cout << sentence << endl;
			
		    for (int i = 0; i < sentence.length(); i++)
	   		{
	   			//Comparacao de espaco tem que ser com aspas simples, pois e um caracter
	       		if(sentence[i] == ' ') 
	       		{
	           		
	       			if(dic.count(word) > 0)
	       				cout << dic[word] << " ";
	       			else
	       				cout << word << " ";

	           		//Limpa a variavel auxiliar para armazena a proxima palavra
	           		word = ""; 
	       		}
	       		else
	       			//Armazena o caracter na variavel auxiliar
	         		word = word + sentence[i]; 
			}


			if(dic.count(word) > 0)
	       		cout << dic[word] << endl;
	       	else
	       		cout << word << endl;
	       	word = ""; 

		}

		cout << endl;

		dic = map<string, string>();


	}

	return 0;
}