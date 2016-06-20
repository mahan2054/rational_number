#include <stdio.h>
typedef struct {
int numerator , denomenator;
} rational;
rational makerational (int,int);
int equal_rational (rational,rational);
int main ()
{
	int x1,y1,x2,y2,final;
	printf("what is the Numerator and Denomenator of first rational number\n");
	scanf("%d %d",&x1,&y1);
	printf("what is the Numerator and Denomenator of second rational number\n");
	scanf("%d %d",&x2,&y2);
	rational r1=makerational(x1,y1);
	rational r2=makerational(x2,y2);
	final=equal_rational(r1,r2);
	if (final==1)
	{
		printf("%d / %d and %d / %d are equal",x1,y1,x2,y2);
	}
	else
	{
		printf("%d / %d and %d / %d are not equal",x1,y1,x2,y2);
	}
	
	}
rational makerational(int x, int y)
{
	if (y==0)
	{
	printf("Error");
	exit(0);
	}else 
	{
	rational r_number;
	r_number.numerator=x;
	r_number.denomenator=y;
	return r_number;
	}
}

int equal_rational (rational r1,rational r2)
{
	int first,second;
	first=(r1.numerator*r2.denomenator);
	second=(r1.denomenator*r2.numerator);
	if (first==second)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
