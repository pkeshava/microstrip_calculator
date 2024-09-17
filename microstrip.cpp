// MAY 2017 Pouyan Keshavarzian
// Microstrip Line Calculator

#include "config.h"

int main(){
// Ask user for substrate parameters
substrate substrate1 = cue_user();

double omega = 2*PI*substrate1.frequency;
double lamda = c/substrate1.frequency;
double wavenumber = omega/c;

// state 1 where w/h is greater than 2

// state 2 where w/h is less than 2

return 0;

}


/*------ sample code -----------------
typedef struct modulation {
   char* QPSK;
   int q;
} mod;

int x[]= {1,2,3,4,5};
printf("Hello Emacs World!\n");
int y = x[2];
printf("y = %d \n", y);
int z = 5;
int dild = 2;
mod mod1 = {"QPSK",256};
printf("The modulation type is %s, %d \n", mod1.QPSK, mod1.q);
----------

*/
