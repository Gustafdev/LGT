#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	char letter;
	int randno;
	
	srand(time(0));
	int max_rader, max_kolumner;
	cout << "Skriv in antal rader och kolumner: ";
	cin >> max_rader >> max_kolumner;

	for (int rad = 1; rad <= max_rader; ++rad)
	{
		for (int kolumn = 1; kolumn <= max_kolumner; ++kolumn)
		{

			randno = rand() % 14;

			if (randno == 0)
				letter = (char)218;

			if (randno == 1)
				letter = (char)191;

			if (randno == 2)
				letter = (char)179;

			if (randno == 3)
				letter = (char)180;

			if (randno == 4)
				letter = (char)191;

			if (randno == 5)
				letter = (char)192;

			if (randno == 6)
				letter = (char)193;

			if (randno == 7)
				letter = (char)194;

			if (randno == 8)
				letter = (char)195;

			if (randno == 9)
				letter = (char)196;

			if (randno == 10)
				letter = (char)197;

			if (randno == 11)
				letter = (char)217;

			if (randno == 12)
				letter = ' ';

			cout << letter;
		}
		cout << "\n";
	}
}