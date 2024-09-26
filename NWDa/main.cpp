#include <vector>
#include <iostream>
#include <chrono>
#include <fstream>
using namespace std;

/*
 Kr.1 Start
 Kr.2 pobrac a i b
 Kr.3 powtorz krok 4 do poki a != b
 Kr.4 gdy a<b to b<-b-a jezeli b>=a a<-a-b
 Kr.5 Wipisz a lub b
 Kr.6 End
 */

std::chrono::duration<double> calculate(long long int a,long long int b){


	std::chrono::time_point<std::chrono::system_clock> start, end;

	start = std::chrono::system_clock::now();

	while(a!=b){
	if(a<b){
		b=b-a;
	}else{
		a=a-b;
	}

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
