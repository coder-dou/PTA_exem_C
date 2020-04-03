#include<stdio.h>
int main()
{
	char str[1001],c;
	int flag = 0,si=0,count = 0;
	
	
	do{
		scanf("%c",&c);
		if(c == '\n') break;
		if(c == '6'||count > 0)
		{
			if(c!='6'){
				if(count>9){
					str[si]='2';
					si++;
					str[si]='7';
					si++;
					count=0;
					break;
				}else{
					
				}
			}
			count++;
			
		}
		if(flag == 0&&c != '6')
		{
			str[si]=c;
			si++;
			
		}
		else if(c == '6')
		{
			
		}
		
	}while(1);
	
	printf("%s",str);
	return 0;
} 
