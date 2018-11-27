
#include "Arduino_Slave_IP_Serial.h"

Arduino_Slave_IP_Serial xx;

void setup() {
  // put your setup code here, to run once:
  xx.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xx.fullHanlde();

  

  static long last_time = millis();
  if(millis() - last_time > 10)
  {
    slave_analog_output_holding_register_list[0]+=2;
    slave_analog_output_holding_register_list[1]+=3;
    slave_analog_output_holding_register_list[2]+=4;
    slave_analog_output_holding_register_list[3]+=5;
    slave_analog_output_holding_register_list[4]+=6;
    slave_analog_output_holding_register_list[5]+=2;
    slave_analog_output_holding_register_list[6]+=3;
    slave_analog_output_holding_register_list[7]+=4;
    slave_analog_output_holding_register_list[8]+=5;
    slave_analog_output_holding_register_list[9]+=6
    last_time = millis();
  }
  
}
