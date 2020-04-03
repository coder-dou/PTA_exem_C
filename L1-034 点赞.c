#include<stdio.h>
int main()
{
	int n,k,t,i,j,arr[1001]={0};
	int max=0,temp;
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%d",&k);
		for(j=0;j<k;j++){
			scanf("%d",&t);
			if(t>max) max =t;
			arr[t]++;
		}
	}
	temp=max;
	for(i=max-1;i>0;i--){
		if(arr[i]>arr[temp]){
			temp=i;
		}
	}
	printf("%d %d",temp,arr[temp]);
	return 0; 
}
