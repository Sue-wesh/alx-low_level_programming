#include <stdio.h>
/**
 * findSign - if n  is neg or pos
 *
 * @n : the number that we check if its neg or pos
 *
 * Return : value returned or '0'
 *
 */
int findSign(int n){

	if (n>0){
		printf("It is positive");
	}
	else if(n==0){
		printf("It is 0");
	}
	else{
		printf("it is negative");
	}
	return (0);
}
       	
