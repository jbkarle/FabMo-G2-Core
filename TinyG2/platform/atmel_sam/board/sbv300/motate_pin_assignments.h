/*
 * http://tinkerin.gs/
 *
 * Copyright (c) 2013 Robert Giseburt
 * Copyright (c) 2013 Alden S. Hart Jr.
 *
 * This file is part of the Motate Library.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software. If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef motate_pin_assignments_h
#define motate_pin_assignments_h

#include <MotateTimers.h>

namespace Motate {

	_MAKE_MOTATE_PORT32(A, 'A');
	_MAKE_MOTATE_PORT32(B, 'B');
	_MAKE_MOTATE_PORT32(C, 'C');
	_MAKE_MOTATE_PORT32(D, 'D');
    
	// STEP Pins
	_MAKE_MOTATE_PIN(0, C, 'C', 28);	// XSTEP
	_MAKE_MOTATE_PIN(1, C, 'C', 25);	// YSTEP
	_MAKE_MOTATE_PIN(2, C, 'C', 26);	// ZSTEP
	_MAKE_MOTATE_PIN(3, C, 'C', 23);	// ASTEP
	_MAKE_MOTATE_PIN(4, C, 'C', 24);	// BSTEP
	_MAKE_MOTATE_PIN(5, B, 'B', 1);	    // CSTEP
	
	// DIR Pins
	_MAKE_MOTATE_PIN(6, B, 'B', 23);	// XDIR
	_MAKE_MOTATE_PIN(7, B, 'B', 24);	// YDIR
	_MAKE_MOTATE_PIN(8, B, 'B', 14);	// ZDIR
	_MAKE_MOTATE_PIN(9, B, 'B', 22);	// ADIR
	_MAKE_MOTATE_PIN(10, C, 'C', 27);	// BDIR
	_MAKE_MOTATE_PIN(11, B, 'B', 0);	// CDIR
	
	// LEDS
	_MAKE_MOTATE_PIN(12, C, 'C', 9);	// USB RXLED (D2 BLUE)
//	_MAKE_MOTATE_PIN(13, B, 'B', 27);	// USB TXLED (D1 WHITE)
	
	//  SPINDLE OUTPUTS
	_MAKE_MOTATE_PIN(14, A, 'A', 0);	// SPINDLE ENABLE (POUT1)
	_MAKE_MOTATE_PIN(15, D, 'D', 7);	// SPINDLE "ALLOW" (POUT4)
	
	// INPUTS
	_MAKE_MOTATE_PIN( 16, B, 'B', 4 );
	_MAKE_MOTATE_PIN( 17, B, 'B', 5 );
	_MAKE_MOTATE_PIN( 18, C, 'C', 10 );
	_MAKE_MOTATE_PIN( 19, B, 'B', 3 );
	_MAKE_MOTATE_PIN( 20, B, 'B', 8 );
	_MAKE_MOTATE_PIN( 21, B, 'B', 9 );
	_MAKE_MOTATE_PIN( 22, B, 'B', 6 );
	_MAKE_MOTATE_PIN( 23, B, 'B', 7 );
	_MAKE_MOTATE_PIN( 24, D, 'D', 2 );
	_MAKE_MOTATE_PIN( 25, A, 'A', 9 );
	_MAKE_MOTATE_PIN( 26, D, 'D', 1 );
	_MAKE_MOTATE_PIN( 27, A, 'A', 17 );

	// OUTPUTS
   _MAKE_MOTATE_PIN(28, A, 'A', 15); //coolant  flood
   _MAKE_MOTATE_PIN(29, A, 'A', 14);	//coolant mist
      
   _MAKE_MOTATE_PIN(30, A, 'A', 12);	// PWM1
   _MAKE_MOTATE_PWM_PIN(30, Motate::PWMTimer<1>, /*Channel:*/ A, /*Peripheral:*/ B, /*Inverted:*/ false); 
   
   _MAKE_MOTATE_PIN(31, A, 'A', 13);	// PWM0
   _MAKE_MOTATE_PWM_PIN(31, Motate::PWMTimer<2>, /*Channel:*/ A, /*Peripheral:*/ B, /*Inverted:*/ true);

	// OUTPUTS

	_MAKE_MOTATE_PIN(32, D, 'D', 8); //POUT3
	_MAKE_MOTATE_PIN(33, D, 'D', 6); //POUT5-12
	_MAKE_MOTATE_PIN(34, D, 'D', 5);
	_MAKE_MOTATE_PIN(35, D, 'D', 4);
	_MAKE_MOTATE_PIN(36, D, 'D', 3);
//	_MAKE_MOTATE_PIN(37, A, 'A', 8); //POUT9 
	_MAKE_MOTATE_PIN(38, A, 'A', 7);
	_MAKE_MOTATE_PIN(39, A, 'A', 5);
	_MAKE_MOTATE_PIN(40, A, 'A', 1);

	_MAKE_MOTATE_PIN(13, B, 'B', 27); //LEDS
	_MAKE_MOTATE_PIN(41, A, 'A', 21); 
	_MAKE_MOTATE_PIN(42, C, 'C', 30);
	_MAKE_MOTATE_PIN(43, A, 'A', 18);
	_MAKE_MOTATE_PIN(44, A, 'A', 19);


} // namespace Motate

#ifdef MOTATE_BOARD
#define MOTATE_BOARD_PINOUT < MOTATE_BOARD-pinout.h >
#include MOTATE_BOARD_PINOUT
#else
#error Unknown board layout
#endif

#endif

// motate_pin_assignments_h
