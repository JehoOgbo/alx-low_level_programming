#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

int ABS(int x)	/* macro to find absolute value */
{
	if(x < 0)	/* return only positive values */
	{
		x = -1 * x;
		return (x);
	}
	return (x);
}

#endif /*FUNCTION_LIKE_MACRO_H*/
