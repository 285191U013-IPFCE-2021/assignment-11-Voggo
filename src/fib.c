/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 0);

    if ( n == 0)
        return pp;
    if (n == 1)
        return p; 
    else
        return fib(n-1, p + pp, p); // summer de to tidligere fib inde i parametrene -> tail recursion
}
