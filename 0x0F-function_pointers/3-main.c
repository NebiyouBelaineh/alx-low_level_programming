#include "3-calc.h"
/**
 * main -	performs arthemetic operations on integers passed
 *		to main.
 * @argc:	argument counter
 * @argv:	argument vector
 *
 * Return:	0 for success, otherwise exits program with status
 *		98, 99 and 100 if number of argc is not 4, if operator
 *		is not recognized, if there is division or mod by 0
 *		respectively.
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*Op_fun_ptr)(int, int);
	char sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = *argv[2];

	Op_fun_ptr = get_op_func(argv[2]);

	if (!Op_fun_ptr)
	{
		printf("Error\n");
		exit(99);
	}
	if ((sign == '/' || sign == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = Op_fun_ptr(num1, num2);
	printf("%d\n", res);

	return (0);
}
