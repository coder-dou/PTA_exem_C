#include<stdio.h>
int main()
{
	char arr[51],c,end;
	float fu=1.0,oushu=1.0;
	int count=0,twonumb=0;
	
	do{
		scanf("%c",&c);
		if(c=='\n') break;
		if(c=='-'){
			fu=1.5;
		} else {
			count++;
			if(c=='2'){
				twonumb++;
			}
			if((c-'0')%2==0){
				oushu=2.0;
			}else{
				oushu=1.0;	
			}
		}
	}while(1);
	//printf("twonumb %d  count %d fu %f oushu %f\n",twonumb,count,fu,oushu);
	printf("%.2f%%",twonumb*1.0/(count*1.0)*fu*oushu*100.0);
	return 0;
} //-13142223336

