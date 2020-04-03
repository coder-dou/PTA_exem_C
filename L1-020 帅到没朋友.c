/*#include<stdio.h>
int main(){
	int arr[10][10][10][10][10]={0};
	int N,K;//N行<=100 K列 <=1000
	int num,flag=0,g,s,b,q,w;//g 个位 s 十位  b 百位 q千位 w 万 
	scanf("%d",&N);
	int i,j,l;//控制循环 
	for(i=0;i<N;i++){
		scanf("%d",&K);
		for(j=0;j<K;j++){
			scanf("%d",&num);
			g = num%10;
			num /=10;
			s = num%10;
			num /=10;
			b = num%10;
			num /=10;
			q = num%10;
			w = num/10;
			arr[g][s][b][q][w]++;
		}
	} 
	scanf("%d",&K);
	for(i=0;i<K;i++){
		scanf("%d",&num);
		g = num%10;
		num /=10;
		s = num%10;
		num /=10;
		b = num%10;
		num /=10;
		q = num%10;
		w = num/10;
		if(arr[g][s][b][q][w]==0){
			arr[g][s][b][q][w]++;
			if(flag == 0)
				printf("%d%d%d%d%d ",g,s,b,q,w);
			else 
				printf(" %d%d%d%d%d ",g,s,b,q,w);
			flag = 1;
			
		} 
	}
	if(flag==0) printf("No one is handsome");
	
	return 0;
}*///利用一下这么大的内存 
#include<stdio.h>
int main(){
	int arr[100000]={0};
	int N,K;//N行<=100 K列 <=1000
	int num,flag=0;
	scanf("%d",&N);
	int i,j,l;//控制循环 
	for(i=0;i<N;i++){
		scanf("%d",&K);
		for(j=0;j<K;j++){
			scanf("%d",&num);
			arr[num]=1;
		}
	} 
	scanf("%d",&K);

	for(i=0;i<K;i++){
		scanf("%d",&num);
		if(arr[num]==0){
			arr[num]=1;
			if(flag == 0){
				printf("%05d",num);
			}
			else {
				printf(" %05d",num);
			}
			flag = 1;
		} 
	}
	if(flag==0) printf("No one is handsome");
	return 0;
}

#include<stdio.h>
int main()
{
 int n,i,j,m,z;
 int c=0; 
 int a[100000],b[10000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  int k=0;
  scanf("%d",&k);
  for(j=0;j<k;j++)
  {
   scanf("%d",&z);
   a[z]=1;
  }
 } 
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
 }
 int xxx=0,flag=0;
 for(i=0;i<m;i++)
 {
  if(a[b[i]]==0)
  {
	if(flag = 0){
		printf("%d",b[i]);
		flag=1;
	} 
   printf(" %d",b[i]);
   xxx=1;
  }     
 }
 if(xxx==0) printf("No one is handsome");
 return 0;
}

/*
3
3 11111 22222 55555
2 33333 44444
4 55555 66666 99999 77777
8
55555 44444 10000 88888 22222 11111 23333 88888

3
3 11111 22222 55555
2 33333 44444
4 55555 66666 99999 77777
4
55555 44444 22222 11111
*/






