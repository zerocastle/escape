#include <stdio.h>

/*
선택 정렬 오름차순으로 정렬하기 
*/

int main(void){
	int i , j , min , index ,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};

	for(i = 0; i < 10; i++){
		min = 999; // 작은수를 넣어야 하기에 가지고 있는 숫자보다 크게한다. 
		for(j = i; j < 10 ;j++){
			if(min > array[j]){
				min = array[j];
				index = j; // 탐색중에가 현제 min 값보다 가장 작은 숫자의 위치를기억 
			}
			 
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i = 0; i < 10; i ++){
		printf("%d",array[i]);
	}
	return 0;
}
