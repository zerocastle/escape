#include <stdio.h>
/*
	�� ���� ���� , ���� , ���� �� �������� �˰����� ���� n * n�� ���� �ð��� �����°�
	�˼��� �ִ� .
	������ �������� 
	o(N * logN) �� �ð��� ������ �̰� �󸶳� �����ð��̳ĸ� 
	logN�� ���� ����� ���� ���̴� 
	2 ^ 20 = 1,000,000 �϶� log2N �� ���� �Ǹ� 20�� �����°��� �˼��� �ִ� .
	�׷��⿡ 1,000,000 ���� �������� 1,000,000 * 20 �� �Ǵ°��̴�.  
*/
/*
 description )
 => �ϳ��� ū ������ �ΰ��� ���� ������ �����ϴ� ������ ������ ���� �ϴ� �˰����̴�. 
*/
/*
 explain)
 => �ϳ��� �ǹ�(���ذ���) ���� ���� ���� ���������� �̵� ù��°�� ū���� ���� �������� �̵� �������� ����
  �ѵ� ���� ������ ������ 
*/
int number = 10;
int array[10] = {
	3,7,8,1,5,9,6,10,2,4
}
;

void quickSort(int *data , int start , int end) {
	if(start >= end) {
		// ���Ұ� 1���� ���
		//PrintFunction(); 
		return ;
	}
	int pivot = start;
	// �ǹ� ���� ù��° ���� 
	int i = start + 1;
	// ù��° ��� ����
	int j = end;
	// ������ �������
	int temp;
	while (i <= j) {
		// ������ ������ �ݺ� 
		while(data[i] <= data[pivot]) {
			// Ű�� ���� ū ���� ���������� 
			i++;
		}
		while(data[j] >= data[pivot] && j > start) {
			// Ű�� ���� �������� ���������� 
			j --;
		}
		if( i > j) { // ����  ������ ���� 
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp; 
		}else{
			// �������� �ʾҴٸ� ���� ���� ū���� �ٲ��ָ� �ȴ�
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
