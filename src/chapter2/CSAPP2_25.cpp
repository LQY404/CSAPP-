#include<stdio.h>

float sum_elements(float a[], unsigned length){
	
	int i;
	float result = 0;
	for(i = 0;i <= length-1;i++){
		result += a[i];
	}
	return result;
}

int main(){
	float a[] = {1.1,2,4};
	sum_elements(a,0);
	
	return 0;
}
