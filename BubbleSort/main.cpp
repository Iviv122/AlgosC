#include <iostream>

void swap(int &x, int &y){

	int tmp = x;
	x = y;
	y = tmp;

}

void BubbleSort(int* arr, int n){

	bool swapped;
	for(int i=0;i<n;i++){
	swapped = false;

	for(int j=0;j<n-i-1;j++){

		if(arr[j] > arr[j+1]){
			swap(arr[j],arr[j+1]);
			swapped = true;
		}

	}

	if(!swapped) return ;

	}
	return ;
}

void printarr(int* arr,int n){

	for(int i=0;i<n;i++){

	std::cout << arr[i] << std::endl;

	}

}

int main(){
	int arr[6] = {15, 67, 0, -15, 1, 24};

	int* ptr = arr;	

	BubbleSort(ptr,6);

	printarr(ptr,6);
}
