#include<stdio.h>
int main(){
	//N�������
	int N;
	scanf("%d",&N);
	
	int a,b;//����Ĳ��� 
	int sumInt=0,fractop=0,fracdown=1;//sumInt �������֣� fractop����-���� ��fracdown����-��ĸ(����Ϊ0)
	
	int i,j,temp;//��������ļ��� 
	for(i=0;i<N;i++){
		scanf("%d/%d",&a,&b);
		if(a == 0||b == 0) break;
		///������� 
		if(b!=fracdown){ 
			a*=fracdown;
			fractop*=b;
			fracdown*=b;
			fractop+=a;
			
			for(j = fractop;j>1;j--){ 
				if(fractop%j==0&&fracdown%j==0) break;
			}
			if(j>=1){//������j���ܻ���Ϊ  fractop����Ϊ0 
				fractop /= j;
				fracdown /= j;
			}
		}else{
			fractop += a;
		}
	}
	
	if(fractop==0&&sumInt==0){
		printf("0");
	} else{
		sumInt = fractop/fracdown;
		fractop -= fracdown*sumInt;
		
		//������������ĸ���������������
		if(sumInt == 0)
		{
			 printf("%d/%d",fractop,fracdown);
		} 
		else//����ʣ�µķ������֣�������Ҫ������ӷ�ĸ�����Լ��//������շת����� 
		{
			if(fractop == 0)
			{
				printf("%d",sumInt);	
			} 
			else if(fractop > 0) 
			{
				printf("%d %d/%d",sumInt,fractop,fracdown);
			}
			else if(fractop < 0) 
			{
				printf("%d %d/%d",sumInt,-fractop,fracdown);
			}
		}
	}
	return 0;
} 
/*
///������� 
5
2/5 4/15 1/30 -2/60 8/3

2
4/3 2/3

3
1/3 -1/6 1/8

//Ŀǰ�ύ����6������ ͨ��4�� һ���𰸴��� һ���������>ָ������Ϊ0 
//��Ȼ��һ������ һ��������� //����������Ų� 
*/

