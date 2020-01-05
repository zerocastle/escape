#include <stdio.h>
/*
	퀵 정렬 선택 , 버블 , 삽입 이 세가지의 알고리즘을 보면 n * n의 정렬 시간을 가지는걸
	알수가 있다 .
	하지만 퀵정렬은 
	o(N * logN) 의 시간을 가진다 이게 얼마나 빠른시간이냐면 
	logN은 거의 상수와 같은 것이다 
	2 ^ 20 = 1,000,000 일때 log2N 을 보게 되면 20이 나오는것을 알수가 있다 .
	그렇기에 1,000,000 값이 들어왔을대 1,000,000 * 20 이 되는것이다.  
*/
/*
 description )
 => 하나의 큰 문제를 두개의 작은 문제로 분할하는 식으로 빠르게 정렬 하는 알고리즘이다. 
*/
/*
 explain)
 => 하나의 피벗(기준값을) 설정 기준 값에 오른쪽으로 이동 첫번째로 큰값을 선택 왼쪽으로 이동 작은값을 선택
  한뒤 서로 교차를 시켜줌 
*/
int number = 10;
int array[10] = {
	3,7,8,1,5,9,6,10,2,4
}
;

void quickSort(int *data , int start , int end) {
	if(start >= end) {
		// 원소가 1개의 경우
		//PrintFunction(); 
		return ;
	}
	int pivot = start;
	// 피벗 값은 첫번째 원소 
	int i = start + 1;
	// 첫번째 출발 지점
	int j = end;
	// 마지막 출발지점
	int temp;
	while (i <= j) {
		// 엇갈릴 때까지 반복 
		while(data[i] <= data[pivot]) {
			// 키값 보다 큰 값을 만날때까지 
			i++;
		}
		while(data[j] >= data[pivot] && j > start) {
			// 키값 보다 작은값을 만날때까지 
			j --;
		}
		if( i > j) { // 현재  엇갈린 상태 
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp; 
		}else{
			// 엇갈리지 않았다면 작은 값과 큰값을 바꿔주면 된다
			temp = data[j];
			data[j] = data[i];
			data[i] = temp; 
			
		}
	}
	
	quickSort(data , start , j - 1);
	quickSort(data , j + 1 , end);
}



int main(void) {
	quickSort(array , 0 , number - 1);
	for(int i = 0; i < number; i++){
		printf("%d ",array[i]); 
	}
	return 0;
}
