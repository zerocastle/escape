/*
	merge sort 
	=> quick 과 마찬가지로 n * logN을 보장한다 quick 은 정렬이 어느 거의 되어 있던가 
	아니면 완벽하게 정렬이 되어 있는 상황에서 수행을 하게 되면 최악의 경우 n^2 를 수행할수도 
	있다 ,
	하지만 merge sort는 pivot 값을 정하지 않고 분할정렬을 하기 때문에 n ^2이 나올수가 없다.
	
	ex)
	=> 2 의 배수 만큼 합쳐서 정렬을 하여 합친다. 
*/

#include <stdio.h>

int number = 8;
int sorted[8];  

void merge(int a[] , int m , int middle , int n){
	int i = m;
	int j = middle + 1;
	int k = m;
	
	//작은 순서대로 배열에 삽입
	 while(i <= middle && j <= n){
	 	if(a[i] <= a[j]){
	 		sorted[k] = a[i];
	 		i++;
		 } else {
		 	sorted[k] = a[j];
		 	j++;
		 }
		 k++;
	 }
	 
	 // 남은 데이터 삽입
	 if(i > middle){
	 	for(int t = j; t <= n; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 } else {
	 	for(int t = i; t <= middle; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 }
	 
	 // 정렬된거를 삽입
	 for(int t = m; t <= n; t++){
	 	a[t] = sorted[t];
	 } 
} 

void mergeSort(int a[] , int m , int n){
	// 크기가 1보다 큰경우
	if( m < n ){
		int middle = (m + n) / 2;
		mergeSort(a ,m , middle);
		mergeSort(a , middle + 1 , n);
		merge(a , m,middle,n);
	}
}

int main(void){
	int array[number] = {7,6,5,8,3,5,9,1};
	mergeSort(array , 0,number - 1);
	for(int i = 0; i < number; i++){
		printf("%d " , sorted[i]);
	}
}
