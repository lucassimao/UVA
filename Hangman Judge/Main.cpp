#include <iostream>
#include <string>
using namespace std;

#define MAX_ERRORS 7

#define WIN_MSG "You win."
#define LOSER_MSG "You lose."
#define FAIL_MSG "You chickened out."

int main(int argc,char **argv){

	int round;
	
	while(true){
		scanf("%d",&round);
		cin.ignore();

		if (round == -1) break;
		else printf("Round %d\n", round);

		string palavra;
		string guesses;
		int erros = 0;

		getline(cin,palavra);
		getline(cin,guesses);

		string::const_iterator iterator = guesses.begin();

		while(iterator != guesses.end()){
			char c = *iterator;
			int pos = 0;

			while( palavra.length()>0 || erros> MAX_ERRORS ){
				pos = palavra.find(c);

				if (pos == -1){++erros;break;}
				else{
					if (pos==0)	palavra = palavra.substr(1);
					else palavra = palavra.substr(0,pos) + palavra.substr(pos+1);
				}
			}
			++iterator;
		}
		if (erros > MAX_ERRORS){
			printf("%s\n",LOSER_MSG);
		}else
		if (palavra.length() == 0){
			printf("%s\n",WIN_MSG);
		}
		else printf("%s\n",FAIL_MSG);
		
	}
	return 0;
}