/*������������A��B�������A��B�����������Լ���Щ���ĺ͡�

�����ʽ��
������һ���и���2������A��B������?100��A��B��100������Կո�ָ���

�����ʽ��
����˳�������A��B������������ÿ5������ռһ�У�ÿ������ռ5���ַ���ȣ����Ҷ��롣�����һ���а�Sum = X�ĸ�ʽ���ȫ�����ֵĺ�X��

����������
-3 8

      
    
���������
   -3   -2   -1    0    1
    2    3    4    5    6
    7    8
Sum = 30*/

#include<stdio.h>
int main(){
	int A,B;
	int i=0,sum=0,cot=0;
	scanf("%d %d",&A,&B);
	/*while(A<=B){
		sum+=A;
		printf("%5d",A);
		i++;
		if(i%5==0&&i!=B) printf("\n");
		A++;
	}
	*/
	for(i=A;i<=B;i++){
        sum+=i;
    	printf("%5d",i);
        cot++;
        if(cot%5==0&&cot!=B) printf("\n");
	}
	printf("\n");
    printf("Sum = %d",sum);
	return 0;
}
#include<stdio.h>
int main()
{
    int a,b,i,cot=0,sum=0;
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++){
    	printf("%5d",i);
        cot++;
        if(cot%5==0&&i!=b) printf("\n");
    }
       printf("\n");
   for(i=a;i<=b;i++)
        sum+=i;

    printf("Sum = %d",sum);
   return 0;

}
