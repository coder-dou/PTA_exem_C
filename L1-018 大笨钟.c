#include<stdio.h>
int main(){
	///  ʱ������ֱ�   Сʱ00>09  10>11  12  13>24 
	///					����00>09  10>59
	int a,b,i;//a>Сʱ  b>����  i>���� 
	scanf("%d:%d",&a,&b);
	if(a>=12){//ʱ����ڵ���12��ζ�ſ�����Ҫ���� 
		for(i=0;i<(a-12);i++){//���Ӵ��� ����Сʱ�ж� 
			printf("Dang");
		}
		if(b>0){//����Сʱ�ķ���������һ������ 
			printf("Dang");
		}
	}else{
		if(a<10){//ʱ��С��10 ����ʱ���Ǹ�λ�����Ჹ��ʮλ���ϵ�0 
			if(b<10){//����ͬ�� 
				printf("Only 0%d:0%d.  Too early to Dang.",a,b);
			}else{
				printf("Only 0%d:%d.  Too early to Dang.",a,b);
			}
		}else{
			if(b<10){
				printf("Only %d:0%d.  Too early to Dang.",a,b);
			}else{
				printf("Only %d:%d.  Too early to Dang.",a,b);
			}
		}
	}
	if(a==12&&b==0){
		printf("Only %d:0%d.  Too early to Dang.",a,b);
	} 
	return 0;	
} 
///�ж����� ������鲻Ҫ����ֵ = ���� �Ƚ�== д�� 
