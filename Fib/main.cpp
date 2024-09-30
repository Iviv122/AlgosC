#include <iostream>
#include <vector>

using namespace std;

int fib(int x){

	if (x==1){return 1;}
	else if (x==0){return 0;}
	else return fib(x-1)+fib(x-2);
}

unsigned long long int fib_i(int x){
	if(x == 0) {return 0;}
	if(x == 1) {return 1;}
	vector<unsigned long long int> answers;
	answers.push_back(0);
	answers.push_back(1);
	int i=2;
	while(i<=x){
		answers.push_back(answers[i] = answers[i-1]+answers[i-2]);
		cout << "fib(" << i << ")" <<answers[i] << endl; 
		i++;
	}
	return answers[x];

}

int main(){
	int fiba,answer;
	cout << "Write fib num:";
	cin >> fiba;
	cout << "Iteration - 1 Reqursive - 0 ";
	cin >> answer;
	if(answer == 1){
		fib_i(fiba);
	}
	else{
	for(int i=0;i<= fiba;i++){
		cout << "fib(" << i << ")" <<fib_i(i) << endl; 
	}
	}
}
