/*
 ============================================================================
 Name        : C_Stack_Linked-based.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "StackLinked.h"

int main(void)
{

	Stack s;
	Create(&s);

	StackEntry e;

	e.str = "Pop1";
	Push(e, &s);

	e.str = "Pop2";
	Push(e, &s);

	e.str = "Pop3";
	Push(e, &s);

	printf("Stack Size = %d\n", s.size);

	Pop(&e, &s);
	printf("Poped Element Is %s\n", e.str);
	printf("Stack Size = %d\n", s.size);

	Pop(&e, &s);
	printf("Poped Element Is %s\n", e.str);
	printf("Stack Size = %d\n", s.size);

	Pop(&e, &s);
	printf("Poped Element Is %s\n", e.str);
	printf("Stack Size = %d\n", s.size);

	while (1)
	{
		/* code */
		char c = '\0';
		scanf("%c", &c);
		if (c == 'c')
		{
			break;
		}
	}

	return EXIT_SUCCESS;
}
