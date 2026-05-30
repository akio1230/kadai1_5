#include <stdio.h>



int  SUM(int num, int num1)
{
	int result = num + num1;
	return result;
}

int SUB(int num, int num1)
{
	int result = num - num1;
	return result;
}

int MUL(int num, int num1)
{
	int result = num * num1;
	return result;
}

int DIV(int num, int num1)
{
	if (num1 != 0)
	{
		return num / num1;
	}
	else
	{
		printf("0‚ÅŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ\n");
	    return 0;
	}
}

