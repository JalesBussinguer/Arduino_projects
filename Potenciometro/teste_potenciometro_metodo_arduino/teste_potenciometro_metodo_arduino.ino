// Variáveis do pino analógico
int analogPin = A0; // Terminal do meio do potenciômetro ligado ao pino analógico A0
int val = 0; // Variável que guardará o valor lido no pino A0

// Variáveis do led

int led_red = 0;
int novo_val;
int val_porc;

void setup() {
 
  pinMode(led_red, OUTPUT); // led drive variable
  
  Serial.begin(9600); // Configuração da porta serial com um baud de 9600

}

void loop() {

  val = analogRead(analogPin); // Lê o analogPin e guarda em 'val', atualizando a cada loop
  
  novo_val = map(val, 0, 1023, 0, 255);
  val_porc = map(novo_val, 0, 255, 0, 100);

  analogWrite(led_red, novo_val);
  
  Serial.print("potenciometro: "); // Imprime o brilho do led em termos de porcentagem
  Serial.print(val_porc);
  Serial.print(" - ");
  Serial.print("Led: ");
  Serial.println(val); // Imprime o valor na porta serial
  
}
