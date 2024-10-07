#include <LiquidCrystal.h> //Inclui a biblioteca do LCD


LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2); //Configura os pinos do Arduino para se comunicar com o LCD


int ledGreen = 13; // Define o pino do led verde
int ledYellow = 9; // Define o pino do led amarelo
int ledRed = 8; // Define o pino do led vermelho
int buzzer = 7; // Define o pino do buzzer
float intensidadeLuz; // Cria a variavel intensidadeLuz

  void setup () {
Serial.begin (9600); // Inicializa a comunicação serial com a taxa de 9600 bps
pinMode (ledGreen, OUTPUT); // Define o led verde como saida
pinMode (ledYellow, OUTPUT); // Define o led amarelo como saida
pinMode (ledRed, OUTPUT); // Define o led vermelho como saida
pinMode (buzzer, OUTPUT); // Define o buzzer como saida
lcd.begin(16,2); // Inicializa o LCD com 16 colunas e 2 linhas
}
 
void loop() {
 int LDR = analogRead (A0); // Lê o valor do sensor LDR conectado ao pino A0

 // Imprime a intensidade da luz no monitor serial
 Serial.print ("Intensidade da Luz: ");
 Serial.println (intensidadeLuz);
 Serial.println(LDR);
 // Mapeia o valor lido do LDR 
 intensidadeLuz = map(LDR,382, 958, 0, 100);
  
  // Condições para acender os LEDs e o buzzer com base na intensidade da luz
  if (intensidadeLuz <20){
    digitalWrite(ledGreen, HIGH); // Acende o LED verde
    digitalWrite(ledYellow, LOW); // Apaga o LED amarelo
    digitalWrite(ledRed, LOW); // Apaga o LED vermelho
    digitalWrite(buzzer, LOW); // Apaga o buzzer
  }
  else if(intensidadeLuz >= 21 && intensidadeLuz < 70){
    digitalWrite(ledGreen, LOW); // Apaga o LED verde
    digitalWrite(ledYellow, HIGH); // Acende o LED amarelo
    digitalWrite(ledRed, LOW); // Apaga o LED vermelho
    digitalWrite(buzzer, HIGH); // Acende o buzzer
    delay(100); // Mantém o buzzer ligado por 100 ms
    digitalWrite(buzzer,LOW); // Apaga o buzzer
    delay(150); // Espera 150 ms antes de repetir
  }
  else{
    digitalWrite(ledGreen, LOW); // Apaga o LED verde
    digitalWrite(ledYellow, LOW); // Apaga o LED amarelo
    digitalWrite(ledRed, HIGH); // Acende o LED vermelho
    digitalWrite(buzzer, HIGH); // Acende o buzzer
    
  }

// Atualiza o LCD com a intensidade da luz  
lcd.begin(16,2);              
lcd.clear();                  
lcd.setCursor(0,0);           
lcd.print("Luminosidade:");    
lcd.setCursor(0,1);  
lcd.print(intensidadeLuz);
lcd.print("%");
  
      
  

   
 
  delay(1000); // Espera 1 segundo antes de repetir o loop
}