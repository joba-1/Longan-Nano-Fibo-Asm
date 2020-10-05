#include <usart.h>
#include <stdio.h>


// assembler function in fibo.S 
// passing and returning value in a0 register
extern uint32_t fibo( uint32_t n );


void init_usart0() {
    usart_init(USART0, 115200);
    printf("Fibo V1 10/2020\n\r");
}


int main(void) {
    init_usart0();

    for (uint32_t n = 0; n < 50; n++ ) {
        printf("fibonacci number %2lu is %4lu\n", n, fibo(n));
    }

    printf("bye!\n");
    while (1);
}


int _put_char(int ch) {
    return usart_put_char(USART0, ch);
}
