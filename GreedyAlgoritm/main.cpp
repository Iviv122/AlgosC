#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

vector<int> getNominals(){


	string line;
	cout << "Wpisz nominale: " << endl;

	getline(cin,line);
	
	istringstream input(line);
	vector<int> nominals;
	int value;
	while(input >> value){
		nominals.push_back(value);
	}
	
	return nominals;

}

int main(){

	int reszta;
	vector<int> monety;
	
	monety = getNominals();
	
	cout<<"Wpisz reszte: ";
	cin >> reszta; 

	for(int i=0;i<monety.size();i++){
		cout << monety[i] << endl;
	}
	int i=0;
	while(reszta>0){
		if(reszta >= monety[i]){
		
		int iloscMonet = (int)reszta / monety[i];
		reszta -= monety[i]*iloscMonet;
		cout << "Monet " << monety[i] << " uzyto " << iloscMonet << " raz" << endl; 	
		}
		i++;
	}
}

