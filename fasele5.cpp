#include<stdio.h>
#include<math.h>
struct mokhtasat
{
	float x;
	float y;
};

double fasele(mokhtasat l1, mokhtasat l2)
{
	double fasele;
	fasele = sqrt(((l2.x - l1.x)*(l2.x - l1.x)) + ((l2.y - l1.y)*(l2.y - l1.y)));
	return fasele;
}
int main()
{
	int n;
	double max = -1;

	mokhtasat location[1000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", location[i].x,location[i].y);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (max < fasele(location[i], location[j]))
			{
				max = fasele(location[i], location[j]);
			}
	    }
	}
	printf("%.5f", max);
}
