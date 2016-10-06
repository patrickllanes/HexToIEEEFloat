/*
 * main.c
 *
 *  Created on: Oct 5, 2016
 *      Author: patrick
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "HexToIEEEFloat.h"

#define TEST_VALUE		0x42bc23de

int main(void) {

	printf("%#x to IEEE Float: %f\n", TEST_VALUE, hexToIEEEFloat(TEST_VALUE));

	return EXIT_SUCCESS;
}


