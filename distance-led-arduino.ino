# define led 13

int trigger = 10;           // declaramos la palabra trigger como un tipo entero y al mismo tiempo reemplaza al pin 9
int echo = 9;           // declaramos la palabra echo como un tipo entero y al mismo tiempo reemplaza al pin 8
float tiempo_de_espera, distancia; // creamos una variable de fotante; es decir, nos puede dar resultados en decimales.

void setup() {
  Serial.begin (9600);   // establemos la comucicacion serial
  pinMode (trigger, OUTPUT); // declarmos el pin 9 como salida
  pinMode (echo, INPUT);   // declaramos el 8 como entrada
  
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT); 
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  digitalWrite (trigger,LOW); // ponemos en bajo el pin 8 durante 2 microsegundos
  delayMicroseconds(2);
  digitalWrite (trigger, HIGH);// ahora ponemos en alto pin 8 durante 10 microsegundos;
  delayMicroseconds (10);     // pues este el momento en que emite el sonido durante 10 segungos
  digitalWrite (trigger, LOW); // ahora ponemos en bajo pin 8 
  tiempo_de_espera = pulseIn (echo,HIGH); // pulseIn, recoge la señal del sonido que emite el trigger
  /*La función pulseIn espera la aparición de un pulso en una entrada y mide su duración, dando como resultado la duración medida                   
  El primer parámetro (ECHO) es el pin sobre el que se realizará la medición.
  Y el segundo parámetro (HIGH) indica si el pulso a esperar será un 1 (HIGH) o un 0 (LOW).
  */
  distancia=tiempo_de_espera * 0.034/2;
  Serial.print (distancia);    // imprimimos la distancia en cm
  Serial.println ("cm");
  delay (1000);
  
  if (distancia>=1 && distancia <=3){
    digitalWrite (3,1);
    digitalWrite (4,0);
    digitalWrite (5,0);
    digitalWrite (6,0);
    digitalWrite (7,0);
    digitalWrite (8,0);
    digitalWrite (11,0);
    digitalWrite (12,0);
  }
  if (distancia>3 && distancia <=5){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,0);
    digitalWrite (6,0);
    digitalWrite (7,0);
    digitalWrite (8,0);
    digitalWrite (11,0);
    digitalWrite (12,0);
  }
  if (distancia>5 && distancia <=7){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,1);
    digitalWrite (6,0);
    digitalWrite (7,0);
    digitalWrite (8,0);
    digitalWrite (11,0);
    digitalWrite (12,0);
  }
  if (distancia>7 && distancia <=9){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,1);
    digitalWrite (6,1);
    digitalWrite (7,0);
    digitalWrite (8,0);
    digitalWrite (11,0);
    digitalWrite (12,0);
  }
  if (distancia>9 && distancia <=11){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,1);
    digitalWrite (6,1);
    digitalWrite (7,1);
    digitalWrite (8,0);
    digitalWrite (11,0);
    digitalWrite (12,0);
  }
  if (distancia>11 && distancia <=13){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,1);
    digitalWrite (6,1);
    digitalWrite (7,1);
    digitalWrite (8,1);
    digitalWrite (11,0);
    digitalWrite (12,0);
  }
  if (distancia>13 && distancia <=15){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,1);
    digitalWrite (6,1);
    digitalWrite (7,1);
    digitalWrite (8,1);
    digitalWrite (11,1);
    digitalWrite (12,0);
  }
  if (distancia>15 && distancia <=400){
    digitalWrite (3,1);
    digitalWrite (4,1);
    digitalWrite (5,1);
    digitalWrite (6,1);
    digitalWrite (7,1);
    digitalWrite (8,1);
    digitalWrite (11,1);
    digitalWrite (12,1);
  }
}