/*#define Max 10001 //�޶��ַ������� 
#include<stdio.h>
int main(){
	char A[Max];/// A 
	int C[128]={0},i=0; /// �����Ҫɾ�����ַ��� ��ascll��ֻ��128�� 
	char c;//����ȡ��B�ַ����е��ַ������Ա�ɾ��A�����е����� 
	gets(A);
	do{
		scanf("%c",&c);
		if(c =='\n') break;
		C[c]=1;
	} while(1);
	for(i=0;i<=Max;i++){//ѭ��������Ҫɾ�����ַ� 
		if(A[i]=='\0'||A[i]=='\n') break;
		if(C[A[i]] == 0) printf("%c",A[i]);//����Ϊ0����Ҫɾ�� ֱ����� 
	}
	return 0;
}
*/ 
////OK!! ��� �ж������в��ִ��� ��Ӧ���Ǳ߽�����δ���ǵ� 
///����ȫ��ͨ������������û����������������� 
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
