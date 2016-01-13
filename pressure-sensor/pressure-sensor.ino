int Senval=0;
int Senpin=A0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{

    Senval=analogRead(Senpin);
    Serial.print("Analog reading = ");
    Serial.println(Senval);
    if(Senval>0){
        Serial.println("#Using#");}
      else{
        Serial.println("empty");}
    delay(200);
}

