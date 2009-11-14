#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc,char **argv){

	while(!cin.eof()){
		string msg;
		getline(cin,msg);
		
		string::const_iterator iterator = msg.begin();

		while(iterator!= msg.end()){
			char c = *iterator;
			cout.put(c-7);
			++iterator;
		}
		cout<<endl;
	}
	return 0;
}