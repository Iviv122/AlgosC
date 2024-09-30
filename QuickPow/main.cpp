#include <iostream>
using namespace std;

long long int pow(long long int a, long long int b){

	if(b == 0){
		return 1;
	}
	if(b >0){
	return a*pow(a,b-1);
	}
	long long int w = pow(a,b/2);
	return w*w;
return a*a;

}

int main(void){
	
	long long int a,b;

	cout << "wpisz a:";
	cin >> a;

	cout << "Do ktorej potengi: ";
	cin >> b;
	cout << pow(a,b) << endl;
}
