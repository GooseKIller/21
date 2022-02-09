#include <iostream>
#include <ctime>

using namespace std;

int main()
{   
	cout << "21 GAME\n\ngame rules:\n 1-take a card\n 0-don`t take a card\n";
    	srand(time(NULL));
    	int you = 1,ai=1,card,round=1,airand=0;
	while (ai!=21 || you!=21)
	{	
		cout << "ROUND:" << round << "/4\n";
		if (round == 4) {
			break;
		}
		card = rand() % 9;
		cout << "YOU:"; cin >> you;
		switch (you)
		{	
		case 0:
			break;
		case 1:
			card = rand() % 9;
			cout << card<<"\n";
			you += card;
			break;
		default:
			cout << "wrong command";
			break;
		}
		cout <<"YOU:" << you<<"\n";
		airand = rand() % 2;
		cout << ai << "\n";
		cout << "COMPUTER:"<<airand<< "\n";
		switch (airand)
		{
		case 0:
			break;
		case 1:
			card = rand() % 9;
			ai = ai + card;
			break;
		default:
			cout << "wrong command";
			break;
		}
		cout << "COMPUTER:" << ai<<"\n";
		round++;

	}
	if (ai > you) {
		cout << "COMPUTER Win!!";
	}
	else if (ai==you)
	{
		cout << "COMPUTER and YOU Win!!";
	}
	else {
		cout << "YOU Win!!";
	}
}
