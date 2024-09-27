#include <iostream>
#include <cmath>

void isPrime(int n){

	if(n == 1){ return;}

	if(n <= 3){ std::cout << n << std::endl; return;}

	if(n % 2 ==0 || n % 3 == 0){
		return;
	}

	for(int i=5;i*i<=n;i+=6){
	
	if(n % i==0 || n % (i + 2) == 0){return;}
	}
	std::cout << n << std::endl;
}

int main(){

	int n;
	std::cout<< "Wpisz do ktorej liczby szukamy liczb pierwszych" << std::endl;

	std::cin >> n;

	std::cout << std::endl;	

	for(int i=2;i<n;i++){
		isPrime(i);
	}

}
