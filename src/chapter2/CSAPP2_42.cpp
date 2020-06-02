#include<stdio.h>

int div16(int x){
	int k = 4;
	int r1 = x>>k;
	int r2 = (x+(1<<k)-1)>>k;
	printf("r1 = %d ,r2 = %d\n",r1,r2);
	//如果x是正数，r1和r2应该一样；如果x是负数，r1和r2差1，且r1大。
	int dis = r2 - r1;    //因为规则是：对于需要舍入的情况，加上偏移量后再右移的结果，
//	会比不加偏移量右移后的结果值大一。 
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
