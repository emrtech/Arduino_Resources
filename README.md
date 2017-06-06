# Arduino Core Serial Library Modification to support RS485 TX control

This modification adds RS485 control to the regular Arduino IDE core libraries. By replacing a couple of files, RS485 TX hardware control is possible without requiring the user to add additional control statements. Any normally available Arduino IO pin can be chosen to drive the TX line of a typical RS485 transceiver IC such as MAX485.


