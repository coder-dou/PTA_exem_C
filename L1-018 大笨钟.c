#include<stdio.h>
int main(){
	///  时间区间分别   小时00>09  10>11  12  13>24 
	///					分钟00>09  10>59
	int a,b,i;//a>小时  b>分钟  i>计数 
	scanf("%d:%d",&a,&b);
	if(a>=12){//时间大于等于12意味着可能需要敲钟 
		for(i=0;i<(a-12);i++){//敲钟次数 根据小时判断 
			printf("Dang");
		}
		if(b>0){//超出小时的分钟数补上一次敲钟 
			printf("Dang");
		}
	}else{
		if(a<10){//时间小于10 由于时间是个位数不会补齐十位数上的0 
			if(b<10){//分钟同上 
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
///判断条件 尽量检查不要将赋值 = 代替 比较== 写入 
