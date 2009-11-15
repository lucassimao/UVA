#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void inline imprimir(char *c,int *qtdeVezes){
	for(int i=0;i<*qtdeVezes;++i)
		printf("%c",*c);
	*qtdeVezes = 0;
}

int main(int argc,char **argv){

	char space  = ' ';

	while(!cin.eof()){
		ostringstream codigo;
		string linha;

		do{
			getline(cin,linha);
			if (linha.length()>0)
				codigo << linha << endl;
			else break;
		}while(true);

		string cod = codigo.str();
		string::const_iterator iterator = cod.begin();
		int count = 0;

		while(iterator!= cod.end()){
			char c = *iterator;

			if (isdigit(c)) count += atoi(&c);
			else
				if (c=='b')	imprimir(&space,&count);

				else
					if (c=='!' || c=='\n') cout << endl;
				else imprimir(&c,&count);

					++iterator;

		}
		cout<<endl;
	}


	return 0;
}

