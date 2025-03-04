//we can compile and execute without main function in c, but it is not recommended.
//compile using gcc -nostartfiles without_main.c  -> this means to compile without main, we will have to create executable file without a _start func.for that using -nostartfiles

#include<stdio.h>
#include<stdlib.h>

first()
{	f();
	printf("\n");
	f2();
	exit(100);
}

f()
{
	printf("hi im f()\n");
}

f2()
{
	printf("hi...im f2()\n");
}
