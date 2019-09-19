#include <EEPROM.h>

String read_String(char add);


void setup() {
  Serial.begin(9600);
  EEPROM.begin(512);

  String recivedData;
  recivedData = read_String(0);
  Serial.print("Read Data:");
  Serial.println(recivedData);
}

void loop() {
}


String read_String(char add)
{
  int i;
  char data[100]; //Max 100 Bytes
  int len = 0;
  unsigned char k;
  k = EEPROM.read(add);
  while (k != '\0' && len < 500) //Read until null character
  {
    k = EEPROM.read(add + len);
    data[len] = k;
    len++;
  }
  data[len] = '\0';
  return String(data);
}
