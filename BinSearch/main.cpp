#include <iostream>

int binsearch(int* arr ,int start ,int end , int n){
	
	while(start <= end){
	
	int mid = start + (end-start)/2;

	if(arr[mid] == n){
		return mid;
	}
	
	if(arr[mid] < n){
		start = mid+1;
	}else{
		end = start-1;
	}
	}

return -1;
} 

int main(){

	int arr[6] = {1,4,10,20,14,100};
	
	int* ptr = arr;

	std::cout << "Index is: "<< binsearch(ptr,0,6,20) << std::endl; 
}
