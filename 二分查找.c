#include <stdio.h>
#define MAXSIZE 20000 
typedef struct linked{
	int value;
	struct linked *link;
}LinkList; 


typedef struct{ 
	int len;
	int elem[MAXSIZE];
}SqList; 
typedef int ElemType; 

//����һ��˳��� 
void creatSqlist(SqList *L)
{
	int i; 
	//printf("������%d��Ԫ�أ�\n",L->len);
	for(i=1;i<=(*L).len;i++)
	{
		scanf("%d",&L->elem[i]);
	}
}

//���ֲ���
int Search_Bin(SqList L,int key)
{
	int mid;
	int low=1; int high=L.len; //����ĳ�ֵ����ʼ���� 
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==L.elem[mid])
			return mid; //�ҵ�����Ԫ��
		else if(key<L.elem[mid]) 
			high = mid-1;
		else low=mid+1;
	}
	return 0;
} 

//����
int main()
{
	SqList l; 
	int i,m; 
	//printf("���������Ա�Ԫ�ظ���n��Ҫ��ѯ���ĸ���m��\n");
	scanf("%d %d",&l.len,&m);
	creatSqlist(&l);
	
	int a[MAXSIZE]; 
	//printf("������Ҫ���ҵ�m��Ԫ�أ�\n",m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=m;i++)
	{
		//printf("%d��λ����%d ",a[i],Search_Bin(l,a[i])-1);
		if(i==m) printf("%d",Search_Bin(l,a[i])-1);
		else printf("%d ",Search_Bin(l,a[i])-1);
	}
	return 0;
}








