#include <iostream>

int sumArr(int* arr,int i,int a){
	if(i >sizeof(arr)/sizeof(arr[0])){
	return a;
	}

	return sumArr(arr,++i,a+=arr[i]);
}
int main(){
	
	int arr[3] = {5,9,3};
	std::cout << sumArr(arr,0,0) <<std::endl;
}
