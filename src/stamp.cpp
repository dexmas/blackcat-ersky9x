#include <stdint.h>
#include "ersky9x.h"

#define STR2(s) #s
#define DEFNUMSTR(s)  STR2(s)

//const char stamp1[] = "VERS: V" /*DEFNUMSTR(VERS)*/ "." DEFNUMSTR(SUB_VERS);
//const char stamp2[] = "DATE: " DATE_STR;
//const char stamp3[] = "TIME: " TIME_STR;
//const char stamp4[] = " SVN: " SVN_VERS;
//const char stamp5[] = " MOD: " MOD_VERS;

const char Stamps[] = "VERS: " /*DEFNUMSTR(VERS)*/ "X.X.X" "\037"\
"DATE: " __DATE__"\037"\
"TIME: " __TIME__ "\037"\
//" SVN: " SVN_VERS "\037"
" MOD: " "9XR Pro";

