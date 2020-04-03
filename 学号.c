#include<stdio.h>
#define MAXSIZE 100
typedef struct{
	int len;
	int elem[MAXSIZE];
} SqList; 

typedef int ElemType;

//创建一个顺序表 
void creatSqlist(SqList *L)
{
	int i;
	printf("请输入线性表元素个数：\n");
	scanf("%d",&L->len);    //访问成员1.L->len  2.(*l).len 
	printf("请输入%d个元素：\n",L->len);
	for(i=1;i<=(*L).len;i++)
	{
		scanf("%d",&L->elem[i]);
	}
}
//在顺序表中增加一个元素
void Sqins(SqList *L,int i,ElemType x)
{
	//判断位置合法性 
	int j;
	if(i<1||i>L->len)
	{
		printf("位置错误\n");
		return;
	}
	if(L->len==MAXSIZE)
	{
		printf("没有空间\n");
		return;
	}
	//腾出第i个元素的位置（需后移，从第i个元素到L->len） 
	for(j=L->len;j>=i;j--)
	{
		L->elem[j+1]=L->elem[j];  //移位 
	}
	L->elem[i]=x;  //插入元素x（插入到第i个元素的位置 
	L->len++;   //表长加1 
} 

//在顺序表中删除一个元素
void Sqdel(SqList *L,int i)
{
	int j;
	//删除第i个元素的位置（需前移第i+1个元素到L->len）
	for(j=i+1;j<=L->len;j++)
	{
		L->elem[j-1]=L->elem[j];
	} 
	L->len--;   //表长减1 
} 

//顺序表的查找：顺序查找
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
	int i,n,m;//n 新增或删除的元素位置， m新增参数 
	creatSqlist(&l);
	
	printf("\n输出顺序表剩余元素");
	for(i=1;i<=l.len;i++){
		printf("%d ",l.elem[i]);
	}
	
	printf("\n输入删除的元素位置:");
	scanf("%d",&n);
	Sqdel(&l,n);
	
	printf("\n输出顺序表剩余元素");
	for(i=1;i<=l.len;i++){
		printf("%d ",l.elem[i]);
	}
	
	printf("\n输入新增元素位置:");
	scanf("%d",&n);
	printf("\n输入新增元素值:");
	scanf("%d",&m);
	Sqins(&l,n,m);
	
	printf("\n输出顺序表剩余元素");
	for(i=1;i<=l.len;i++){
		printf("%d ",l.elem[i]);
	}
	
	printf("\n查询顺序表的值:");
	scanf("%d",&n);
	printf("%d",Search_Seq1(l,n));
	
	return 0;
}


