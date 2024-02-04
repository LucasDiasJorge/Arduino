#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Configurações do sensor DHT11
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Configurações do display LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Endereço I2C 0x27, 16 colunas, 2 linhas

void setup() {
  // Inicialização do sensor DHT e do display LCD
  dht.begin();
  lcd.begin(16, 2);

  // Mensagem inicial no display
  lcd.print("Temp:    C  Umidade: %");
}

void loop() {
  // Leitura da temperatura e umidade do sensor DHT11
  float temperatureC = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Atualização no display LCD
  lcd.setCursor(6, 0);
  lcd.print(temperatureC, 1);  // Uma casa decimal para a temperatura
  lcd.setCursor(15, 0);
  lcd.print((char)223);  // Símbolo de grau Celsius
  lcd.setCursor(9, 1);
  lcd.print(humidity, 1);  // Uma casa decimal para a umidade
  lcd.setCursor(14, 1);
  lcd.print("%");

  // Aguarde alguns segundos entre as leituras
  delay(2000);
}
