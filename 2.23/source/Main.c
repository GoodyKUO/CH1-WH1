#include <stdio.h>
#include <stdlib.h>

int x, y, z;
int t;

int main()
{
	printf("input 3 number\n");
		scanf_s("%d%d%d", &x, &y, &z);

		if (x<y){ t = x; x = y; y = t; }
		if (x<z){ t = x; x = z; z = t; }
		if (y<z){ t = y; y = z; z = t; }

		printf("%d%d%d\n", x, y, z);
		system("pause");
		return 0;

}
