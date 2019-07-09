int analog = 0;
String analogString;
float voltage = 0;
String voltageString;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analog = analogRead(A0);
  analogString =  String(analogRead(A0), DEC);
  voltage = ((analog*5.0)/1024.0);
  voltageString =  String(((analog*5.0)/1024.0), 3);

  Serial.print("$*"+analogString+"");
  //Serial.println("$*"+analogString+"*"+voltageString+"");
  //Serial.print(analog);
  //Serial.print("*");
  //Serial.println(voltage);
  
  delay(100);
}
