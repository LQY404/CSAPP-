#include<stdio.h>
#include<stdlib.h>

void inplace_swap(int *x, int *y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}
void array_swap(int n, int a[]){
	int start = 0;
	int end = n-1;
	while(start < end){
		inplace_swap(&a[start++], &a[end--]);
	}
}
int main(){
	int x = 2;
	int y = 3;
	inplace_swap(&x, &y);
	printf("%d %d\n",x,y);
	int a[] = {1,2,3,4};
	array_swap(4,a);
	for(int i = 0;i < 4;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
