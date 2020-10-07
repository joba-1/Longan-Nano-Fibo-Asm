#include <usart.h>
#include <power.h>
#include <stdio.h>

// assembler function in fibo.S 
// passing and returning value in a0 register
extern uint32_t fibo( uint32_t n );


void init_usart0() {
    usart_init(USART0, 115200);
    printf("Fibo V2 10/2020\n\r");
}


int main(void) {
    init_usart0();

    for( uint32_t n = 0; 1; n++ ) {

        uint32_t f = fibo(n);
        
        if( f == 0xffffffff ) break; // overflow

        printf("fibonacci number %lu is %lu\n", n, f);
    }

    printf("bye!\n");
    power_down();
}


int _put_char( int ch ) {
    return usart_put_char(USART0, ch);
}
