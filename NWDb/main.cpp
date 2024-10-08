#include <vector>
#include <iostream>
#include <chrono>
#include <fstream>
using namespace std;

/*
 Kr.1 Start
 Kr.2 pobrac a i b
 Kr.3 powtorz krok 4 5 6 do poki a != b
 Kr.4 tmp = b
 Kr.5 b = a % b
 Kr.6 a = tmp
 Kr.7 wypisz a
 Kr.8 end
 */

std::chrono::duration<double> calculate(long long int a,long long int b){


	std::chrono::time_point<std::chrono::system_clock> start, end;

	start = std::chrono::system_clock::now();

	while(b!=0){
	long long int tmp = b;
	b = a % b;
	a = tmp;
	}
	
	end = std::chrono::system_clock::now();

	cout << "answer: " << a << endl;

	std::chrono::duration<double> elapsed_seconds = end-start;

	cout << elapsed_seconds.count() << "s" <<endl;
		
	return elapsed_seconds;

}

int main(void){

	vector<std::chrono::duration<double>> results;

	long long int a,b;

	cout << "wpisz a\n";
	cin >>a;
	cout << "wpisz b\n";
	cin >>b;

	results.push_back(calculate(a,b));

}
