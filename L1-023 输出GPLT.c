#include<stdio.h>
int main()
{
	int arr[4]={0};
	char c;
	
	do{
		scanf("%c",&c);
		if(c=='\n') break;
		if(c=='g'||c=='G'){
			arr[0]++;
		}
		if(c=='p'||c=='P'){
			arr[1]++;
		}
		if(c=='l'||c=='L'){
			arr[2]++;
		}
		if(c=='t'||c=='T'){
			arr[3]++;
		}
	}while(1);
	
	while(1){
		if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0){
			break;
		}
		if(arr[0]>0){
			printf("G");
			arr[0]--;
		}
		if(arr[1]>0){
			printf("P");
			arr[1]--;
		}
		if(arr[2]>0){
			printf("L");
			arr[2]--;
		}
		if(arr[3]>0){
			printf("T");
			arr[3]--;
		}
	}
	return 0;
} 
