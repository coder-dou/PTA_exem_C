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
	}//��NΪż��ʱ��ֱ��������� 
	else
	{//ͻȻ�뵽�κ�����/2������0.5 �������� ֻ������ ɵ��ɵ�� 
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
