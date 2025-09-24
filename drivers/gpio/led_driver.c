#include "led_driver.h"


/**
 * Data type, Constant and macro definitions
 *
*/

/**
 * Static data declaration
 *
*/

/**
 * Private function prototypes
 *
*/

/**
 * Public functions
 *
*/
void led_config(void)
{
	rcc_periph_clock_enable(RCC_GPIOA);
	gpio_mode_setup(GREEN_LED_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GREEN_LED_PIN);
}

void toogle_green_led(uint16_t delay)
{
	gpio_toggle(GREEN_LED_PORT, GREEN_LED_PIN);
	sleep_ms(delay);
}

/**
 * Private functions
 *
*/

