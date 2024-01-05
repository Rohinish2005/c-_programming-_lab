//with argument without returntype
#include<stdio.h>
 int main() {
	void add(int,int);
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b){
	int z;
	z=a+b;
	printf("Sum=%d",z);
}
