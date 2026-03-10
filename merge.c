#include<stdio.h>
int main(){
	int a[100],b[100],c[200],n,m,i,j;
	printf("Enter the no of first elements=");
	scanf("%d",&n,&m);
	printf("Enter the elements of arrays for first\n");
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	printf("Enter the no of second elements=");
	scanf("%d",&m);
	printf("Enter the elements of arrays for second\n");
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	printf("Display Elements of array for first  :");
	for(j=0;j<n;j++){
		printf(" %d\t",a[j]);
	}
	printf("\nDisplay Elements of array for second :");
	for(i=0;i<m;i++){
		printf(" %d\t",b[i]);
	}
	printf("\nDisplay Merge Elements of array      :");
	for(j=0;j<n;j++){
		printf(" %d\t",a[j]);
	}
	for(i=0;i<m;i++){
		printf(" %d\t",b[i]);
	}
}