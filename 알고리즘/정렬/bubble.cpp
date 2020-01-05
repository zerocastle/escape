#include <stdio.h>

int main(void){
	/*
	 버블 정렬 은 뒤에서 부터 앞으로 순서대로 비교하는 특성 
	 
	 가장 비효율 적인 정렬 기법이다 선택 정렬이 비효율이지 않냐 라고 물었을때 , 선택 정렬이
	 
	 다른 정렬에 비해 빠르게 작동하는 때가 있다 하지만 버블정렬은 앞 뒤를 비교하며 계속해서 
	 
	 스왑핑을 해주어야 하기에 속도가 더 효율적이지 못하다. 
	*/
	int i , j , temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 9 - i; j++){
			// 오름 차순이기에  
			if(array[j] > array[j + 1] ){
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
	
	for( i = 0; i < 10 ; i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}
