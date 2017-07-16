/*
 ============================================================================
 Name        : HexToIEEEFloat.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <math.h>
#include "HexToIEEEFloat.h"

#define CHECK_BIT(var, pos)		(var & (1 << pos))

IEEEFloat new_float;

double hexToIEEEFloat(uint32_t value) {

	double new_value = 1;
	uint8_t power_index = 1;

	/* Store value into struct */
	new_float.value = value;

	/* Add Fractional Part */
	for (int i = 22; i >= 0; i--) {

		if (CHECK_BIT(new_float.mantissa, i)) {
			new_value += pow(2.0, -power_index);
		}

		power_index++;
	}

	/* Multiply exponential */
	new_value *= pow(2.0, new_float.exponent-127);

	/* Return negative value is sign bit is 1 */
	return new_float.sign ? -new_value : new_value;
}
