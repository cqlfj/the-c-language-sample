#include <stdio.h>
#include <stdlib.h>


/*Code 01 Hello World.
int main()

{
    printf("Hello world!\n");
}
//END Code 01 Hello World.*/




/* Code 02 print Fahrenheit-Celsius table

//for fahr = 0, 20, ..., 300

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit
    step = 20;      //step size
    fahr = lower;

    while (fahr <= upper)
        {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
        }
}

//END Code 02 print Fahrenheit-Celsius table*/



/* Code 03 print Fahrenheit-Celsius table. floating-point version


int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit
    step = 20;      //step size
    fahr = lower;

    while (fahr <= upper)
        {
        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%3.0f   %6.1f\n", fahr, celsius);
        fahr = fahr + step;
        }
}

//END Code 03 print Fahrenheit-Celsius table  */



/* Code 04 print Fahrenheit-Celsius table. for statement


int main()
{
    float fahr;

    for(fahr=0;fahr<=300;fahr+=20)
        {
            printf("%3.0f   %6.1f\n", fahr,5.0 / 9.0 * (fahr-32));

        }
}

//END Code 04 print Fahrenheit-Celsius table. for statement */


/* Code 05 print Fahrenheit-Celsius table. for statement. Symbolic Constants

#define      LOWER   0      //lower limit of temperature table
#define      UPPER       300    //upper limit
#define      STEP           25   //step size

int main()
{
    float fahr;

    for(fahr=LOWER;fahr<=UPPER;fahr+=STEP)
        {
            printf("%3.0f   %6.1f\n", fahr,5.0 / 9.0 * (fahr-32));

        }
}

//END Code 05 print Fahrenheit-Celsius table. for statement.Symbolic constant */

/* Code 06  copy input to output;1st version

int main()
{
    int c;
    c=getchar( );
    while(c!='\t')
        {
            putchar(c);
            c=getchar( );

        }
}

//END Code 06 copy input to output;1st version    */


/*   Code 07 copy input to output;1st version
int main()
{
    int c,nl;

    nl = 0 ;
    while((c=getchar( ))!='\t')
         if(c == '\n')
               ++nl;
printf("%d line(s)\n",nl);
}

END. Code 07 copy input to output;1st version */



/* Code 08 count lines, words, and characters in input */

#define IN	1	//inside word

#define OUT	0	// outside word


main()

{

	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != '\t'){
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' ||c == '\n' || c  == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n",nl, nw, nc);

}









