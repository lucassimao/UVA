#include <iostream>
#include <string>
using namespace std;

#define WIN_MSG "You win."
#define LOSER_MSG "You lose."
#define FAIL_MSG "You chickened out."
#define MAX_ERROS 7

int main(int argc,char **argv){

	int round;

	while(true){

		scanf("%d",&round);
		if (round==-1) break;
		else
			printf("Round %d\n", round);

		string palavra;
		string guesses;

		cin.ignore();

		getline(cin,palavra);
		getline(cin,guesses);

		string::const_iterator iterator =  guesses.begin();
		int erros = 0;

		while(palavra.length()>0 && iterator != guesses.end()){
			char c = *iterator;
			int pos = palavra.find(c);

			if (pos == -1) {erros++;++iterator;continue;}
			else
				do{

				palavra = palavra.substr(0,pos) + palavra.substr(pos+1);

			}while(palavra.length()>0 && (pos=palavra.find(c))!=-1);

			++iterator;

		}
		if (palavra.length()==0)
			printf("%s\n",WIN_MSG);
		else
			if (erros >= MAX_ERROS)
				printf("%s\n",LOSER_MSG);
			else
				printf("%s\n",FAIL_MSG);





	}
	return 0;
}