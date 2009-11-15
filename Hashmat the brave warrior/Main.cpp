#include <iostream>
#include <cmath>

int main(int argc,char* argv[]){

	int qtde1=0,qtde2=0;

	while(scanf("%d %d",&qtde1,&qtde2)!=EOF){
		printf("%d\n",abs(qtde1-qtde2));
	}

	return EXIT_SUCCESS;
}