#include <stdio.h>
typedef struct {
int numerator , denomenator;
} 
rational;
	rational makerational (int,int);
	rational multiply_rational (rational,rational);
int main ()
{
	int x1,y1,x2,y2;
	printf("what is the numerator and Denomenator of first rational number\n");
	scanf("%d %d",&x1,&y1);
	printf("what is the Numerator and Denomenator of second rational number\n");
	scanf("%d %d",&x2,&y2);
	rational r1=makerational(x1,y1);
	rational r2=makerational(x2,y2);
	rational final=multiply_rational(r1,r2);
	printf("%d / %d",final.numerator,final.denomenator);
}
rational makerational(int x, int y)
{
	if (y==0)
	{
		printf("\n\aError");
		exit(0);
	}else 
	{
	rational r_number;
	r_number.numerator=x;
	r_number.denomenator=y;
	return r_number;
	}
}

rational multiply_rational (rational r1,rational r2)
{
rational result;
result.numerator=(r1.numerator*r2.numerator);
result.denomenator=(r1.denomenator*r2.denomenator);
return result;
}
