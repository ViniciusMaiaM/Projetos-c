# include<stdio.h>
# include<math.h> //library with math functions

double a;
double b;
int c;
int d;
int e;
double f;
double g;
double h;
double i;
double j;

int main(){
  a = sqrt(17);
  printf ("The sqrt of 17 is %f\n",a);

  b = pow(5,4);
  printf("The power of 5.4 is %f\n",b);

  c = round(4.312867);
  printf("The round of 4.312867 is %d\n",c);

  d = ceil(3.068);
  printf("The ceil of 3.068 is %d\n",d);

  e = floor(3.999);
  printf("The floor of 3.999 is %d\n",e);

  f = fabs(-48912721); //the absolute value of the number 
  printf("The abslout value of -48912721 is %f\n",f);

  g = log(3);
  printf("The log of 3 is %f\n",g);

  h = sin(74);
  printf("The sin of 74 is %f\n",h);

  i = cos(74);
  printf("The cos of 74 is %f\n",i);

  j = tan(74);
  printf("The tan of 74 is %f\n",j);

  return 0;
}