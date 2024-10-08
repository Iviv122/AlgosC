#include <iostream>

using namespace std;

int NWD(int a, int b){
	
	while(b){
	int tmp = b;
	b = a % b;
	a = tmp;
	}
	return a;
}

void  NWW(int a, int b){

	int ab = a*b; // Kr2 oblicamy a*b

	a = NWD(a,b); // Kr3 obliczmy NWD a i b
	ab /= a; // Kr4 NWW = a*b/NWD(a,b) dla tego dzielimy przez a

	cout << "NWW: " << ab; // Kr5 wypisac NWW
	if(a == 1){ // Kr6 jezeli NWD == 1 to Kr7 (ozancza ze liczby wzgldnie pierwsze)

		cout << " CoPrimes"; // Kr7 Wypisac ze liczby sa wzglednie pierwsze
	} 
}
int main(){

	int a,b, c;  
	
	// KR1 wpisywanje a i b
	cin >> a >> b >> c;
	for(int i=a;i<b;i++){	
	cout << i << " " << c << " ";
	NWW(c,i);
	cout << endl;
	}
	return 0;

}
