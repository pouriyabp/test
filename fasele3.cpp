#include<stdio.h>
#include<math.h>
struct mokhtasat
{
	int x;
	int y;
};

double fasele(mokhtasat l1, mokhtasat l2)
{
	double fasele;
	double x2, double y2;
	x2 = ((l2.x - l1.x)*(l2.x - l1.x));
	y2 = ((l2.y - l1.y)*(l2.y - l1.y));
	fasele = sqrt(x2 + y2);
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
			if (max<fasele(location [i],location[j]))
			{
				max = fasele(location[i], location[j]);
			}
	printf("%.5f\n", max);
}
