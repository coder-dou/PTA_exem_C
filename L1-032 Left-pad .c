#include<stdio.h>
int main()
{
	int N,i,count=0;
	char c,str[10001],pla;
	scanf("%d %c",&N,&c);
	getchar();
	do{
		scanf("%c",&pla);
		if(pla=='\n'){
			str[count]='\0';
			break;
		} 
		str[count]=pla;
		count++;
	}while(1);
	if(count>N){
		printf("cut");
	} 
	else if(count==N)
	{
		printf("%s",str);
	}
	else if(count<N)
	{
		for(i=0;i<(N-count);i++){
			printf("%c",c);
		}
		printf("%s",str);
	}
	return 0;
} 
//15 _
//I love GPLT

