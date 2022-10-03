//Leds posiciones
const int LED1 = 6;
const int LED2 = 8;
const int LED3 = 3;
const int LED4 = 1;
const int LED5 = 5;
const int LED6 = 4;
const int LED7 = 2;

const int sensor = 12;
const int echo = 13;

int duracion = 0;
int distancia = 0;

void setup() {

  Serial.begin(9600);

  pinMode(sensor , OUTPUT);
  pinMode(echo , INPUT);
  
  //Led output
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
  
}

void loop() {


  digitalWrite(sensor , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(sensor , HIGH);
  distance = (duracion/2) / 28.5 ;
  Serial.println(distancia);
  
  //High encendido, low apagado, distancia a la que lo lee y dependiendo de eso lo prende o lo apaga
  if ( distance <= 3 )
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 7 )
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 18 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 23 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 28 )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 31 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
}