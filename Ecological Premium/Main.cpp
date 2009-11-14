#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::istream;
using std::ifstream;
using std::ios;

#define DEVELOPMENT_ENV

int main(int argc,char* argv[]){
#ifdef DEVELOPMENT_ENV
	ifstream *input = new ifstream("input.txt",ios::in);
#else
	istream *input = &cin;
#endif

	int casos_de_teste=0;
	*input >> casos_de_teste;

	while(casos_de_teste--){
		int qtdeFarmers = 0;
		*input >> qtdeFarmers;
		double budget = 0.0;

		while(qtdeFarmers--){
			double farmyard=0.0; 
			int qtdeAnimals=0,qualidade =0;

			*input >> farmyard;
			*input >> qtdeAnimals;
			*input >> qualidade;

			budget += farmyard*qualidade;
		}
		cout << budget << endl;

	}



	return EXIT_SUCCESS;
}