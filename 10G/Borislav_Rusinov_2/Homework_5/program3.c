#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, array[10];
    long long int number;
    scanf("%lld",&number);
    for(i=0; i<10; i++)
    {
        array[i]=0;
    }
    while(number>0)
    {
        for(i=0; i<10; i++)
        {
            if(number%10==i)
            {
                array[i]++;
                break;
            }
        }
        number=number/10;
    }

    for(i=0; i<10; i++)
    {
        if (array[i]>0)
	{
		printf("%d : %d\n", i, array[i]);	
	}
		
    }

    return 0;
}
