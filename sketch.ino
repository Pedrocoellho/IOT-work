int pirPin = 12;  // Pino do sensor PIR
int ledPin = 4;   // Pino do LED
int pirState = 0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  pirState = digitalRead(pirPin);  // Lê o estado do sensor PIR
  if (pirState == HIGH) {
    Serial.println("Movimento detectado!");
    digitalWrite(ledPin, HIGH);  // Acende o LED
    simulateSendEventToTagoIO();  // Função simulada
    delay(10000);  // Evita leituras rápidas demais
  } else {
    digitalWrite(ledPin, LOW);  // Desliga o LED
  }
  delay(500);  // Pequeno atraso
}

void simulateSendEventToTagoIO() {
  // Simulação do envio de dados
  Serial.println("Simulando envio de dados ao TagoIO...");
  Serial.println("{\"variable\": \"movimento\", \"value\": 1, \"unit\": \"none\"}");
  
  // Simulação de uma resposta de sucesso
  Serial.println("Evento simulado registrado com sucesso!");
}
