/*
 *	File:	"uEliece-settings.h"
 *	Version: 0.7_alpha
 *
 * GitHub:
 * 	https://github.com/Argentus/uEliece
 *
 * by authors:
 *		# Radovan Bezak
 *		radobezak@gmail.com
 *
 * 2016
 *----------------------------------------------------- 
 *
 * 
 *-----------------------------------------------------
 */

#ifndef UELIECE_SETTINGS_H
#define UELIECE_SETTINGS_H

#include "uEliece.h"

/*
*	
*
*/

// YOU PROBABLY DON'T NEED TO CHANGE THIS:
const uEl_256bit uEL_ICK = 	{		// Integrity check constant
				0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
				0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
				0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
				0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80
				};	

// BIT FLIPPING PARAMETERS:

#define UEL_BFA_MAX 13
const uint8_t uel_bfa_flip_thresh[] = {43, 42, 41, 40, 39, 45, 44, 43, 42, 47, 46, 45};

#endif //UELIECE_SETTINGS_H


