// C++ Basics yay!

#include <iostream>
#include <time.h>
#include <string>
using namespace std;
void sixshooter(void)
{
	int ammo = 6;
	for (size_t i = 0; i < ammo; i++)
	{
		cout << "pew" << endl;
	}
}
void Duel(void)
{
	int x = rand() % 100;
	if (x <= 65)
	{
		sixshooter();
		cout << "you: guess you were all talk";
	}
	else
	{
		cout << "bar patron: too slow cowpoke" << endl;
	}
}
int main()
{
	srand(time(NULL));

	string s = "";
	cout << "bar patron: Cowboy, you tryna start a fight!\nyou: " ;
	cin >> s;
	if (s == "yes" or s == "y")
	{
		cout << "draw!\n";
		Duel();
	}
	else
	{
		cout << "bar patron: you're 'posed to say yes, let's try again\n";
		main();
	}
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
