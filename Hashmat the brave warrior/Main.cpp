#include <iostream>
#include <cmath>

int main(int argc,char* argv[]){

	unsigned long qtde1=0,qtde2=0;

	while(scanf("%ld %ld",&qtde1,&qtde2)!=EOF){
		if (qtde1>qtde2)
			printf("%ld\n",qtde1-qtde2);
		else
			printf("%ld\n",qtde2-qtde1);
	}

	return EXIT_SUCCESS;
}