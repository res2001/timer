/***************************************************************************//**
  @ingroup timer
  @defgroup timer_linux Порт таймера для Linux
  Порт для работы с таймером в ОС Linux. Для получения системного счетчика
  использует функцию clock_gettime() из librt для получения MONOTONIC CLOCK,
  который нельзя устанавливаеть и дает приемлимую точность.
  *****************************************************************************/
/***************************************************************************//**
  @ingroup timer_linux
  @file ports/linux/clock_arch.h
  Файл содержит определение типов и констант для работы с системным счетчиком
  в OC Linux через функцию clock_gettime().
  @date 10.06.2011
  @author Borisov Alexey <borisov@lcard.ru>
 ******************************************************************************/

#ifndef CLOCK_ARCH_H_
#define CLOCK_ARCH_H_

#include "stdint.h"

/* Возвращаем счетчик в милисекундах, хотя clock_gettime может дать нс,
   но реально они не изменяются + с мс сохраняется достаточное время 
   переполнения для 32-битного счетчика */
#define CLOCK_CONF_SECOND 1000

/* для простоты и скорости операций используем 32-битное слово */
typedef uint32_t t_clock;

#endif /* CLOCK_ARCH_H_ */
