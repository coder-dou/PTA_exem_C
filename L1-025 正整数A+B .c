#include<stdio.h>
int main()
{
	int i=0,j=0,flag=1,x=0,y=0;
	char c;
	do{
		scanf("%c",&c);
		if(c == '\n') break;
		if(c!=' '&&c>='0'&&c<='9'){
			if(flag==1){
				i = i*10 + (c - '0');
			}else if(flag==2){
				j = j*10 + (c - '0');
			}
		} else if(c==' '&&flag !=2){
			flag = 2;
			continue;
		} else {
			if(flag == 1){
				x = 1;
			} else if(flag == 2){
				y = 1;
			} else if(flag == 3){
				break;
			}
		}
	}while(1);
	if(x == 1){
		if(y==1){
			printf("? + ? = ?");
		}else{
			printf("? + %d = ?",j);
		}
	}else{
		if(y==1){
			printf("%d + ? = ?",i);
		}else{
			printf("%d + %d = %d",i,j,i+j);
		}
	}
	return 0;
}
///先做个求素数 
/*#include<stdio.h>
#include<math.h> 
int hh(int x)
{
 	int i;
 	if(x==1)
 	{
  		return 0;
 	} 
 	for(i=2;i<sqrt(x);i++)
 	{
  		if(x%i==0)
  		{
   			return 0;
  		}
 	}
 	return 1;
}
int main()
{
	int n,a,i;
	int s[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(hh(s[i])==1)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
		if(i<n-1) printf("\n");
	}
 	return 0;
}
/// a/b 

#include<stdio.h>
int main()
{
 int a,b;
 scanf("%d %d",&a,&b);
 printf("%d/",a);
 if(b>=0)
  printf("%d=",b);
 else if(b<0)
        printf("(%d)=",b);
 if(b==0)
        printf("Error");
    else
        printf("%.2f",(a*1.0)/b);
    return 0;
}*/




