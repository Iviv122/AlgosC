#include <iostream>
#include <string>
using namespace std;

void decToBin(int x){
	if(x==0){return;}	
	cout << (x % 2);
	decToBin(x/2);
}

int main(){

	int dec;
	cout << "Wpisz liczbe dla transformacji" << endl;
	cin >> dec;
	decToBin(dec);
	std::cout << endl;

}
