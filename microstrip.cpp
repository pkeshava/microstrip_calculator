// MAY 2017 Pouyan Keshavarzian
// Microstrip Line Calculator
// Adapted from Thomas Apperley's matlab script

#include "config.h"

int main(){

substrate substrate1 = cue_user();

cout << substrate1.thickness << "\n";
cout << substrate1.width << "\n";
cout << substrate1.length << "\n";
cout << substrate1.epsilon << "\n";
cout << substrate1.resistivity << "\n";
cout << substrate1.tan_delta << "\n";
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
