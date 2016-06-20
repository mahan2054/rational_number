#include <stdio.h>
typedef struct {
int numerator , denomenator;
} 
rational;
rational makerational (int,int);
rational add_rational (rational,rational);
int main ()
{
int x1,y1,x2,y2;
printf("what is the Numerator and Denomenator of first rational number\n");
scanf("%d %d",&x1,&y1);
printf("what is the Numerator and Denomenator of second rational number\n");
scanf("%d %d",&x2,&y2);
rational r1=makerational(x1,y1);
rational r2=makerational(x2,y2);
rational r3=add_rational(r1,r2);
printf("%d / %d",r3.numerator,r3.denomenator);
}
rational makerational(int x, int y)
{
	if (y==0)
	{
		exit(0);
	}else 
	{
	rational r_number;
	r_number.numerator=x;
	r_number.denomenator=y;
	return r_number;
	}
}

rational add_rational (rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.denomenator)+(r2.numerator*r1.denomenator);
	result.denomenator=(r1.denomenator*r2.denomenator);
	return result;
}
