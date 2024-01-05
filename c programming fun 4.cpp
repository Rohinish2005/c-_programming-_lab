//without argument without returntype

#include<stdio.h>
int main(){
	void add();
	add();
}
void add(){
	int z;
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	z=a+b;
	printf("Sum=%d",z);
}
