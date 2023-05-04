#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int* arr;
};


int main()
{
	struct S ps;
	ps.arr = (struct S*)malloc(sizeof(int) * 5);
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		ps.arr[i] = i;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ",ps.arr[i]);
	}
	free(ps.arr);
	ps.arr = NULL;

	return 0;
}
