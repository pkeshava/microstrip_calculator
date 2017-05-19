#ifndef typedefinitions_h
#define typedefinitions_h

typedef char CHAR;                   // Signed 8 bits
typedef unsigned char UCHAR;         // Unsigned 8 bits
typedef short SHORT;                 // Signed 16 bits
typedef unsigned short USHORT;       // Unsigned 16 bits
typedef long LONG;                   // Signed 32 bit
typedef unsigned long ULONG;         // unsigned 32 bit
typedef bool BOOL;                   // BOOLEAN VALUE!!!!

typedef long s32;
typedef short s16;
typedef signed char  s8;

typedef const long sc32;            // Read Only
typedef const short sc16;           // Read Only
typedef const char sc8;             // Read Only

typedef ULONG  u32;                 // Read Only
typedef USHORT u16;                 // Read Only
typedef UCHAR  u8;                  // Read Only

typedef const ULONG uc32;           // Read Only
typedef const USHORT uc16;          // Read Only
typedef const USHORT uc8;           // Read Only

// Not sure why this code is here... bool is already a tpye in C++... INVESTIGATE
// Perhaps just to show that
#ifndef __cplusplus
typedef enum {FALSE = 0, TRUE = !FALSE} bool;
#endif
// These are not strictly necessary but might be useful
typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;
typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;

typedef struct substrate {
     double thickness;
     double width;
     double length;
     double epsilon;
     double resistivity;
     double tan_delta;
     double frequency;
     double Z0;
} substrate;

void cprint(void);
void cplusprint(void);
substrate cue_user(void);


#endif                              // typedefinitions.h
