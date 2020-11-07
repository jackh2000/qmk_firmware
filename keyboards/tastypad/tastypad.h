#pragma once

#include "quantum.h"

/* Layout visualization.
 * 
 * First section is all arguments representing the physical
 * layout of the board and position of keys.
 *
 * Second section converts arguments into a 2D array representing
 * the switch matrix.
 */

#define LAYOUT( \
	     K00, K01, K02, K03, \
	     K10, K11, K12, K13, \
	     K20, K21, K22, K23, \
	K30, K31, K32, K33, K34, \
	K40, K41, K42, K43, K44  \
) \
{ \
	{ KC_NO, K00, K01, K02, K03 }, \
	{ KC_NO, K10, K11, K12, K13 }, \
	{ KC_NO, K20, K21, K22, K23 }, \
	{   K30, K31, K32, K33, K34 }, \
	{   K40, K41, K42, K43, K44 }  \
}
