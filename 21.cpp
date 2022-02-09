#include <iostream>
#include <ctime>

using namespace std;

int main()
{   
    cout << "21 GAME\n\ngame rules:\n 1-take a card\n 0-don`t take a card\n";
    srand(time(NULL));
    int you = 0,youint,ai=0,card,round=0,airand=0;
	while (ai!=21 || you!=21)//rounds
	{	
		cout << "ROUND:" << round+1 << "/4\n";
	if (round == 3) {
			break;
		}
		cout << "YOU:"; cin >> youint;//you
		switch (youint)
		{	
		case 0:
			cout <<"YOUR card:"<< card << "\n";
			break;
		case 1:
			card = rand() % 9+6;
			cout << "YOUR card:" << card << "\n";
			you = you + card;
			break;
		default:
			cout << "wrong command";
			break;
		}
		cout <<"YOU:" << you<<"\n";
		airand = rand() % 3;
		cout << "COMPUTER:"<<airand<< "\n";//compurter
		switch (airand)
		{
		case 0:
			break;
		case 1:
			card = rand() % 9+6;
			ai = ai + card;
			break;
		default:
			cout << "wrong command";
			break;
		}
		cout << "COMPUTER:" << ai<<"\n";
		round++;

	}
	if (ai > you && ai<=21 || you>21 && ai<=21) {
		cout << "COMPUTER Win!!";
	}
	else if (ai==you)
	{
		cout << "COMPUTER and YOU Win!!";
	}
	else if(you>ai && you<=21 || ai>21  && you<=21){
		cout << "YOU Win!!";
	}
}
//i will do it better
