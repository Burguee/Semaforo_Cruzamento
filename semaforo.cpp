// C++ code
//
#define led_vermelho_1 11
#define led_verde_1 13
#define led_amarelo_1 12

#define led_vermelho_2 8
#define led_verde_2 10
#define led_amarelo_2 9

#define led_vermelho_3 5
#define led_verde_3 7
#define led_amarelo_3 6

#define led_vermelho_4 2
#define led_verde_4 4
#define led_amarelo_4 3

const int tempo = 10;

void setup()
{
  pinMode(led_vermelho_1, OUTPUT);
  pinMode(led_verde_1, OUTPUT);
  pinMode(led_amarelo_1, OUTPUT);

  pinMode(led_vermelho_2, OUTPUT);
  pinMode(led_verde_2, OUTPUT);
  pinMode(led_amarelo_2, OUTPUT);

  pinMode(led_vermelho_3, OUTPUT);
  pinMode(led_verde_3, OUTPUT);
  pinMode(led_amarelo_3, OUTPUT);

  pinMode(led_vermelho_4, OUTPUT);
  pinMode(led_verde_4, OUTPUT);
  pinMode(led_amarelo_4, OUTPUT);
}

void loop()
{
  // Primeira Rotação
  digitalWrite(led_vermelho_1, LOW);
  digitalWrite(led_vermelho_2, HIGH);
  digitalWrite(led_vermelho_3, HIGH);
  digitalWrite(led_vermelho_4, HIGH);

  digitalWrite(led_verde_1, HIGH);
  digitalWrite(led_verde_2, LOW);
  digitalWrite(led_verde_3, LOW);
  digitalWrite(led_verde_4, LOW);

  digitalWrite(led_amarelo_1, LOW);
  delay(tempo*1000); 
  digitalWrite(led_verde_1, LOW); 
  digitalWrite(led_amarelo_1, HIGH);
  delay(2000);
  digitalWrite(led_amarelo_1, LOW);

  // Segunda Rotação
  digitalWrite(led_vermelho_1, HIGH);
  digitalWrite(led_vermelho_2, LOW);
  digitalWrite(led_vermelho_3, HIGH);
  digitalWrite(led_vermelho_4, HIGH);

  digitalWrite(led_verde_1, LOW);
  digitalWrite(led_verde_2, HIGH);
  digitalWrite(led_verde_3, LOW);
  digitalWrite(led_verde_4, LOW);
  
  digitalWrite(led_amarelo_2, LOW);
  delay(tempo*1000);  
  digitalWrite(led_verde_2, LOW); 
  digitalWrite(led_amarelo_2, HIGH);
  delay(2000);
  digitalWrite(led_amarelo_2, LOW);

  // Terceira Rotação
  digitalWrite(led_vermelho_1, HIGH);
  digitalWrite(led_vermelho_2, HIGH);
  digitalWrite(led_vermelho_3, LOW);
  digitalWrite(led_vermelho_4, HIGH);

  digitalWrite(led_verde_1, LOW);
  digitalWrite(led_verde_2, LOW);
  digitalWrite(led_verde_3, HIGH);
  digitalWrite(led_verde_4, LOW);
 
  digitalWrite(led_amarelo_3, LOW);
  delay(tempo*1000);  
  digitalWrite(led_verde_3, LOW); 
  digitalWrite(led_amarelo_3, HIGH);
  delay(2000);
  digitalWrite(led_amarelo_3, LOW);

  // Quarta Rotação
  digitalWrite(led_vermelho_1, HIGH);
  digitalWrite(led_vermelho_2, HIGH);
  digitalWrite(led_vermelho_3, HIGH);
  digitalWrite(led_vermelho_4, LOW);

  digitalWrite(led_verde_1, LOW);
  digitalWrite(led_verde_2, LOW);
  digitalWrite(led_verde_3, LOW);
  digitalWrite(led_verde_4, HIGH);
 
  digitalWrite(led_amarelo_4, LOW);
  delay(tempo*1000);  
  digitalWrite(led_verde_4, LOW); 
  digitalWrite(led_amarelo_4, HIGH);
  delay(2000);
  digitalWrite(led_amarelo_4, LOW);
}
