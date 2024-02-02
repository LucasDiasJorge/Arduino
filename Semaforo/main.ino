// Definindo os pinos dos LEDs
int redLED = 2;
int yellowLED = 3;
int greenLED = 4;

void setup() {
  // Configurando os pinos dos LEDs como saídas
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Semáforo: Vermelho
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(5000);  // Aguarde 5 segundos

  // Semáforo: Amarelo
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(2000);  // Aguarde 2 segundos

  // Semáforo: Verde
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(5000);  // Aguarde 5 segundos
}
