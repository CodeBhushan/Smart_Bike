# Smart_Bike
This project is about integrating Bike with android phone via Bluetooth, in order to display incoming calls, mobile-battery-percentage etc on LCD present on Bike. Also accelerometer needs to be attached on bike to sense the accident and send message/signal to corresponding relatives via android-phone.

Bluetooth module used is HC05, which is connected to Atmega32 microcontroller. 16*2 LCD and various switches and LEDs and acceleromater are connected to same microcontroller.

Signal/Message flow from android phone via bluetooth to microcontroller, which depending on signals show messages on LCD or glow the indicator LEDs.

Switches connected to microcontroller are also used to generate signal like cancelling incoming call, which is sent by micro-controller to android-phone to take the required action.
