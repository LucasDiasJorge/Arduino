#include <TM1637Display.h>

// Configurando o display de 7 segmentos
const int CLK = 6;
const int DIO = 5;
TM1637Display display(CLK, DIO);

// Pino de entrada analógica para o sensor LM35
const int sensorPin = A0;

void setup() {
  // Inicialização do display
  display.setBrightness(0x0f);  // Ajuste o brilho (0x00 a 0x0f)
}

void loop() {
  // Lendo a temperatura do sensor LM35
  int sensorValue = analogRead(sensorPin);
  float temperatureC = (sensorValue * 5.0 / 1024.0) * 100.0;

  // Exibindo a temperatura no display de 7 segmentos
  display.showNumberDec(temperatureC);

  // Aguarde um curto intervalo
  delay(1000);
}
