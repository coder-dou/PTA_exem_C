/*#include<stdio.h>
int main()
{
	//ר��ͨ�����������о����ݷ��֣���ѵ�������߲���ѭ��һ����ʽ����Ů������ߣ���1.09 =���з�����ߣ���������ϣ���������߲����ǣ�֡�ӵ�������ǣ��������г�Ĳ�ȡ�
	//���������д������Ϊ����һλ�û�������/�������µ������ߡ�
	float farr[10],f;
	char c;
	int n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%c %f",&c,&f);
		getchar();
		switch(c){
			case 'M':
				farr[i]=f/1.09;
				continue;
			case 'F':
				farr[i] = f*1.09;
				continue;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%.2f",farr[i]);
		if(i<n-1) printf("\n");
	}	
	return 0;
} 

#include<stdio.h>
#include<string.h>
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  char a[10];
  int x,y;
  scanf("%s %d %d",a,&x,&y);
  if((x>20||x<15)||(y>70||y<50))
  {
   printf("%s\n",a);
  }
 }
 return 0;
}
#include<stdio.h>
int main()
{
 float kg,m,pang;
 scanf("%f %f",&kg,&m);
 pang = kg/(m*m);
 printf("%.1f\n",pang);
 if(pang>25) printf("PANG");
 else printf("Hai Xing");
 return 0;
}
#include<stdio.h>
int main()
{
 int n,i;
 int a[10],x[10],y[10];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %d %d",&a[i],&x[i],&y[i]);
  
 }
 for(i=0;i<n;i++)
 {
  if(a[i]==0)
  {
   if(x[i]>129) printf("ni li hai! ");
   else if(x[i]==129) printf("wan mei! ");
   else printf("duo chi yu! ");
   if(y[i]>25) printf("shao chi rou!");
   else if(y[i]==25) printf("wan mei!");
   else printf("duo chi rou!");
  }
  if(a[i]==1)
  {
   if(x[i]>130) printf("ni li hai! ");
   else if(x[i]==130) printf("wan mei! ");
   else printf("duo chi yu! ");
   if(y[i]>27) printf("shao chi rou!");
   else if(y[i]==27) printf("wan mei!");
   else printf("duo chi rou!");
  }
  if(i+1<n)printf("\n");
 }
 return 0;
}
*/












