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

//创建一个顺序表 
void creatSqlist(SqList *L)
{
	int i; 
	//printf("请输入%d个元素：\n",L->len);
	for(i=1;i<=(*L).len;i++)
	{
		scanf("%d",&L->elem[i]);
	}
}

//二分查找
int Search_Bin(SqList L,int key)
{
	int mid;
	int low=1; int high=L.len; //区间的初值（初始化） 
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==L.elem[mid])
			return mid; //找到待查元素
		else if(key<L.elem[mid]) 
			high = mid-1;
		else low=mid+1;
	}
	return 0;
} 

//调用
int main()
{
	SqList l; 
	int i,m; 
	//printf("请输入线性表元素个数n和要查询数的个数m：\n");
	scanf("%d %d",&l.len,&m);
	creatSqlist(&l);
	
	int a[MAXSIZE]; 
	//printf("请输入要查找的m个元素：\n",m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=m;i++)
	{
		//printf("%d的位置在%d ",a[i],Search_Bin(l,a[i])-1);
		if(i==m) printf("%d",Search_Bin(l,a[i])-1);
		else printf("%d ",Search_Bin(l,a[i])-1);
	}
	return 0;
}








