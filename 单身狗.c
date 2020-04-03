#include<stdio.h>
#define MAXSIZE 100001
int main(){
	int arr[MAXSIZE][2]={0},a[MAXSIZE]={0};
	int N,i,x,y,max=0,count=0;
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		arr[x][1]=y;
		arr[y][1]=x;
	}
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&x);
		if(x>max) max = x;
		if(arr[x][1] == 0&&arr[0][1] != x)
		{
			arr[x][0] = 2;
			continue;
		}
		
		if(arr[x][1] != x)
		{
			arr[x][0] = 1;
			continue;
		}
	}
	
	for(i=0;i<=max;i++)
	{
		if(arr[i][0] == 2)
		{
			a[count] = i;
			count++;
			continue;
		}
		if(arr[i][0]== 1)
		{
			if(arr[arr[i][1]][0] == 0)
			{
				a[count] = i;
				count++;
				continue;
			}
		}
	}
	
	printf("%d\n",count);
	
	for(i=0;i<count;i++)
	{
		if(i != 0) printf(" "); 
		printf("%05d",a[i]);
	}
	
	return 0;
} 
