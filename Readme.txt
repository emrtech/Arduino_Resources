V1.00 2017-MAY-08
-----------------
Instructions for use of RS485 modified core Serial library:

Simply replace the existing Arduino core Serial library files with the submitted files in this location:

(Example of my setup:)

C:\Program Files (x86)\Arduino_V182\hardware\arduino\avr\cores\arduino\HardwareSerial.cpp
C:\Program Files (x86)\Arduino_V182\hardware\arduino\avr\cores\arduino\HardwareSerial.h

(Note: You may need to make sure you have administrator permissions to replace those files.)

If this is a problem download the ARDUINO ZIPPED Non-Admin version, unzip it and 
replace the Serial.Lib files there before you use the IDE.

You may keep the original files in a safe place for safe keeping, but they must be removed from the folder.

Make sure Arduino IDE is not running.

A simple example test program is included to test your RS485 setup.

The IDE should probaby be no earlier than V1.65. It was tested with the current IDE version V1.82

The program was tested with:

ARDUINO PRO-MINI CLONE running at 8MHz
RS485 transceiver board from eBay utilizing a MAX485 transceiver IC (Refer also to example program comments)
PRo-MINI IO LINE D8 was used for DIR control, TXI/TXO for serial data connection
USB to RS485 adapter utilizing FTDI232RL and MAX483 transceiver. Terminated in 120 Ohm
TERATERM terminal program at 9600 baud
FTDI based USB serial cable to program Pro-Mini utilizing boot loader
------------------------------------------------------------------------------------------------------------
