#include <stdio.h>

int s = 0;

int search(int a[], int l, int h, int f)
{
	int n, m;
	n = h - l;
	
	if(n < 0)
	{
		return -1;
	}
	
	if(n == 0)
	{
		if(f == a[h])
		{
			return h;
		}
		else return -1;
	}
	
	m = n * (f - a[l]) / (a[h] - a[l]) + l;
	
	s += a[m];
	
	if(f == a[m])
	{
		return m;
	}
	else
	{
		if(f < a[m])
		{
			return search(a, l, m - 1, f);
		}
		else
		{
			return search(a, m + 1, h, f);
		}
	}
}
	
	void main()
	{
		int a[11] = {2, 3, 5, 12, 22, 42, 43, 62, 72, 92, 105};
		
		int p, find = 22;
		
		p = search(a, 0, 10, find);
		
		if(p != -1)
		
			printf("%d\n", s);
		
		else
		
			printf("0\n");
		
	}
