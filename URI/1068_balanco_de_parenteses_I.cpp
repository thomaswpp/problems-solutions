#include <iostream>

using namespace std;

int contarParenteses(string expressao) {
	int count = 0;

	for(int i=0; i<expressao.size();i++) {
		if (expressao[i] == '(')
			count++;
		else if (expressao[i] == ')')
			count--;
		if(count<0)
			return -1;
	}

	return count;

}


int main() {
	string expressao;
	int count = 0;
	while(cin >> expressao) {
		count = contarParenteses(expressao);
		if (count == 0)
			cout << "correct" << endl;
		else 
			cout << "incorrect" << endl;
	}
	
	return 0;	
}