#include <iostream>

using namespace std;

bool palindrom(string str, int s, int i=0){
	if(s / 2 == i){return true;}
	if(str[s-i-1] == str[i]){
		return palindrom(str,s,++i);
	}
	return false;
}

int main(){

	string str;
	int s;
	cout << "str" << endl;
	cin >> str;
	s = str.size();
	cout << str << endl;
	cout << s << endl;
	if(palindrom(str,s)){
	cout << "true" << endl;
	}else{
	cout << "false" << endl;
	}
	
}

