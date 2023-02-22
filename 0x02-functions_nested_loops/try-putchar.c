#ifndef MAIN_H_
#define MAIN_H_
int main(int _putchar);  /* An example function declaration */
#endif /* MAIN_H_*/
#include "main.h"  /* Include the header (not strictly necessary here) */
int main(int _putchar)    /* Function definition */
{
    return (_putchar);
}
#include <stdio.h>
#include "main.h"  /* Include the header here, to obtain the function declaration */
int main(void)
{
	        int main(_putchar);
        	char *sh = "_putchar";
     	   while (*sh)
        {
                _putchar(*sh);
                sh++;
        }
        _putchar('\n');

        return (0);
}     
