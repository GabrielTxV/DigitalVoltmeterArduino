void setup() {
  Serial.begin(9600);  // Inicia a comunicação serial a 9600 bps
}

void loop() {
  int analogValue = analogRead(A0);  // Ler o valor analógico do pino A0
  float voltagem = analogValue * (5.0 / 1023.0);  // Converter para tensão (5V referência)
  voltagem = voltagem * 4.99;  // Ajustar para a escala do divisor de tensão
  //Resistores : R1= 47K        R2= 12K

  Serial.print("Tensão: ");
  Serial.print(voltagem);
  Serial.println(" V");

  delay(1000);  // Atraso de 1 segundo antes da próxima leitura
}
