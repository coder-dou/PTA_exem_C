#include<stdio.h>
int boolean(int y,int n){
	int arr[10]={0},count=0,temp;
	if(y<1000) {
		arr[0]++;
		count++;
	}
	while(y){
		temp = y%10;
		if(!arr[temp]){
			arr[temp]++;
			count++;
		}
		y/=10;
	}
	if(count==n) return 1;
	else return 0;
}
int main()
{
	int y,n;
	scanf("%d %d",&y,&n);
	int temp;
	temp=y;
	while(!boolean(temp,n)){
		temp++;
	}
	printf("%d %04d",temp-y,temp);
	return 0;
}
