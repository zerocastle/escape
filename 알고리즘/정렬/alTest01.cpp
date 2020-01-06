#include <stdio.h>

int array[1001];

int main(void){
	
	int number , i ,j , min , index , temp;
	scanf("%d",&number);
	
	for(i = 0;  i < number; i++){
		scanf("%d",&array[i]);
	}
	
	for(i = 0; i < number - 1; i++){
		j = i;
		while(array[j] > array[j + 1]){
			temp = array[j + 1];
			array[j + 1] = array[j];
			array[j] = temp;  
			j--;
		}
	}
	
	for(i = 0; i < number; i ++){
		printf("%d \n",array[i]);
	}
	
	return 0;
	
}
