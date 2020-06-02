#include<stdio.h>
#include<stdlib.h>
typedef unsigned char * bytePointer;

//注意是小端方式 

void A(bytePointer p, size_t len){  //len指的是多少个字节 
	
	size_t i;
    //小端方式 
	p[0] = p[0] & 0xff;
	for(i = 1;i < len;i++){
		p[i] = p[i] & 0x00;
	} 
	
}
void B(bytePointer p, size_t len){
	size_t i;
	for(i = 0;i < len;i++){
		p[i] = ~p[i];
	} 
	p[0] = ~p[0];
}
void C(bytePointer p, size_t len){
	p[0] = p[0] | 0xff;
	 
}


int main(){
	int val = 0x87654321;
	B((bytePointer)&val, sizeof(int));
	long dval = 0x12345678;
	A((bytePointer)&dval, sizeof(long));
	printf("%x ",val);
	
	return 0;
	
}
