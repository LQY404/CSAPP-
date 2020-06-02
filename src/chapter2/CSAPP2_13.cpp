#include<stdio.h>

typedef unsigned char byte;


int bis(int x, int m){
	int len = sizeof(int);
//	for(int i = 0;i < len)		
} 



int main(){
	int a = 3;
	byte * ba = (byte*)(&a);
	byte be = ba[0];
	printf("%d\n",be);
	ba = &be;
	
	return 0;
}
