#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    float x1,x2,x,delta;
    float a = get_float("what's the value of a ");
    float b = get_float("what's the value of b ");
    float c = get_float("what's the value of c ");
    delta = pow(b,2) - 4*a*c;

    if ( delta > 0)
   {
       // the problem has two solutions
       printf ("the first soltuion x1=  %f\n", x1= (-b-sqrt(delta))/2*a);
       printf ("the second soltuion x2=  %f\n", x2= (-b+sqrt(delta))/2*a);

   }
    if ( delta == 0)
   {
       // the problem has only one solution
       printf ("the soltuion is x=  %f\n", x= (-b)/2*a);

   }
    if ( delta < 0)
   {

       printf ("there are no solutions \n");

   }
}
