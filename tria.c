#include<stdio.h>
#include<stdlib.h>
struct points
{
	float x,y;
};

float getArea(struct points a,struct points b,struct points c)
{
	return (0.5*(a.x*(b.y - c.y) - a.y*(b.x - c.x) + (b.x * c.y - c.x * b.y)));
}

int main()
{
	int n;
	struct points *p;
	printf("Enter the number of points: ");
	scanf("%d",&n);
	p = (struct points*)malloc(n * sizeof(struct points *));
	int i;
	for(i=0;i<n;i++)
	{
		printf("X co-ordinate of point %d:",i);
		scanf("%f",&p[i].x);
		printf("Y co-ordinate of point %d:",i);
		scanf("%f",&p[i].y);
	}
	
	int count = 0;
	int j,k;
	for(i=0; i<n-2; i++)
	{
		for(j=i+1; j<n-1; j++)
		{
			for(k=j+1; k<n; k++)
			{
				float area = getArea(p[i],p[j],p[k]);
				if(area!=0)
				{
					count++;
				}
			}
		}
	}
	
	
	
	printf("Total Valid triangles are: %d", count);
	return 0;
}
