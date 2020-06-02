#include<stdio.h>

int tadd_ok(int x, int y){
	int s = x + y;
	if(x>0 && y>0 && s<=0) return 0;
	if(x<0 && y<0 && s>=0) return 0;
	
	return 1;
}

int main(){
	
	
	return 0;
}
