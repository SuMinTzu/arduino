int brightness=0;
int fadeAmount=5;
void setup() 
{
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(11,brightness);
  brightness=brightness+fadeAmount;
  if( brightness == 0 || brightness == 255)
  {fadeAmount = -fadeAmount;}
  delay(30);
}
