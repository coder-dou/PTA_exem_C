/*����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ�������fu�֡�ʮ�����ֶ�Ӧ��ƴ�����£�
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu

�����ʽ��
������һ���и���һ���������磺1234��

��ʾ�������������������������

�����ʽ��
��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��

����������
-600

���������
fu liu ling ling*/
#include<stdio.h>
int main(){
	char Str[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char c;
	int flag = 0;
	
	do{
		scanf("%c",&c);
		if(flag!=0&&c!='\n'){
			printf(" ");
		}
		if(c==45){
			printf("fu");
		} else if(c>=48&&c<=57){
			printf("%s",Str[c-48]);
		} else{
			break;
		}
		flag++;
	}while(1);
	
	return 0;
}
