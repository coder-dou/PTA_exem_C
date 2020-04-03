/*输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：
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

输入格式：
输入在一行中给出一个整数，如：1234。

提示：整数包括负数、零和正数。

输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600

输出样例：
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
