#include <stdio.h>
#include <math.h>

int main(void)
{

    float a,b,c,x1,x2,delta;
    float realpart, imagpart;
    printf("enter the value of a \n");
    scanf("%f",&a);
    printf("enter the value of b \n");
    scanf("%f",&b);
    printf("enter the value of c \n");
    scanf("%f",&c);
    delta = pow(b,2) - 4*a*c;

    if ( delta > 0)
   {
       // the problem has two real roots
        printf ("the first soltuion x1=  %f\n", x1= (-b-sqrt(delta))/2*a);
        printf ("the second soltuion x2=  %f\n", x2= (-b+sqrt(delta))/2*a);

   }
    if ( delta == 0)
   {
       // the problem has two equal roots
        printf ("the soltuion is x1=x2=  %f\n", x1=x2= (-b)/2*a);

   }
    if ( delta < 0)
   {
      // the problem has two complex roots

        printf ("the first soltuion is  %f + %fi \n", realpart= (-b)/(2*a), imagpart= sqrt(-delta)/(2*a));
        printf ("the second soltuion is  %f - %fi \n", realpart= (-b)/(2*a), imagpart= sqrt(-delta)/(2*a));

   }
}
