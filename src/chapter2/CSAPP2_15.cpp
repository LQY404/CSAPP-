#include<stdio.h>

typedef unsigned char * bytePointer;   //��Ϊc��������û���ṩbyte���ͣ���char����ռһ���ֽڣ�������char�����Զ���һ��byte 

bool equal(bytePointer p1, bytePointer p2, size_t len1, size_t len2){
	
	size_t len = len1 > len2 ? len2 : len1;
	
	size_t i;
	bool res = true;
	for(i = 0;i < len;i++){
		printf("%x %x\n",p1[i],p2[i]);
		res = res && !(p1[i] ^ p2[i]);   //���������ȥʵ�֡� 
	}
	int sign  = 2;
	len = len2;
	if(len1 > len2){
		len = len1;
		sign = 1;
	}
	while(i < len){
		printf("the length is difference between x and y\n");
		if(sign==1 && p1[i]!=0)
			return false;
		
		if(sign==2 && p2[i]!=0)
			return false;
		i++;
	}
	return res;
}

int main(){
	int x = 3;
	double y = 3;
	bytePointer p1 = (bytePointer)&x;
	bytePointer p2 = (bytePointer)&y;
	printf("%d %d\n",sizeof(x),sizeof(y));
	printf("%d",equal(p1, p2, sizeof(x), sizeof(y)));
	return 0;
}
