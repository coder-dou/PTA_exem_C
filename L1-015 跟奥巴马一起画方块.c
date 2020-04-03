#include<stdio.h>
int main()
{
	int N,i,j;
	char c;
	scanf("%d %c",&N,&c);
	if(N%2==0)
	{
		for(i=0;i<N/2;i++)
		{
			for(j=0;j<N;j++)
			{
				printf("%c",c);
			}
			if(i+1==N/2) return 0;
			printf("\n");
		}
	}//当N为偶数时间直接输出即可 
	else
	{//突然想到任何奇数/2都会有0.5 四舍五入 只会五入 傻了傻了 
		for(i=0;i<(N/2+1);i++)
		{
			for(j=0;j<N;j++)
			{
				printf("%c",c);
			}
			if(i==(N/2)) return 0;
			printf("\n");
		}	
	} 
	return 0;
} 
