#include<stdio.h>
#include<conio.h>
#include<math.h>

typedef struct ToaDo {
	int x;
	int y;
}TOADO;
void nhapToaDo(TOADO*a)
{
	printf("NHap tao do x:");
	scanf("%d",&a->x);
	printf("NHap tao do y:");
	scanf("%d",&a->y);
}
void xuatToaDo(TOADO a)
{
	printf("=> toa do la :(%d,%d)\n",a.x,a.y);
}
int main()
{
	TOADO a;
	nhapToaDo(&a);
	xuatToaDo(a);
	return 0;
}
