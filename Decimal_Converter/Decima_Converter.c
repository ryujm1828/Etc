#include <stdio.h>
#include <stdlib.h>
int size(int n,int b){
	int* a = (int *)malloc(sizeof(int));
	int q=n;
	int k=0;
	while(q != 0){
		a[k] = q%b;
		a = (int *)realloc(a,sizeof(int)*(k+1));
		q /= b;
		k += 1;
	}
	return k;
	
}

int* base_change(int n,int b){
	int* a = (int *)malloc(sizeof(int));
	int q=n;
	int k=0;
	while(q != 0){
		a[k] = q%b;
		a = (int *)realloc(a,sizeof(int)*(k+1));
		q /= b;
		k += 1;
	}
	return a;
}

int main(){
	int n,b;
	printf("Input the decimal that you want to convert.\n");
	scanf("%d",&n);
	printf("Input the base.\n");
	scanf("%d",&b);
	
	int k = size(n,b); 
	
	int i;
	printf("%d Base decimal %d: ",b,n);
	for(i=k-1; i>=0; i--){
		if(base_change(n,b)[i]>=10)
			printf("%c",base_change(n,b)[i]+'A'-10);
		else
			printf("%d",base_change(n,b)[i]);
	}
}
