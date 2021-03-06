#include "seahorn/seahorn.h"

//This example is adapted from StIng 
void main()
{
	int x = unknown ();
	int y = unknown ();

	if (! (x==0)) return;
	if (! (y==0)) return;

	while (unknown())
	{
		if (unknown())
		{
			if (! (x >= 9)) return;
			x = x + 2;
			y = y + 1;
		}
		else
		{
			if (unknown())
			{
				if (!(x >= 7)) return;
				if (!(x <= 9)) return;
				x = x + 1;
				y = y + 3;
			}
			else
			{
				if (unknown())
				{
					if (! (x - 5 >=0)) return;
					if (! (x - 7 <=0)) return;
					x = x + 2;
					y = y + 1;
				}
				else
				{
					if (!(x - 4 <=0)) return;
					x = x + 1;
					y = y + 2;
				}
			}
		}
	}
	sassert (-x + 2*y  >= 0);
	sassert (3*x - y  >= 0);
}
