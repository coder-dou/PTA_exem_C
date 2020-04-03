#include<stdio.h>
int main()
{
	int one=0,two=0,oneMax,twoMax,N,flag=0;
	//先输入甲乙的酒量
	scanf("%d %d",&oneMax,&twoMax);
	scanf("%d",&N);
	int i,a1,a2,b1,b2;
	for(i=0;i<N;i++){
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		if(flag==0){
			if(a1+b1==a2&&a1+b1!=b2){
				one++;
				//printf("A--%d\n",one);
				if(one>oneMax){
					flag=1;
				}
			}
			if(a1+b1==b2&&a1+b1!=a2){
				two++;
				//printf("B--%d\n",two);
				if(two>twoMax){
					flag=2;
				}
			}
			
		}
	}
	//printf("A---%d\n B---%d\n",one,two);
	if(flag==1){
		printf("A\n");
		printf("%d",two);
	}else if(flag==2){
		printf("B\n");
		printf("%d",one);
	}
	
	return 0;
}///居然题目看错了... 
/*
1 1
6
8 10 9 12
5 10 5 10
3 8 5 12
12 18 1 13
4 16 12 15
15 1 1 16
*/ 
