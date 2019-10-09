#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {

double NumOne;
double NumTwo;
char Operator;

Operator=(argv[1][0]);

NumOne=atof(argv[2]);
NumTwo=atof(argv[3]);

char sum='+';
char subs='-';
char mult='x';
char div='/';
double answer=0;

if(Operator==sum){
    printf ("%lf \n" , NumOne+NumTwo);

}    else if (Operator==subs) {
        printf ("%lf \n" ,NumOne-NumTwo);

}    else if (Operator==mult) {
        printf ("%lf \n" , NumOne*NumTwo);

}    else if (Operator==div) {
        printf ("%lf \n" , NumOne/NumTwo);
}
        else {
            printf ("Please use an arithmetic sign (+, -, x, /,) \n");
        }

return 0;

}