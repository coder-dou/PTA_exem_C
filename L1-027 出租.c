#include<stdio.h>
int main(){
	char str[11];
	int arr[10]={0},arr2[11]={0},arr3[10]={0},i,j,temp;
	scanf("%s",str);
	for(i=0;i<11;i++)
	{
		arr[str[i]-'0']++;
	}
	j=0;
	for(i=9;i>=0;i--){
		if(arr[i]>0){
			 arr3[j]=i;
			 j++;
		}
	}
	temp = j;
	for(i=0;i<11;i++){
		for(j=0;j<temp;j++){
			if(str[i]-'0'==arr3[j]){
				arr2[i]=j;
			}
		}
	}
	printf("int[] arr = new int[]{");
	for(j=0;j<temp;j++){
		printf("%d",arr3[j]);
		if(j<temp-1) printf(",");
	}
	printf("};\n");
	
	printf("int[] index = new int[]{");
	for(i=0;i<11;i++){
		printf("%d",arr2[i]);
		if(i<10) printf(",");
	}
	printf("};");
		
	return 0;	
}

//int[] arr = new int[]{8,3,2,1,0};
//int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};
