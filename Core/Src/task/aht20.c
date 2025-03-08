#include "main.h"
#include "cmsis_os.h"

#include "aht20.h"

#include "common.h"


void StartAht20Task(void const * argument)
{
  AHT20_Data_t aht20_data;

  for(;;)
  {
	AHT20_Read(&(aht20_data.temp), &(aht20_data.humid));

	xQueueSend((QueueHandle_t) argument, ( void * ) &aht20_data, 0);

    osDelay(1000);
  }
}
