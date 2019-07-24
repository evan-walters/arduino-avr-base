#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
 
int main()
{
  DDRB = 0b000011;   // output: digital pins 8 and 9
  DDRC = 0b110111;   // input: analog pin 2

  while(1)
  {
    int val = 
    PORTB = 0b000001;
    _delay_ms(val);
    PORTB = 0b000010;
    _delay_ms(val);
  }
}
