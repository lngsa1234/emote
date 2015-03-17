/**

  The Samraksh Company
  Nathan Stohs (nathan.stohs@samraksh.com)
  2012-04-20

  A USB-serial virtual com port driver for TinyOS.
  Based off the STM USB Virtual Com Port example.

 */

#include <misc.h>
#include "serial.h"
#include "usart_conf.h"

module UsartSerialC {
  provides {
    interface Init;
    interface UartStream;
  }
}
implementation {

    command error_t Init.init() {
		SER_Init ();  
    return SUCCESS;
    }
    
async command error_t UartStream.send(uint8_t *buf, uint16_t len) {
	int i;
	for (i=0; i<len; i++) {
		SER_PutChar(buf[i]);
	}
	return SUCCESS;
}

// Due to interface spec, must always return fail
// because we are interrupt based
async command error_t UartStream.receive( uint8_t* buf, uint16_t len ) {
	return FAIL;
}

// No effect, forced interrupt
async command error_t UartStream.enableReceiveInterrupt() {
	return FAIL;
}

// No effect, forced interrupt
async command error_t UartStream.disableReceiveInterrupt() {
	return FAIL;
}



void USART1_IRQHandler() @spontaneous() @C() {
	USART1_irt();
}

/*
void UsbSerialByte(uint8_t b) @spontaneous() @C() {
	signal UartStream.receivedByte( b );
}

void UsbSerialRxDone( uint8_t* buf, uint16_t len ) @spontaneous() @C() {
	signal UartStream.receiveDone( buf, len, SUCCESS );
}
*/
}
