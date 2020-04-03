#include<stdio.h>
int main()
{
	char a[11],b[11],c;
	int count=1,i;

	do{
		scanf("%c",&c);
		if(c == '.') break;
		if(count==2)
		{
			if(c=='\n'){
				a[i]='\0';
				count++;
				continue;
			}
			a[i]=c;
			i++;
		}
		if(count==14)
		{
			if(c=='\n'){
				b[i]='\0';
				count++;
				continue;
			}
			b[i]=c;
			i++;
		}
		
		if(c == '\n'){
			count++;
			i=0;
		}
	}while(1);
	
	count-=1;
	if(count>=14){
		printf("%s and %s are inviting you to dinner...",a,b);
	}else if(count<14&&count>=2){
		printf("%s is the only one for you...",a);
	}else{
		printf("Momo... No one is for you ...");
	}
	
	return 0;
}
