#include<stdio.h>
/*#define MAX 201
int main(){
	char url[MAX];
	char c;
	int i=0,flag=0,xieFlag=0;
	do{
		scanf("%c",&c);
		
		if(c=='\n'){
			flag++;
			break;
		} 
		
		if(flag==1){
			flag++;
			if(c=='/') continue;
		}
		
		if(c == ',' && flag==0){
			flag++;
			
			if(i==0){
				url[i]='/';
				i++;
				continue;
			}
			
			if(url[i-1]=='/'&&xieFlag==0){
				xieFlag=1;
				continue;
			}else{
				url[i]='/';
				i++;
				continue;
			}
		}
		
		url[i]=c;
		i++;
	}while(1);
	if(flag==1) url[i-1]='\0';
	else url[i]='\0';
	printf("%s",url);
	
    return 0;
}
*/
int main(){
	char str1[1000],str2[1000];
	char c;
	int i=0,j,k;
	int size1,size2,count=0;
//	gets(str1);
//	gets(str2);
	do{
		scanf("%c",&c);
		if(c==' '||c=='	'){
			continue;
		}
		if(c=='\n'){
			str1[i]='\0';
			break;
		}
		str1[i]=c;
		i++;
	}while(1);
	size1=i;
	i=0;
	do{
		scanf("%c",&c);
		if(c=='\n'){
			str2[i]='\0';
			break;
		}
		str2[i]=c;
		i++;
	}while(1);
	size2=i;
	
	for(i=0;i<size1-size2;i++){
		j=0;
		while(str1[i+j]==str2[j]&&j<size2){
			j++;
		}
		if(j==size2) count++;
	}
	printf("%d",count);
	return 0;
}










