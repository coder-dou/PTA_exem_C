#include<stdio.h>
int main(){
	//N个数求和
	int N;
	scanf("%d",&N);
	
	int a,b;//输入的参数 
	int sumInt=0,fractop=0,fracdown=1;//sumInt 整数部分， fractop分数-分子 ，fracdown分数-分母(不能为0)
	
	int i,j,temp;//输入参数的计数 
	for(i=0;i<N;i++){
		scanf("%d/%d",&a,&b);
		///进行求和 
		if(b!=fracdown){ 
			a*=fracdown;
			fractop*=b;
			fracdown*=b;
			fractop+=a;
			
			for(j=fractop;j>1;j--){
				if(fractop%j==0&&fracdown%j==0)
					break;
			}
			fractop /= j;
			fracdown /= j;
			
			
		}else{
			fractop+=a;
		}
		//求出整数部分 
		if(sumInt == 0){
			sumInt = fractop/fracdown;
			fractop -= fracdown*sumInt;
		}else{
			temp = fractop/fracdown;
			fractop -= fracdown*temp;
			sumInt+=temp;
		}
	}
	
	if(fractop==0&&sumInt ==0){
		printf("0");
	} else{
		//若分子整除分母，则输出整数部分
		if(sumInt == 0)
		{
			 printf("%d/%d",fractop,fracdown);
		} 
		else//化简剩下的分数部分；这里需要求出分子分母的最大公约数//暴力，辗转相除法 
		{
			if(fractop == 0)
			{
				printf("%d",sumInt);	
			} 
			else if(fractop > 0) 
			{
				printf("%d %d/%d",sumInt,fractop,fracdown);
				
			}
			else 
			{
				printf("%d %d/%d",sumInt,-fractop,fracdown);
			}
		}
	}
	return 0;
} 