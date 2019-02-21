#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float trap(float(*f)(float), float a, float b, int n)
{
	int k;
	float s, s1 = 0;
	float h = (b - a) / n;
	for (k = 1; k <= n - 1; k++)
	{
		s1 += (*f)(a + k*h);
	}
	s = h / 2 * ((*f)(a)+2 * s1 + (*f)(b));
	return s;
}

float simpson(float(*f)(float), float a, float b, int n)
{
	int k;
	float s, s1, s2 = 0;
	float h = (b - a) / n;
	s1 = (*f)(a + h / 2);
	for (k = 1; k <= n - 1; k++)
	{
		s1 += (*f)(a + k*h + h / 2);
		s2 += (*f)(a + k*h);
	}
	s = h / 6 * ((*f)(a)+4 * s1 + 2 * s2 + (*f)(b));
	return s;
}

float kesite(float(*f)(float), float a, float b, int n)
{
	int k;
	float s, s1, s2, s3, s4 = 0;
	float h = (b - a) / n;
	s1 = (*f)(a + h / 4);
	s2 = (*f)(a + h / 2);
	s3 = (*f)(a + 3 * h / 4);
	for (k = 1; k <= n - 1; k++)
	{
		s1 += (*f)(a + k*h + h / 4);
		s2 += (*f)(a + k*h + h / 2);
		s3 += (*f)(a + k*h + 3 * h / 4);
		s4 += (*f)(a + k*h);
	}
	s = h / 90 * (7 * (*f)(a)+32 * s1 + 12 * s2 + 32 * s3 + 14 * s4 + 7 * (*f)(b));
	return s;
}

float f1(float x)
{
	return 1 / (1 + x*x);
}

float f2(float x)
{
	if (x == 0) return 1;
	else return sin(x) / x;
}

int main()
{
	int i, n = 1;
	float t, s, k;
	printf("����1�Ľ⣺\n");
	for (i = 0; i <= 4; i++)
	{
		printf("�ڵ����Ϊ%dʱ:", 4 * n + 1);
		t = trap(f1, 0, 1, 4 * n);
		s = simpson(f1, 0, 1, 2 * n);
		k = kesite(f1, 0, 1, n);
		printf("\t�������ι�ʽ��t(%d)=%f\n", 4 * n, t);
		printf("\t\t������������ʽ��s(%d)=%f\n", 2 * n, s);
		printf("\t\t��������˹��ʽ��k(%d)=%f\n", n, k);
		n *= 2;
	}
	printf("\n");
	n = 1;
	printf("����2�Ľ⣺\n");
	for (i = 0; i <= 4; i++)
	{
		printf("�ڵ����Ϊ%dʱ:", 4 * n + 1);
		t = trap(f2, 0, 1, 4 * n);
		s = simpson(f2, 0, 1, 2 * n);
		k = kesite(f2, 0, 1, n);
		printf("\t�������ι�ʽ��t(%d)=%f\n", 4 * n, t);
		printf("\t\t������������ʽ��s(%d)=%f\n", 2 * n, s);
		printf("\t\t��������˹��ʽ��k(%d)=%f\n", n, k);
		n *= 2;
	}
	system("pause");
	return 0;
}
