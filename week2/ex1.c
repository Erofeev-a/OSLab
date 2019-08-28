#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	int exint = INT_MAX;
	float exfloat = FLT_MAX;
	double exdouble = DBL_MAX;

	printf("Size of int: %d\n", sizeof(exint));
	printf("Value of int: %d\n", exint);
	printf("Size of float: %d\n", sizeof(exfloat));
	printf("Value of float: %f\n", exfloat);
	printf("Size of double: %d\n", sizeof(exdouble));
	printf("Value of double: %lf\n", exdouble);
	

	return 0;
}