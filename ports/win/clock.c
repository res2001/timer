/*
 * systicks.c
 *
 */

#include "clock.h"


/*************************************************************************
 * инициализация системного таймера. не требуется
 * ***********************************************************************/
void clock_init_val(t_clock init_val)
{

}


//получить кол-во системных тиков
t_clock clock_time(void)
{
    return GetTickCount();
}



