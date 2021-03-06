/**
 * \file main.c
 * \author Harsh
 * \date 29 Sep 2018
 * \brief Airthmetic Calculator built on C Language
 *
 * \see http://harshppatel.gtihub.io
 */


#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>

/**
 * \brief Function named sum which ask user for two numbers, make addition of them and prints it to the console
 * 
 * \fn sum
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>numberOne : (type: float) To save user input</LI>
 *			<LI>numberTwo : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  sum();
 *  
 *  \endcode
 */
 void sum() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Sum of your numbers : %0.2f \n", numberOne + numberTwo);
 }


/*
 * Function 	: substract
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its substraction
 * Method Type	: void 
 */
 
 /**
 * \brief Function named substract which ask user for two numbers, make substraction of them and prints it to the console
 * 
 * \fn substract
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>numberOne : (type: float) To save user input</LI>
 *			<LI>numberTwo : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  substract();
 *  
 *  \endcode
 */
 void substract() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Substraction of your numbers : %0.2f \n", numberOne - numberTwo);
 }


/*
 * Function 	: multiplication
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its multiplication
 * Method Type	: void 
 */
 
 /**
 * \brief Function named multiplication which ask user for two numbers, make multiplication of them and prints it to the console
 * 
 * \fn multiplication
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>numberOne : (type: float) To save user input</LI>
 *			<LI>numberTwo : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  multiplication();
 *  
 *  \endcode
 */
 void multiplication() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Multiplication of your numbers : %0.2f \n", numberOne * numberTwo);
 }


/*
 * Function 	: division
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its division
 * Method Type	: void 
 */
 
 /**
 * \brief Function named division which ask user for two numbers, an  make division of them and prints it to the console
 *  
 * Function named division which ask user for two numbers, validates that The Second number is not zero, if it is than uses the recursion and runs the method again, and then make division of them and prints it to the console
 *
 * \fn division
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>numberOne : (type: float) To save user input</LI>
 *			<LI>numberTwo : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  division();
 *  
 *  \endcode
 */
 void division() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	if (numberTwo == 0) {
 		printf("You can not divide it with 0!!\n");
 		division();
	} else {
	 	/* Output */
	 	printf("Division of your numbers : %0.2f \n", numberOne / numberTwo);
	}	
 }
 

/*
 * Function 	: squareRoot
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its square root
 * Method Type	: void 
 */
/**
 * \brief Function named squareRoot which ask user for a number, finds squareroot of it and prints it to the console
 * 
 * \fn squareRoot
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>number : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  squareRoot();
 *  
 *  \endcode
 */
 
 void squareRoot() {
 	/* Variables */
 	float number;
 	
 	/* User Input */
 	printf("Enter number : ");
 	scanf("%f", &number);
 	
 	/* Output */
 	printf("Square Root of your number : %0.2f \n", sqrt(number));	
 }
  

/*
 * Function 	: square
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its square
 * Method Type	: void 
 */
/**
 * \brief Function named square which ask user for two numbers, make square of it and prints it to the console
 * 
 * \fn square
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>number : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  square();
 *  
 *  \endcode
 */
 void square() {
 	/* Variables */
 	float number;
 	
 	/* User Input */
 	printf("Enter number : ");
 	scanf("%f", &number);
 	
 	/* Output */
 	printf("Square of your number : %0.2f \n", number * number);	
 }
   

/*
 * Function 	: power
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its power
 * Method Type	: void 
 */
 
/**
 * \brief Function named power which ask user for two numbers, make power of them and prints it to the console
 * 
 * \fn power
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>numberOne : (type: float) To save user input</LI>
 *			<LI>numberTwo : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  power();
 *  
 *  \endcode
 */
 void power() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Power of your number : %0.2f \n", pow(numberOne, numberTwo));	
 }
    

/*
 * Function 	: modules
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its modules
 * Method Type	: void 
 */
/**
 * \brief Function named modules which ask user for two numbers, make modules of them and prints it to the console
 * 
 * \fn modules
 * 
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>numberOne : (type: float) To save user input</LI>
 *			<LI>numberTwo : (type: float) To save user input</LI>
 *      </UL>
 *  </P>
 *  \code
 * 
 *  Example of Use Of The Method
 *  
 *  modules();
 *  
 *  \endcode
 */
 void modules() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Modules of your number : %d \n", (int)numberOne % (int)numberTwo);	
 }

/*
 * Function 	: main
 * Attributes 	: none
 * Description  : Calls every method and run them
 * Method Type	: void 
 */
 
  /**
 * \brief main function which runs the program
 * 
 * \fn main
 * 
 *  <P>
 * 		Main functions runs when program runs. <br>
 * 		It prints the instructions and ask for the choice to the user. It uses the while loop to run this calculator continuous. <br>
 *		While loop breaks when user enter 9 in the console. <br>
 *	</P>
 *  <P> 
 * 		<STRONG>Attributes</STRONG> : None <br>
 *  	<STRONG>Function type</STRONG> : Void <br>
 *		<STRONG>Variables</STRONG> : 
 *		<UL>
 *			<LI>userChoice : (type: int) To save user input for the choice of the different options</LI>
 *      </UL>
 *  </P>
 *  
 */
 
 	/* TODD: MAKE README FILE!!!!*/
void main() {
	int userChoice;
	
	while(true) {
		/* Printing instruction */
		printf("\nChoose Your Code : \n  1 - Sum\n  2 - Substract\n  3 - Multiplication\n  4 - Division\n  5 - Square Root\n  6 - Square\n  7 - Power to n\n  8 - Modules\n  9 - Exit\n");
		
		/* Taking User Input */
		printf("Enter Your Choice : ");
		scanf("%d", &userChoice);
		
		/* User Input Validation */
		if (userChoice < 1 || userChoice > 9) {
			printf("Invalid Input!");
		} else {
			switch(userChoice) {
				case 1:
					sum();
					break;
				case 2:
					substract();
					break;
				case 3:
					multiplication();
					break;
				case 4:
					division();
					break;
				case 5:
					squareRoot();
					break;
				case 6:
					square();
					break;
				case 7:
					power();
					break;
				case 8:
					modules();
					break;
				default:
					return;
			}
		}
	}
}
