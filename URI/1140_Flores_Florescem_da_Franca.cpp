#include <iostream>
#include <string>

using namespace std;

int main()
{
	int flag, first;
	char arr[50];
	char temp, aux, ant;
	while(true)
	{
		flag = first = 0;
		while(scanf("%s%c", arr, &temp)){

		  aux = arr[0];
		  aux = tolower(aux);
		  
		  if(!first){
		  	ant = aux;
		  	first = 1;
		  }
		  	
		  if(ant != aux)
		  	flag = 1;

		  if(temp=='\n')
		    break;
		}

		if(arr[0] == '*')
			break;
 
        if(flag)
			cout << 'N' << endl;
		else
			cout << 'Y' << endl;		  

	}
	return 0;
}