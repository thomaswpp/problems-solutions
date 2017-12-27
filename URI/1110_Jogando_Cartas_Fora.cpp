#include <iostream>
#include <queue>

using namespace std;

queue <int> cards;

int main()
{
	int n, card;

	while(cin >> n && n)
	{

		for(int i = 1; i <= n; i++)
			cards.push(i);

		cout << "Discarded cards: ";
		while(cards.size() > 2)
		{
			cout << cards.front() << ", ";
			cards.pop();
			card = cards.front();
			cards.pop();
			cards.push(card);
		}

		cout << cards.front();
		cards.pop();
		
		cout << endl << "Remaining card: " << cards.front() << endl;
			
		cards.pop();

	}
	return 0;
}