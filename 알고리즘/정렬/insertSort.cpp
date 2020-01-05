#include <stdio.h>
/*
	삽입 정렬 
	
	버블 정렬 , 선택 정렬 과 같은 n^2 이지만 각 숫자를 적절한 위치에 삽입하는 방법으로 문제를 해결 
	그렇기에 3가지 정렬 알고리즘중에 가장 효과적인 정렬이라고 할수 있다. 
*/

int main(void){
	 int i , j , temp;
	 int array[10] = {1,10,5,8,7,6,4,3,2,9};
	 
	 for(i = 0; i < 9; i++){
	 	 // 해당 인덱스의 위치로 부터 앞에 있는 숫자를 비교하면서 선택 정렬을 하기 위해서  
	 	 //j = i;
	 	 for(j = i;array[j] > array[j + 1]; j--){
	 	 	 temp = array[j + 1];
	 	 	 array[j + 1] = array[j];
	 	 	 array[j] = temp;
		  }
	 	 
	 }
	 
	 for(i = 0; i < 9; i++){
	 	printf("%d ",array[i]);
	 }
	 
	
	return 0; 
}
