const unsigned int LED_PIN = 13;
const unsigned int BAUD_RATE = 9600;
int control = 0 ;
void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(BAUD_RATE);
}

void loop()
{
  if (Serial.available() > 0) {
                control = Serial.read();
                
                Serial.print("I received: ");
                Serial.println(control,DEC);
                
                if(control == '1')
                {digitalWrite(LED_PIN, HIGH);}
                else
                {digitalWrite(LED_PIN, LOW);}
        }
}
