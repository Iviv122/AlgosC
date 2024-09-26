#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

	ifstream f("result.txt");

	string buffer;
	int i=0;
	while(getline(f,buffer)){
	cout << i ;

	if(i<10){cout <<" ";}	

	float tmp = stof(buffer);
	while(tmp>0){
		cout<<".";
		tmp -= 0.001;
	}
	cout <<"*\n";
	i++;
	}		

}
