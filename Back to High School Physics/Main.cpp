#include <iostream>
#include <cmath>

using namespace std;

int main(int argc,char **argv){
	
	int v=0,t=0;

	while(!cin.eof()){
		cin>>v;
		cin>>t;
		//double aceleracao = v/t; v = v0+at .:. a = v/t
		// displacement = s = s0 + v0t + a*pow(t,2)/2
		cout << abs(v*t*2) << endl;
	}

	return 0;
}