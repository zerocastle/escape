#include <stdio.h>

/*
���� ���� ������������ �����ϱ� 
*/

int main(void){
	int i , j , min , index ,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};

	for(i = 0; i < 10; i++){
		min = 999; // �������� �־�� �ϱ⿡ ������ �ִ� ���ں��� ũ���Ѵ�. 
		for(j = i; j < 10 ;j++){
			if(min > array[j]){
				min = array[j];
				index = j; // Ž���߿��� ���� min ������ ���� ���� ������ ��ġ����� 
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
