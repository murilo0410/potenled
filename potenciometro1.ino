//Declaraçãoi de Variáveis
byte ledVerde = 1;
byte ledAmarelo = 2;
byte ledAzul = 3;
byte ledVermelho = 4;
byte ledCinza = 5;
int potencia = A1;
int valor = 0;

//Inicialização de Variáveis
void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledCinza, OUTPUT);
  pinMode(potencia, INPUT);
  Serial.begin(9600);
 }
// Lógica de Funcionamento
  void loop() {
    int potencia = analogRead(A1);
    Serial.println(valor);
    if (potencia <= 205){
    digitalWrite(ledVerde, 1);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledCinza, 0);
    }
    else (potencia>=205); {
    
      if (potencia <= 405){
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAmarelo, 1);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledCinza, 0);
    } 
    else (potencia>=405); {
      
      if (potencia <= 605){ 
     digitalWrite(ledVerde, 0);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledAzul, 1);
    digitalWrite(ledVermelho, 0);
    digitalWrite(ledCinza, 0);
      }
      
    else (potencia>=605); 
      if (potencia <= 805){
    digitalWrite(ledVerde, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledVermelho, 1);
    digitalWrite(ledCinza, 0);
      }
      
      else (potencia>= 805);{
     digitalWrite(ledVerde, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVermelho, 0);
    digitalWrite(ledCinza, 1);
     }
    }
   }
  }
    