#include "stm32f103xb.h"
#include "clk_maximizer.h"
#include "uart.h"
int main(){
    
    clock_72MHz();
    usart_init(USART1,9600);
    while(1)
    usart_send_char(USART1, '5');
}