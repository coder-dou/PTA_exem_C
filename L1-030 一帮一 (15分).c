#include<stdio.h>
int main()
{
	int arr[50][2]={0};//��ά���� һά��50��ѧ��  ��ά��0ѧ���Ա�1ѧ��������� 0/1  �±��������ַ�����ͬ  ��ʼֵȫ��Ϊ0 
	char str[50][10];//���ÿ��ѧ�������� 
	int N,i,j,flag;//N��ѧ�� ij����ѭ����flag��ǵ�ǰ�����ѧ���Ա� 
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d %s",&arr[i][0],str[i]);//����ѧ�����Ա����� 
	}
	
	//�����Ǹ���ѧ���ɼ����򱣴� 
	for(i=0;i<N/2;i++){
		for(j=0;j<N;j++){//ѭ����ǰ��� 
			if(arr[j][1]==0){//�жϸ�ѧ���Ƿ���� 
				printf("%s ",str[j]); 
				arr[j][1]=1;//����ѧ�����Ϊ�ѷ��� 
				if(arr[j][0]==1) flag=0;
				else flag=1;//�����һ��ѧ���ķ����Ա� 
				break;//һ�����ֱ������ѭ�� 
			}
		}
		for(j=N-1;j>=0;j--){//ѭ��������β����ǰ 
			if(arr[j][1]==0&&arr[j][0]==flag){//Ѱ��δ����ѧ�����Ա�Ϊ����Ա� 
				printf("%s",str[j]);
				arr[j][1]=1;
				break;//һ�����ֱ������ѭ�� 
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




