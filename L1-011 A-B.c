/*#define Max 10001 //限定字符串长度 
#include<stdio.h>
int main(){
	char A[Max];/// A 
	int C[128]={0},i=0; /// 标记需要删除的字符串 ，ascll码只有128个 
	char c;//用来取出B字符串中的字符用来对比删除A数组中的内容 
	gets(A);
	do{
		scanf("%c",&c);
		if(c =='\n') break;
		C[c]=1;
	} while(1);
	for(i=0;i<=Max;i++){//循环遍历需要删除的字符 
		if(A[i]=='\0'||A[i]=='\n') break;
		if(C[A[i]] == 0) printf("%c",A[i]);//参数为0则不需要删除 直接输出 
	}
	return 0;
}
*/ 
////OK!! 结果 判断用例中部分错误 。应该是边界问题未考虑到 
///用例全部通过。。。不过没整明白是哪里得问题 
#include<stdio.h>
int main()
{
	int a[3],i,j,t=0;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++){
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		} 
	}
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);
		if(i<2)
			printf("->");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000],b[10000];
	int i,z,j=0;
	gets(a); 
	gets(b);
	while(a[j]) 
	{
		int num=0;
		for(i=0;i<strlen(b);i++)
		{
			if(a[j]==b[i])
			{
				num=1; 
			}
		}
		if(num==0)
		{
			printf("%c",a[j]);
		}
		j++;
	}
	return 0;
}
