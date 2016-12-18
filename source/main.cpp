#include "stm32f103c8t6.h"
#include "mbed.h"

int main() {
    confSysClock();

    DigitalOut myLed(LED1);

    for(;;) {
        myLed = 0;
        wait_ms(200);
        myLed = 1;
        wait_ms(200);
    }
}
