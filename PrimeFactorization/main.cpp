#include <iostream>
#include <cmath>

void primeFactors(int n){

	while(n % 2 == 0){
	
		std::cout << 2 <<std::endl;	
		n/=2;	
	}

	for(int i=3;i*i <= n; i+=2){
	
		while(n % i == 0){
		std::cout << i << std::endl;
		n /= i;
		}
	
	}
	if(n>2){
	std::cout << n << std::endl;
	}
}

int main(){

	int n;
	std::cin >> n;
	primeFactors(n);
	return 0;

}
