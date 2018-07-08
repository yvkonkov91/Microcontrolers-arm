#include "main.h"

#define LED (1<<P5)

static void delay(unsigned int t)
{
    while(t--);
}

int main( void )
{
    // GPIO setup
    PB_DDR|=(LED);
    PB_CR1|=(LED);
    // main loop
    for(;;){
        PB_ODR ^= (LED);
        delay(0xffff);
    }
}
