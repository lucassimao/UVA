#include <iostream>
#include <cmath>

using namespace std;

int main(int argc,char **argv){
	
	int v=0,t=0;

	while(scanf("%d %d",&v,&t)!=EOF){
		printf("%d\n", v*t*2);
	}

	return 0;
}