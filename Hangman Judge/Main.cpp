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
		cin >> round;
		cin.ignore();

		if (round == -1) break;
		else cout << "Round "<< round << endl;

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
			cout << LOSER_MSG << endl;
		}else
		if (palavra.length() == 0){
			cout << WIN_MSG << endl;
		}
		else cout << FAIL_MSG << endl;
		
	}
	return 0;
}