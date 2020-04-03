#include<stdio.h>
int main()
{
	int arr[50][2]={0};//二维数组 一维：50个学生  二维：0学生性别；1学生分组情况 0/1  下标与姓名字符串相同  初始值全设为0 
	char str[50][10];//存放每个学生的姓名 
	int N,i,j,flag;//N个学生 ij控制循环，flag标记当前分组的学生性别 
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d %s",&arr[i][0],str[i]);//输入学生的性别，姓名 
	}
	
	//数组是根据学生成绩降序保存 
	for(i=0;i<N/2;i++){
		for(j=0;j<N;j++){//循环从前向后 
			if(arr[j][1]==0){//判断该学生是否分组 
				printf("%s ",str[j]); 
				arr[j][1]=1;//将该学生标记为已分组 
				if(arr[j][0]==1) flag=0;
				else flag=1;//标记另一名学生的分组性别 
				break;//一旦输出直接跳出循环 
			}
		}
		for(j=N-1;j>=0;j--){//循环从数组尾部向前 
			if(arr[j][1]==0&&arr[j][0]==flag){//寻找未分组学生且性别为标记性别 
				printf("%s",str[j]);
				arr[j][1]=1;
				break;//一旦输出直接跳出循环 
			}
		}
		if(i!=N/2) printf("\n");
	}
	return 0; 
} 















8
0 Amy
1 Tom
1 Bill
0 Cindy
0 Maya
1 John
1 Jack
0 Linda




