#include "3-calc.h"
/**
 * op_add - Function to add
 * @a:first parameter
 * @b:second parameter
 * Return:a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtraction
 * @a: first parameter
 * @b: second parameter
 * Return:a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function to multiplicate
* @a: first parameter
* @b: second parameter
* Return:a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function to divide
*@a: first parameter
*@b: second parameter
* Return: a / b
*/
int op_div(int a, int b)
{
	if (b != 0)
	return (a / b);
	else
{
	puts("Error");
	exit(100);
}
}
/**
 * op_mod - function to modulo
 * @a: first parameter
 * @b: second parameter
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
	return (a % b);
	else
	{
	puts("Error");
	exit(100);
	}
}
