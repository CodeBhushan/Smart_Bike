#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); // RX | TX
int i =0;
void setup()
{//connect key pin of HC05 to VCC to bring HC05 in AT command mode.... In Hc06 it might not be required/////////////////////just plug the board to laptop and upload the program, and it will work
  pinMode(4, OUTPUT);  // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
//digitalWrite(4, LOW);
  //delay(13333);
//  digitalWrite(4, HIGH);
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTSerial.begin(38400);  // HC-05 default speed in AT command more
//BTSerial.begin(9600);

}

void loop()
{
  if ( i ==0){
BTSerial.write("AT\r\n");
delay(100);
BTSerial.write("AT+VERSION\r\n");
delay(100);
  }
  i++;
  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available())
    Serial.write(BTSerial.read());

  // Keep reading from Arduino Serial Monitor and send to HC-05
  //if (Serial.available())
   // BTSerial.write(Serial.read());
    //delay(7000);
}
