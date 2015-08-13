/* Generated by forth2c, (C) Martin Maierhofer 1994 */

                     /* size of data space, can be changed ! */
int _C_DATA_SIZE = 8192;

#include "forth.h"   /* general forth definitions */
#include "forth2c.h" /* forth2c specific definitions */


Cell fib(Cell p0)
{
Cell _c_result;
Cell x0;
Cell x1;

	{	/* dup */
		Cell n;
		
		n = p0;
		
		p0 = n;
		x0 = n;
		
	}
	
	{	/* Literal */
		x1 = 2;
	}
	
	{	/* less-than */
		Cell n1, n2, n;
		n1 = x1;
		n2 = x0;
		
		n = FLAG(n2 < n1);
		x0 = n;
		
	}
	
	if (!x0) goto label0;
	
	{	/* drop */
		
	}
	
	{	/* Literal */
		p0 = 1;
	}
	
	goto label1;
	
	label0:
	
	
	{	/* dup */
		Cell n;
		
		n = p0;
		
		p0 = n;
		x0 = n;
		
	}
	
	{	/* one_minus */
		Cell n;
		
		n = x0;
		x0 = n - 1;
		
	}
	
	{	/* recurse */
		
		{	
			Cell _C_locret;
			
			_C_locret = fib(x0);
			x0 = _C_locret;
			
		}
		
	}
	
	{	/* swap */
		Cell n1, n2;
		
		n1 = x0;
		n2 = p0;
		
		p0 = n1;
		x0 = n2;
		
	}
	
	{	/* Literal */
		x1 = 2;
	}
	
	{	/* minus */
		Cell n1, n2, n;
		n1 = x1;
		n2 = x0;
		
		n = n2 - n1;
		x0 = n;
		
	}
	
	{	/* recurse */
		
		{	
			Cell _C_locret;
			
			_C_locret = fib(x0);
			x0 = _C_locret;
			
		}
		
	}
	
	{	/* plus */
		Cell n1, n2, n;
		n1 = x0;
		n2 = p0;
		
		n = n2 + n1;
		p0 = n;
		
	}
	
	label1:
	
	
	{	/* exit */
		_c_result = p0;
		return (_c_result);
		
	}
	
}

void main(void)
{
Cell x0;

	{	/* Literal */
		x0 = 34;
	}
	
	{	
		Cell _C_locret;
		
		_C_locret = fib(x0);
		x0 = _C_locret;
		
	}
	
	{	/* dot */
		printf("%d ", x0);
		fflush(stdout);
	}
	
	{	/* exit */
		return;
		
	}
	
}