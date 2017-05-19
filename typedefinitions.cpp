#include "config.h"

substrate cue_user(void){
  substrate sub1;
  cout << "Please enter the substrate thickness: ";
  cin >> sub1.thickness;
  cout << "Please enter the substrate width: ";
  cin >> sub1.width;
  cout << "Please enter the substrate length: ";
  cin >> sub1.length;
  cout << "Please enter the substrate permittivity: ";
  cin >> sub1.epsilon;
  cout << "Please enter the substrate resistivity: ";
  cin >> sub1.resistivity;
  cout << "Please enter the substrate loss tangent: ";
  cin >> sub1.tan_delta;
  cout << "Please enter the substrate desired characteristic impedance: ";
  cin >> sub1.Z0;
  return sub1;
}


void cprint(void){

  u8 u8test = '2';
  u8 u8testarray[] = "WAZUPu8ARRAY\n";
  u32 u32test = 0x0000FFFF;
  double doubletest = 24.15;
  int inttest = 2017;
  printf("Test unsigned long is: %lu\n", u32test);
  printf("Test double is: %f\n", doubletest);
  printf("Test usigned char is: %c\n", u8test);
  printf("Test usigned char array is: %s\n", u8testarray);
  printf("Test int is: %d\n", inttest);
}

void cplusprint(void) {

  string stringtest = "WAZUPSTRING\n";
  u32 u32test = 0x0000FFFF;
  cout << "Test unsigned long is: " << u32test << endl;
  cout << "Test string is:" << stringtest << endl;
}
