#include <iostream>

int fib(int n, int a=0, int b=1,int c=1){
	if(n == 1){
	return a;
	}else if(n == 2){
	return b;
	}else if(n == 3){
	return c;
	}else{
	a=c+b;
	b=a+c;
	c=a+b;
	return fib(n-3,a,b,c);
	}
}

int main(){
	int a;
	std::cin >> a;
	std::cout << fib(a) << std::endl;
}
