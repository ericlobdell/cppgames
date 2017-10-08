// StringTester.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string wordOne = "Game";
	string wordTwo("Over");
	string wordThree(3, '!');

	string phrase = wordOne + " " + wordTwo + wordThree;
	cout << "The phrase is" << phrase << "\n\n";

	cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
	cout << "The chartcter at position 0 is " << phrase[0] << "\n";
	cout << "Changing the character at posityion 0.\n";

	phrase[0] = 'L';

	cout << "The phrase is now " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); i++)
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	

	cout << "The sequence 'Over' begins at location " << phrase.find("Over") << endl;

	if (phrase.find("eggplant") == string::npos)
		cout << "'eggplant' is not in the phrase.\n\n";
	 
	phrase.erase(4, 5);
	cout << "The phrase is now " << phrase << endl;

	phrase.erase(4);
	cout << "The phrase is now " << phrase << endl;

	phrase.erase();
	cout << "The phrase is now " << phrase << endl;

	if (phrase.empty())
		cout << "\nThe phrase is no more.\n";

	return 0;
}

