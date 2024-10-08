#include <iostream>

int countBit(int n,int a=0){
	if(n == 0){
		std::cout << "\n";
		return a;
	}
	if(n % 2== 1){
	std::cout << 1;
	return countBit(n/2,++a);
	}else{
	std::cout << 0;
	return countBit(n/2,a);
	}

}

int main(){
	int a = 9;
	std::cout << countBit(a) << std::endl;
}
