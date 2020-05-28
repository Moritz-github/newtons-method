#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double betrag(double d){
 return d > 0 ? d : -d;
}

int main(void){
 printf(" n |       xn       |      f(xn)     |     f'(xn)     |         xn+1\n");

 int n = 0;
 double xn;
 double fxn=-1;
 double fDIFFxn;
 double xnplus1 = 1;

 while ( betrag(fxn) > 0.0000001 ) {
  xn = xnplus1;
  fxn = pow(xn, 3) - (5*pow(xn,2)) + 10;
  fDIFFxn = (3*pow(xn,2)) - (10*xn);
  xnplus1 = xn - (fxn/fDIFFxn);
  n++;

  printf("%2d |%15.5lf |%15.5lf |%15.5lf |%15.5lf\n", n, xn, fxn, fDIFFxn, xnplus1);
 }

 return EXIT_SUCCESS;
}
