//Transmission line fault detection
int val;
int tempPin = 0;
int fan=9;
int bulb=13;
int buzzer=12;
void setup()
{
Serial.begin(9600);
pinMode(fan,OUTPUT);
pinMode(bulb,OUTPUT);
pinMode(buzzer,OUTPUT);
}
void loop()
{
  val = analogRead(tempPin);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;
Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
delay(1000);

if(cel>50)
{
  digitalWrite(fan,HIGH);
 }
 else
 {
  digitalWrite(fan,LOW);
}
int sensorValue = analogRead(A1);
  // print out the value you read:
  Serial.print("VOLATGE :");
  Serial.println(sensorValue);
  delay(500);

 if(sensorValue>230)
 {   digitalWrite(bulb,LOW);
Serial.println("LOAD IS PROTECTED");
    }
  else
{
  digitalWrite(fan,LOW);
  digitalWrite(bulb,HIGH);
  Serial.println("HEALTHY LOADS AT ANDHRA UNIVERSITY");
  }
  int sensorValue1 = analogRead(A2);
  // print out the value you read:
  Serial.print("TRANSMISSION SENSOR :");
  Serial.println(sensorValue1);
  delay(500); 

if(sensorValue1<100)
{
  Serial.println("SORT CIRCUIT FAULT OCCURED");
  digitalWrite(buzzer,HIGH);
    }
else
{
Serial.println("TRANSMISSION LINE IS GOOD");
digitalWrite(buzzer,LOW);
}
}
