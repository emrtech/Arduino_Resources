/*
 * MAY 08, 2017 by GJO
 * 
 * You may use this program freely in any way without any restrictions
 * 
 * This is a simple test program to verify the RS485 hardware functionality.
 * Send any data to the uC and it will echo back the sent character while
 * actuationg the RS485 DIR send enable line. 
 * 
 * It was tested with a PRO-MINI and a RS485 adapter board from eBay uilizing a 
 * MAX485 transceiver. The RS485 port of this interface was conencted to a USB to RS485 converter
 * and TERA TERM for communciation on a PC at 9600 baud.
 * 
 * RS485 Adapter connected to Pro-Mini pins:
 * 
 * RO --------> RXI PIN
 * DE = DI ---> D8 IO Pin 
 * DI <-------- TXO-PIN
 * 
 * If you choose to keep the FTDI USB programming adapter to the Pro-Mini
 * you must put a diode in series with the RO pin of the MAX485 transceiver to prevent 
 * a short circuit. This way you may communicate via the USB serial adapter as well as 
 * the RS485 transceiver, but not at the same time. Connect Anode of 1N4148 to RXI pin 
 * of Pro-Mini and the cathode to the  * RO pin of the NAX485. 
 * 
 * If for some reason you need an active low signal, change RS485_ACTIVE_HIGH to RS485_ACTIVE_LOW
 * 
 * 
 */



#define BAUD_USART 9600
#define RS485_ACTIVE_HIGH 0
#define RS485_ACTIVE_LOW 1
#define RS485DIR_PIN 8
#define RS485_ENABLED 1

char c = 0;   // for incoming serial data

void setup() {
  // initialize serial with RS485 transceiver
  Serial.begin(BAUD_USART, SERIAL_8N1, RS485_ENABLED, RS485DIR_PIN, RS485_ACTIVE_HIGH);

}

void loop() {

  // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming character
    c = Serial.read();
    // send character back to sender
    Serial.print(c);
  }
}



