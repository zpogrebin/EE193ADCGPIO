#include "stm32wlxx.h"
#define LEDPORT (GPIOB)
#define ENABLE_GPIO_CLOCK (RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN)
#define _MODER    MODER

void ms_delay(int ms)
{
   while (ms-- > 0) {
      volatile int x=500;
      while (x-- > 0)
         __asm("nop");
   }
}

//Alternates LEDs Quickly
int main(void)
{   
    ENABLE_GPIO_CLOCK;              // enable the clock to GPIO
    LEDPORT->_MODER = 0xffdfaebf;   // set pins to be general purpose output
    for(;;) {
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
        LEDPORT->ODR = 0x420;
        LEDPORT->ODR = 0x000;
    }
    return 0;
}