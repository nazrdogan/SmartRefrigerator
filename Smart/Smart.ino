#define trigPin 12
#define echoPin 13
//--------
#define trigPin1 11
#define echoPin1 10
//--------------
#define trigPin2 9
#define echoPin2 8
//--------------
#define trigPin3 7
#define echoPin3 6




//Smart Refrigerator Project Arduino Code

// For Egg box
int egg1=22;
int egg2=23;
int egg3=24;
int egg4=25;
int egg5=26;
int egg6=27;
int egg7=28;
int egg8=29;
int egg9=30;
int egg10=31;
int egg11=32;
int egg12=33;
int egg13=34;
int egg14=35;
int egg15=36;
//----------------------------
int vaL1=0;
int vaL2=0;
int vaL3=0;
int vaL4=0;
int vaL5=0;
int vaL6=0;
int vaL7=0;
int vaL8=0;
int vaL9=0;
int vaL10=0;
int vaL11=0;
int vaL12=0;
int vaL13=0;
int vaL14=0;
int vaL15=0;
//----------------------------
int a1=0;
int a2=0;
int a3=0;
int a4=0;
int a5=0;
int a6=0;
int a7=0;
int a8=0;
int a9=0;
int a10=0;
int a11=0;
int a12=0;
int a13=0;
int a14=0;
int a15=0;


int eggSum;

void setup()
{
   Serial.begin (9600);
  //--------------------------
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   //---------------------------
   pinMode(trigPin1, OUTPUT);
   pinMode(echoPin1, INPUT);
   //---------------------------
   pinMode(trigPin2, OUTPUT);
   pinMode(echoPin2, INPUT);
   //---------------------------
   pinMode(trigPin3, OUTPUT);
   pinMode(echoPin3, INPUT);
  
   
  pinMode(egg1,INPUT);
  pinMode(egg2,INPUT);
  pinMode(egg3,INPUT);
  pinMode(egg4,INPUT);
  pinMode(egg5,INPUT);
  pinMode(egg6,INPUT);
  pinMode(egg7,INPUT);
  pinMode(egg8,INPUT);
  pinMode(egg9,INPUT);
  pinMode(egg10,INPUT);
  pinMode(egg11,INPUT);
  pinMode(egg12,INPUT);
  pinMode(egg13,INPUT);
  pinMode(egg14,INPUT);
  pinMode(egg15,INPUT);
  
  
}
void loop()
{
  int duration, distance;
  int duration1,distance1;
  int duration2,distance2;
  int duration3,distance3;
  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin1,HIGH);
  digitalWrite(trigPin2,HIGH);
  digitalWrite(trigPin3,HIGH);
  //----------------------------------
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin1,LOW);
  digitalWrite(trigPin2,LOW);
  digitalWrite(trigPin3,LOW);
  //---------------------------------
  duration = pulseIn(echoPin, HIGH);
  duration1=pulseIn(echoPin1,HIGH);
  duration2=pulseIn(echoPin2,HIGH);
  duration=pulseIn(echoPin3,HIGH);
  distance = (duration/2) / 29.1;
  distance1=(duration1/2)/29.1;
  distance2=(duration2/2)/29.1;
  distance3=(duration3/3)/29.1;
  
    Serial.print(distance);
    Serial.println(" cm");
    Serial.print(distance1);
    Serial.println(" cm");
    Serial.print(distance2);
    Serial.println(" cm");
    Serial.print(distance2);
    Serial.println(" cm");
    Serial.print(distance3);
    Serial.println(" cm");
     
    
  
  delay(500);
  
  
  
  
  vaL1=digitalRead(egg1);
  vaL2=digitalRead(egg2);
  vaL3=digitalRead(egg3);
  vaL4=digitalRead(egg4);
  vaL5=digitalRead(egg5);
  vaL6=digitalRead(egg6);
  vaL7=digitalRead(egg7);
  vaL8=digitalRead(egg8);
  vaL9=digitalRead(egg9);
  vaL10=digitalRead(egg10);
  vaL11=digitalRead(egg11);
  vaL12=digitalRead(egg12);
  vaL13=digitalRead(egg13);
  vaL14=digitalRead(egg14);
  vaL15=digitalRead(egg15);
 
   if (vaL1 == HIGH) {         
     a1=1;
  } else {
    a1=0;
  }
 if (vaL2 == HIGH) {         
     a2=1;
  } else {
    a2=0;
  }

 if (vaL3 == HIGH) {         
     a3=1;
  } else {
    a3=0;
  }
 if (vaL4 == HIGH) {         
     a4=1;
  } else {
    a4=0;
  }

 if (vaL5 == HIGH) {         
     a5=1;
  } else {
    a5=0;
  }

 if (vaL6 == HIGH) {         
     a6=1;
  } else {
    a6=0;
  }

 if (vaL7 == HIGH) {         
     a7=1;
  } else {
    a7=0;
  }

 if (vaL8 == HIGH) {         
     a8=1;
  } else {
    a8=0;
  }

 if (vaL9 == HIGH) {         
     a9=1;
  } else {
    a9=0;
  }

 if (vaL10 == HIGH) {         
     a10=1;
  } else {
    a10=0;
  }

 if (vaL11 == HIGH) {         
     a11=1;
  } else {
    a11=0;
  }

 if (vaL12 == HIGH) {         
     a12=1;
  } else {
    a12=0;
  }
  if (vaL13 == HIGH) {         
     a13=1;
  } else {
    a13=0;
  }
  if (vaL14 == HIGH) {         
     a14=1;
  } else {
    a14=0;
  }
  if (vaL15 == HIGH) {         
     a15=1;
  } else {
    a15=0;
  }

  eggSum=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12+a13+a14+a15;
  
  
  
  
}
