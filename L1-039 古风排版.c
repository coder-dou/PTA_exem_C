#include<stdio.h>
int main()
{
	int n,length=0,i,j,k=0,width;
	char str[1001],c,carr[1001][101];
	
	scanf("%d",&n);
	getchar();
	do{
		scanf("%c",&c);
		if(c=='\n'){
			str[length]='\0';
			break;
		}
		str[length]=c;
		length++;
	}while(1);
	length-=1;
	width = length/n;
	if(length%n) width++;
	
	for(i=0;i<n;i++){
		for(j=0;j<=width;j++){
			if(n*(n-j)+k>length)
			{
				carr[i][j]=' ';
				continue;
			}
			carr[i][j]=str[n*(n-j)+k];
		}
		k++;
	}
	for(i=0;i<n;i++){
		j=0;
		while(1){
			if(carr[i][j]=='\n'||j>=width) break;
			printf("%c",carr[i][j]);
			j++;
		}
		
		//printf("%s",carr[i]);
		if(i+1<n) printf("\n");
	}
	return 0;
}
//
//This is a test case

