# H7PI_Arduino



### What is H7PI_Arduino
H7PI_Arduino is a project for H7PI developers who use arduino for coding.


### Feature
* Based on STM32Cube HAL lib.
* MDK Keil support.
* STM32CubeMx support for initial code generation.
* Arduino IDE support (future).
* Serial com and USB Mass Storage for firmware update.
* 8M QSPI Flash for app running.

### What Has Worked
* digitalWrite,digitalRead
* analogRead,analogReadVoltage
* delay,delayMicroSenconds
* USB MassStorage and USB CDC(virtual com)
* SD Card and On Board flash filesystem
* USBSerial as default debug serialport

### How to use
1. Download [H7PI_MultiBootloader](https://github.com/PinoDM/H7PI_MultiBootloader) project, compile and burn into H7PI. 
2. Download this project, edit your own app code, compile and burn into H7PI.

### Use Multiple Thread
[H7PI_Samples](https://github.com/PinoDM/H7PI_Samples) support freeRTOS and now add an entry for arduino users, you can develop your app with multiple thread.