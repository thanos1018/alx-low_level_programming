/*
* File: 0-print_alphabet.c
* Auth: ChatGPT
* Date: 2023-03-17
* Desc: A program that prints the alphabet in lowercase, followed by a new line, using the putchar function.
*/
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

