#include "uart_drv.h"
#include "timer_drv.h"
#include "led_driver.h"
#include "systick.h"

#define DELAY	500U

int main(void)
{
	rcc_clock_setup_pll(&rcc_clock_config
		[RCC_CLOCK_VRANGE1_HSI_PLL_24MHZ]);

	sleep_config();
	led_config();
	systick_ms_setup();

	uartDevConfig(&myUartDev, MY_USART_DEVICE, 
		uartRxBuffer, uartTxBuffer, USART_DATA_LEN);

	printf("Programm start\n");
	

	for (;;)
	{
		toogle_green_led(DELAY);
		UartHandleCmd_Task(&myUartDev);
	}
}
