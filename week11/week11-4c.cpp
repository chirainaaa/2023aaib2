// week11-4c.cpp part3
#include <stdio.h>
int main(){
	int a[10][10];
	int m,n;   //Part 1: Input
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int j=0;j<n;j++){  //part 3
		for(int i=m-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}