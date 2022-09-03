/**
 ****************************************************************************************
 *   @file          : range.h
 *   @author        : Ahmed Ali
 *   @brief         : Create range function to use it instead of range operator.
 *	 @date			: 3 / 9 / 2022 
 ****************************************************************************************
*/

#ifndef RANGE_H_
#define RANGE_H_

/* ****************************** Includes Section Start **************************** */
#include <stdlib.h>
/* ****************************** Includes Section End **************************** */

/* ****************************** prototypes Section Start **************************** */
int range(signed int Switch_Val, signed int Start_Val, signed int End_Val);
/* ****************************** prototypes Section Start **************************** */

/* ****************************** sub-program Section Start **************************** */
int range(signed int Switch_Val, signed int Start_Val, signed int End_Val)
{
	if(Start_Val < End_Val)
	{
		while(Start_Val <= End_Val)
		{
			if(Start_Val == Switch_Val) 
			{
				return 1;
				break;
			}
			else {}
			Start_Val++;
		}
	}
	else if(Start_Val > End_Val)
	{
		while(Start_Val >= End_Val)
		{
			if(Start_Val == Switch_Val) 
			{
				return 1;
				break;
			}
			else {}
			Start_Val--;
		}
	}
	else if(Start_Val == End_Val)
	{
		if(Start_Val == Switch_Val)
		{
			return 1;
			exit(1);
		}
		else {}
	}
	else {}
	
	return 0;
}
/* ****************************** sub-program Section End **************************** */

#endif /* RANGE_H_ */
