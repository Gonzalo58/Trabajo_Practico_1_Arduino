void setup()
{
	/*Led N°1*/
  	pinMode(0,OUTPUT);
  	pinMode(1,OUTPUT);
  	pinMode(2,OUTPUT);
  
  	/*Led N°2*/
  	pinMode(3,OUTPUT);
  	pinMode(4,OUTPUT);
  	pinMode(5,OUTPUT);

  	/*Led N°3*/
  	pinMode(6,OUTPUT);
  	pinMode(7,OUTPUT);
  	pinMode(8,OUTPUT);
}

void loop()
{
	//Parte1
  	analogWrite(0, 255);
  	analogWrite(1, 0);
  	analogWrite(2, 0);
  	delay(1000);
  	//Parte2
  	analogWrite(0, 0);
  	analogWrite(1, 0);
  	analogWrite(2, 0);
  	delay(1000);
  	digitalWrite(3, HIGH);
  	digitalWrite(4, HIGH);
  	digitalWrite(5, LOW);
  	delay(1000);
  	//Parte3
  	digitalWrite(3, LOW);
	digitalWrite(4, LOW);
  	digitalWrite(5, LOW);
  	analogWrite(6,0);
  	analogWrite(7,150);
  	analogWrite(8,150);
  	delay(1000);
  	digitalWrite(3, LOW);
  	digitalWrite(4, LOW);
  	digitalWrite(5, LOW)
    analogWrite(6, 0);
  	analogWrite(7, 0);
    analogWrite(8, 0);
                
}