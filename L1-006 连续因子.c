#include<stdio.h>
#include<math.h>
int main()
{
	int N;
	scanf("%d",&N);
	int i,j,prd,len=0,start=0;
	for(i=2;i<N/2;i++)
	{
		prd=1;
		for(j=i;prd*j<=N;j++)
		{
			prd*=j;
			if(N%prd==0&&j-i+1>len)
			{
				start = i;
				len = j-i+1;
			}
		}
	}
	if(start==0){
		start=N;
		len=1;
	}
	
	printf("%d\n",len);
	printf("%d",start);
	for(i=start+1;i<start+len;i++){
		printf("*%d",i);
	}
	return 0;
}
///1¡¢ÏÈÇó
