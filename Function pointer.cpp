#include <iostream>
#include <string.h>

void *add_int(void *p1, void *p2, void *result);
void *sub_int(void *p1, void *p2, void *result);
void *add_str(void *p1, void *p2, void *result);

void *compute(void *p1, void *p2, void *p3, void *(fun)(void *, void *, void *));

void *add_int(void *p1, void *p2, void *result)
{
	*(int *)result = *(int *)p1 + *(int *)p2;
	return result;
}
void *sub_int(void *p1, void *p2, void *result)
{
	*(int *)result = *(int *)p1 - *(int *)p2;
	return result;
}
void *add_str(void *p1, void *p2, void *result)
{
	strcpy((char *)result, (char *)p1);
	strcat((char *)result, (char *)p2);
	return result;
}

void *compute(void *p1, void *p2, void *result, void *(*fun)(void *, void *, void *))
{
	return fun(p1, p2, result);
}

int main()
{
	int a = 10, b = 20, c = 0;
	char s1[10] = "s1 ", s2[10] = "s2 ", s3[10] = "";

	std::cout << *(int *)compute(&a, &b, &c, add_int) << std::endl;
	std::cout << (char *)compute(s1, s2, s3, add_str) << std::endl;
}
