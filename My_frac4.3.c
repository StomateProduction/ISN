/*TITLE : My_frac
 AUTHOR :  OBSIDIAN AND LOJILOJI
 WHAT IS THIS ?  : An advanced fraction calculator
                        /\
  ___                  /  \                  ___
 /   \     __         /    \         __     /
/     \   /  \   _   / <()> \   _   /  \   /
       \_/    \_/ \_/________\_/ \_/    \_/
 __________________/__I___I___\________________
                  /_I___I___I__\
                 /I___I___I___I_\
                /___I___I___I___I\
  Lojiloji     /__I___I___I___I___\   Obsidian
              /_I___I___I___I___I__\
             /I___I___I___I___I___I_\
            /___I___I___I___I___I___I\
           /__I___I___I___I___I___I___\
          /_I___I___I___I___I___I___I__\   */

#include <stdio.h>
#include <stdlib.h>

///PROTOTYPES

void printA(float array[3][7], int arrayL); //Array Prototype
float add(); //operations prototypes, the save function is included in those functions, in order to save the operator.
float substract();
float product();
float divide();


/// MAIN
int main(void)
{
   //List

   int operator ;
   operator = 0 ;

    while (42) //Operator choice
   {

        printf(" \n                        OPERATOR SELECTION MENU  \n") ;
        printf("                        1. Addition        \n") ;
        printf("                        2. Substraction    \n") ;
        printf("                        3. Division        \n") ;
        printf("                        4. Product         \n") ;
        printf("                        5. Quit            \n") ;
        printf("\nSelection : ") ;
        scanf("\n%d", &operator) ;
        //VERIF NEED
    if(operator <= 6  ) // It include the six for a secret !
       switch(operator)
       {
        case 1:
        	add() ;
            break ;
        case 2:
		 substract() ;
            break;
        case 3:
		 divide() ;
            break ;
        case 4:
        	product() ;
            break;
        case 5:
		 exit(42) ;
            break ;
        case 6:
		 printf(" \n You have been brave enough to press 6 the number of hell and demons! \n You may wanna know who we are.. this program have been code \n BY STOMATE PRODUCTION\n ") ;
            break ;
       }
    else
        printf("1,2,3,4 or 5!!! It's easy to remember right !?\n") ;
   }
    return 0 ;
}


///FUNCTIONS

void printA(float array[3][7], int arrayL)
{
    int i;
    int j;

    for (i = 0 ; i < arrayL ; i++)
    {
        for (j = 0; j < arrayL ;j++)
        printf("%f\n", array[i][j]) ;
    }
}

float add()
{
    	FILE  *flot = NULL ;
	float result1, result2,result3, frac11, frac12, frac21, frac22 ; // result1 = nom result   result2 den result

	printf("\nNow, choose the fraction's terms !  ( float-enter*4 ) \n") ;
	scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
		if(frac12==frac22)		//si les denominateurs sont egaux
			{
			    result1 = frac11 + frac21 ;	//le numerateur est egal a la somme des 2 autres numerateurs
				result2 = frac12 ;		//le denominateur de la somme est egal au denominateur de frac1
        			    result3 = result1 / result2 ;
				printf(" \n You wanted (%0.2f/%0.2f) + (%0.2f/%0.2f)\n And the result is %0.2f/%0.2f \n Or in decimal %0.2f\n ", frac11, frac12, frac21, frac22, result1, result2,result3);
			}
		else				//si les denominateurs ne sont pas egaux
			{
			    result1 = (frac11 * frac22) + (frac21*frac12) ; 	//le numerateur est  egal à (frac1.num)(frac2.den)+(frac2.num)(frac1.den)
				result2 = frac12 * frac22 ;		//le denominateur  est  egal au produit des 2 autres
 		 	    	   result3 = result1 / result2 ;
				printf(" \n You wanted (%0.2f/%0.2f) + (%0.2f/%0.2f)\n And the result is %0.2f/%0.2f \n Or in decimal %0.2f\n ", frac11, frac12, frac21, frac22, result1, result2,result3);
			}


//"Save" function   I konw it's ugly like that, but 'twas easier
	flot = fopen("OBSIDIAN HAS SAVED SOMETHING ON YOUR COMPUTER, MIGHT BE A VIRUS.txt", "a") ;
		if ( flot != NULL )
			{
			  printf("\nSaved\n") ;
			  fprintf(flot ,"You have done : %0.2f/%0.2f + %0.2f/%0.2f = %0.2f+%0.2f (In decimal %0.2f) \n\n", frac11, frac12, frac21, frac22, result1, result2,result3);
			  fclose(flot) ;
			}
		 else
    			printf("The file couldn't be open. Error number 666. Ask an administrator about that : the error is certainly caused by something between the computer and the chair ;)");

}


