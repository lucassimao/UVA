#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc,char* argv[]){

	int casos_de_teste=0;
	cin >> casos_de_teste;

	while(casos_de_teste--){
		int qtdeFarmers = 0;
		cin >> qtdeFarmers;
		double budget = 0.0;

		while(qtdeFarmers--){
			double farmyard=0.0; 
			int qtdeAnimals=0,qualidade =0;

			cin >> farmyard;
			cin >> qtdeAnimals;
			cin >> qualidade;

			//budget += (farmyard/qtdeAnimals)*qualidade*qtdeAnimals;
                        budget += farmyard*qualidade;
		}
		cout << budget << endl;

	}



	return EXIT_SUCCESS;
}