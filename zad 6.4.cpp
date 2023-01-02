#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	string word;
	string addWord;
	int n;

	cout << "Podaj wyraz do konkatenacji: ";
	cin >> word;
	addWord = word;

	cout << "Podaj ilosc konkatenacji: ";
	cin >> n;


	for (int i = 1; i < n; i++) {
		word += addWord;
	}

	cout << word;
}

