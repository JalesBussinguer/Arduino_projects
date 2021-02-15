// Variáveis do pino analógico
int analogPin = A0; // Terminal do meio do potenciômetro ligado ao pino analógico A0
int val = 0; // Variável que guardará o valor lido no pino A0

// Variáveis do led

int led_red = 0;

void setup() {
  pinMode(led_red, OUTPUT); // led drive variable
  
  Serial.begin(9600); // Configuração da porta serial com um baud de 9600

}

void loop() {

  val = analogRead(analogPin); // Lê o analogPin e guarda em 'val', atualizando a cada loop
  
  if (val < 205) {
    analogWrite(led_red, 52);
  }
  else if (205 < val < 410){
    analogWrite(led_red, 104);
  }
  else if (410 < val < 615){
    analogWrite(led_red, 156);
  }
  else if (615 < val < 820){
    analogWrite(led_red, 208);
  }
  else if (820 < val < 1024){
    analogWrite(led_red, 255);
  }
  
  Serial.print("potenciometro ");
  Serial.println(val); // Imprime o valor na porta serial
  
}
