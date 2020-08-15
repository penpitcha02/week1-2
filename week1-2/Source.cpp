#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	printf("Fill your age :");
	scanf("%d", &age);

	if (age <= 20)
	{
		printf("You are a teenager");
	}
	else
	{
		printf("You are an adult");
	}
}