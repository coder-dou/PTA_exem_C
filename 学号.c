#include<stdio.h>
#define MAXSIZE 100
typedef struct{
	int len;
	int elem[MAXSIZE];
} SqList; 

typedef int ElemType;

//����һ��˳��� 
void creatSqlist(SqList *L)
{
	int i;
	printf("���������Ա�Ԫ�ظ�����\n");
	scanf("%d",&L->len);    //���ʳ�Ա1.L->len  2.(*l).len 
	printf("������%d��Ԫ�أ�\n",L->len);
	for(i=1;i<=(*L).len;i++)
	{
		scanf("%d",&L->elem[i]);
	}
}
//��˳���������һ��Ԫ��
void Sqins(SqList *L,int i,ElemType x)
{
	//�ж�λ�úϷ��� 
	int j;
	if(i<1||i>L->len)
	{
		printf("λ�ô���\n");
		return;
	}
	if(L->len==MAXSIZE)
	{
		printf("û�пռ�\n");
		return;
	}
	//�ڳ���i��Ԫ�ص�λ�ã�����ƣ��ӵ�i��Ԫ�ص�L->len�� 
	for(j=L->len;j>=i;j--)
	{
		L->elem[j+1]=L->elem[j];  //��λ 
	}
	L->elem[i]=x;  //����Ԫ��x�����뵽��i��Ԫ�ص�λ�� 
	L->len++;   //����1 
} 

//��˳�����ɾ��һ��Ԫ��
void Sqdel(SqList *L,int i)
{
	int j;
	//ɾ����i��Ԫ�ص�λ�ã���ǰ�Ƶ�i+1��Ԫ�ص�L->len��
	for(j=i+1;j<=L->len;j++)
	{
		L->elem[j-1]=L->elem[j];
	} 
	L->len--;   //����1 
} 

//˳���Ĳ��ң�˳�����
int Search_Seq1(SqList L,int key)
{
	int i;
	for(i=1;i<=L.len;i++)
	{
		if(L.elem[i]==key)  return i;
	}
	return 0;
}

int main(){
	SqList l;
	int i,n,m;//n ������ɾ����Ԫ��λ�ã� m�������� 
	creatSqlist(&l);
	
	printf("\n���˳���ʣ��Ԫ��");
	for(i=1;i<=l.len;i++){
		printf("%d ",l.elem[i]);
	}
	
	printf("\n����ɾ����Ԫ��λ��:");
	scanf("%d",&n);
	Sqdel(&l,n);
	
	printf("\n���˳���ʣ��Ԫ��");
	for(i=1;i<=l.len;i++){
		printf("%d ",l.elem[i]);
	}
	
	printf("\n��������Ԫ��λ��:");
	scanf("%d",&n);
	printf("\n��������Ԫ��ֵ:");
	scanf("%d",&m);
	Sqins(&l,n,m);
	
	printf("\n���˳���ʣ��Ԫ��");
	for(i=1;i<=l.len;i++){
		printf("%d ",l.elem[i]);
	}
	
	printf("\n��ѯ˳����ֵ:");
	scanf("%d",&n);
	printf("%d",Search_Seq1(l,n));
	
	return 0;
}


