
#include "Arduino_Slave_RTU_Serial.h"

Arduino_Slave_RTU_Serial xx;

void setup() {
  // put your setup code here, to run once:
  xx.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  xx.fullHanlde();

  static long last_time = millis();
  if(millis() - last_time > 1)
  {
    analog_output_holding_register_list[0]+=2;
    analog_output_holding_register_list[1]+=3;
    analog_output_holding_register_list[2]+=4;
    analog_output_holding_register_list[3]+=5;
    analog_output_holding_register_list[4]+=6;

    last_time = millis();
  }
  
}
