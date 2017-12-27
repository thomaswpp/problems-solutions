// next_permutation example
#include <bits/stdc++.h>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <string.h>


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n;
	std::string s;

	std::cin >> n;

	while( n-- )
	{
		std::cin >> s;
		
		std::sort(s.begin(), s.end());

		do {
			std::cout << s << '\n';
  		} while ( std::next_permutation( s.begin(), s.end() ) );
		
		std::cout << '\n';
	}

	return 0;
}