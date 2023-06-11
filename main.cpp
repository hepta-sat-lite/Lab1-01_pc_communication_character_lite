#include "mbed.h"
RawSerial pc(USBTX,USBRX,9600);
int main()
{
    char a,b;
    a = 'A';
    pc.putc(a);
    for(int i=0;i<10;i++) {
        pc.printf("\r\n i=%d -- press any key -->",i);
        b = pc.getc();
        pc.putc(b);
        wait_ms(500);
    }
    pc.printf("\r\n End of program\r\n");
}
   