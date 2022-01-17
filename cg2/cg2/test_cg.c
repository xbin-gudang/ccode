#include<stdio.h>	
struct S
{
	int a;
	int b;
	int c[0];
};

int main() {
	struct S s = {0};
	printf("%d", sizeof(s));
}