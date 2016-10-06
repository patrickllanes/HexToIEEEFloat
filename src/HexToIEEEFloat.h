/*
 * HexToIEEEFloat.h
 *
 *  Created on: Oct 5, 2016
 *      Author: patrick
 */

#ifndef HEXTOIEEEFLOAT_H_
#define HEXTOIEEEFLOAT_H_

#include <stdint.h>

typedef union {
	uint32_t value;
	struct {
		unsigned mantissa : 23;
		unsigned exponent : 8;
		unsigned sign 	  : 1;
	};
}IEEEFloat;

extern IEEEFloat new_float;

double hexToIEEEFloat(uint32_t value);

#endif /* HEXTOIEEEFLOAT_H_ */
