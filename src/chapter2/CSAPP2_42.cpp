#include<stdio.h>

int div16(int x){
	int k = 4;
	int r1 = x>>k;
	int r2 = (x+(1<<k)-1)>>k;
	printf("r1 = %d ,r2 = %d\n",r1,r2);
	//���x��������r1��r2Ӧ��һ�������x�Ǹ�����r1��r2��1����r1��
	int dis = r2 - r1;    //��Ϊ�����ǣ�������Ҫ��������������ƫ�����������ƵĽ����
//	��Ȳ���ƫ�������ƺ�Ľ��ֵ��һ�� 
	printf("\ndis is :%d\n",dis);
	r1 += dis;
	return r1; 
}

int main(){
	int val = -140;
	printf("%d ",div16(val));
	printf("\nthe real val is :%d",val/16); 
	
	return 0;
}
