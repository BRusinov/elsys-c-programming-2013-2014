#include <stdio.h>

int main()
{
	int m1,m2,m3,m;
	
	scanf("%d", &m1);
	scanf("%d", &m2);
	scanf("%d", &m3);
	scanf("%d", &m);
	
	int x = 0;
	int y = 0;
 	int z = 0;

	if ( (m1 + m2*2 + m3*5) < m)
	{
		printf("No\n");
		return 0;
	}

	if ( m - (m3 * 5) >= 0)
		z = m3;
	else
	{
		int i = 0;
		for (i = m3; i != 0; i--)
		{
			if (m - (i * 5) >= 0)
			{
				z = i;
				break;
			}
		}
	}

	m -= z*5;

	if (m > 0)
	{	
		if ( m - (m2*2) >= 0)
			y = m2;		
		else
		{
			int i = 0;
			for (i = m2; i != 0; i--)
			{
				if (m - (i * 2) >= 0)
				{
					y = i;
					break;
				}
			}
		}
	}
	m -= y*2;

	if (m > 0)
	{
		if ( m - m1 >= 0)
			x = m1;
		else
		{
			int i = 0;
			for (i = m1; i != 0; i--)
			{
				if (m - i >= 0)
				{
					x = i;
					break;
				}
			}
		}
	}
	m -= x;

	if (m == 0)
	{
		printf("Yes %d %d %d\n", x, y, z);
	}
	else
		printf("No\n");

	return 0;
}
