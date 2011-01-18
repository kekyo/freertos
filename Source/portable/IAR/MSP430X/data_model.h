/*
    FreeRTOS V6.1.1 - Copyright (C) 2011 Real Time Engineers Ltd.

    ***************************************************************************
    *                                                                         *
    * If you are:                                                             *
    *                                                                         *
    *    + New to FreeRTOS,                                                   *
    *    + Wanting to learn FreeRTOS or multitasking in general quickly       *
    *    + Looking for basic training,                                        *
    *    + Wanting to improve your FreeRTOS skills and productivity           *
    *                                                                         *
    * then take a look at the FreeRTOS books - available as PDF or paperback  *
    *                                                                         *
    *        "Using the FreeRTOS Real Time Kernel - a Practical Guide"        *
    *                  http://www.FreeRTOS.org/Documentation                  *
    *                                                                         *
    * A pdf reference manual is also available.  Both are usually delivered   *
    * to your inbox within 20 minutes to two hours when purchased between 8am *
    * and 8pm GMT (although please allow up to 24 hours in case of            *
    * exceptional circumstances).  Thank you for your support!                *
    *                                                                         *
    ***************************************************************************

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation AND MODIFIED BY the FreeRTOS exception.
    ***NOTE*** The exception to the GPL is included to allow you to distribute
    a combined work that includes FreeRTOS without being obliged to provide the
    source code for proprietary components outside of the FreeRTOS kernel.
    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
    more details. You should have received a copy of the GNU General Public
    License and the FreeRTOS license exception along with FreeRTOS; if not it
    can be viewed here: http://www.freertos.org/a00114.html and also obtained
    by writing to Richard Barry, contact details for whom are available on the
    FreeRTOS WEB site.

    1 tab == 4 spaces!

    http://www.FreeRTOS.org - Documentation, latest information, license and
    contact details.

    http://www.SafeRTOS.com - A version that is certified for use in safety
    critical systems.

    http://www.OpenRTOS.com - Commercial support, development, porting,
    licensing and training services.
*/

#ifndef DATA_MODEL_H
#define DATA_MODEL_H

#ifdef __DATA_MODEL_SMALL__
	#define pushm_x pushm.w
	#define popm_x popm.w
	#define push_x push.w
	#define pop_x pop.w
	#define mov_x mov.w
	#define cmp_x cmp.w
#endif

#ifdef __DATA_MODEL_MEDIUM__
	#define pushm_x pushm.a
	#define popm_x popm.a
	#define push_x pushx.a
	#define pop_x popx.a
	#define mov_x mov.w
	#define cmp_x cmp.w
#endif

#ifdef __DATA_MODEL_LARGE__
	#define pushm_x pushm.a
	#define popm_x popm.a
	#define push_x pushx.a
	#define pop_x popx.a
	#define mov_x movx.a
	#define cmp_x cmpx.a
#endif

#ifndef pushm_x
	#error The assembler options must define one of the following symbols: __DATA_MODEL_SMALL__, __DATA_MODEL_MEDIUM__, or __DATA_MODEL_LARGE__
#endif

#endif /* DATA_MODEL_H */

