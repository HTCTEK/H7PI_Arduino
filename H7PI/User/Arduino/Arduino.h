#ifndef Arduino_h
#define Arduino_h

#ifdef __cplusplus
extern "C"{
#endif
	
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#include "analog.h"
#include "digital.h"
#include "time.h"

#include "board.h"


	void setup();
	void loop();
	
#ifdef __cplusplus
}

#endif //end of cpp
	
#endif //all the file 
