#include<stdio.h>

int main()
{
        int x=0;
	int n=0, i=0, pr;
	int k=0;
	scanf("%d",&n);
	while (k<n)
	{
		pr=x;
		scanf("%d",&x);
		if (k==0)
		{
			k=k+1;
			continue;
		}
		else
		{
			k=k+1;
			if (x>=pr)
			{
				i=1;
				printf("0\n");
				return 0;
			}
		}
	}
	if (i==0)
	{
		printf("1\n");
	}
	return 0;
}