float substract()
{
    FILE  *flot = NULL;
    float result1, result2, result3, frac11, frac12, frac21, frac22;
        printf("\nNow, choose the fraction's terms !\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        result1 = frac11/frac12;
	  result2 = frac21/frac22;
            result3 = result1-result2;
        printf(" \n You wanted (%0.2f/%0.2f ) - (%0.2f/%0.2f)\n And the result is %0.2f-%0.2f \n Or in decimal %0.2f\n " , frac11, frac12, frac21, frac22, result1, result2,result3);


//"Save" function

	flot = fopen("OBSIDIAN HAS SAVED SOMETHING ON YOUR COMPUTER, MIGHT BE A VIRUS.txt", "a");
	if ( flot != NULL )
		{
		  printf("\n Saved \n");
		  fprintf(flot ,"You have done : %0.2f/%0.2f - %0.2f/%0.2f = %0.2f-%0.2f (In decimal : %0.2f) \n\n", frac11, frac12, frac21, frac22, result1, result2,result3);
		  fclose(flot);
		}
	 else
		 printf("The file couldn't be open. Error number 666. Ask an administrator about that : the error is certainly caused by something between the computer and the chair ;)");
}


float divide()
{
    FILE  *flot = NULL;
    float result1, result2, result3, frac11, frac12, frac21, frac22;
        printf("\nNow, choose the fraction's terms ! \n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        result1 = frac11/frac12;
	  result2 = frac21/frac22;
	     result3 = result1/result2;
        printf(" \n You wanted (%0.2f/%0.2f ) / (%0.2f/%0.2f)\n And the result is %0.2f/%0.2f \n Or in decimal %0.2f\n " , frac11, frac12, frac21, frac22, result1, result2,result3);


//"Save" function

	flot = fopen("OBSIDIAN HAS SAVED SOMETHING ON YOUR COMPUTER, MIGHT BE A VIRUS.txt", "a") ;
	if ( flot != NULL )
	{
	  printf("\n Saved \n");
	  fprintf(flot ,"You have done : %0.2f/%0.2f / %0.2f/%0.2f = %0.2f/%0.2f (In decimal : %0.2f) \n\n", frac11, frac12, frac21, frac22, result1, result2,result3) ;
	  fclose(flot);
	}
    else
	 printf("The file couldn't be open. Error number 666. Ask an administrator about that : the error is certainly caused by something between the computer and the chair ;)") ;
}

float product()
{
    FILE  *flot = NULL ;
    float result1, result2, result3, frac11, frac12, frac21, frac22 ;
        printf("\nNow, choose the fraction's terms !\n") ;
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22) ;
	  result1 = frac11/frac12 ;
	     result2 = frac21/frac22 ;
		result3 = result1*result2 ;
        printf(" \n You wanted (%0.2f/%0.2f ) + (%0.2f/%0.2f)\n And the result is %0.2f/%0.2f \n Or in decimal %0.2f\n " , frac11, frac12, frac21, frac22, result1, result2,result3) ;


//"Save" function

	flot = fopen("OBSIDIAN HAS SAVED SOMETHING ON YOUR COMPUTER, MIGHT BE A VIRUS.txt", "a") ;
	if ( flot != NULL )
	{
	  printf("\n Saved \n") ;
	  fprintf(flot ,"You have done : %0.2f/%0.2f * %0.2f/%0.2f = %0.2f*%0.2f (In decimal : %0.2f) \n\n", frac11, frac12, frac21, frac22, result1, result2,result3) ;
	  fclose(flot) ;
	}
    else
    	printf("The file couldn't be open. Error number 666. Ask an administrator about that : the error is certainly caused by something between the computer and the chair ;)") ;
}
