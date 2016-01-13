// EmonLibrary examples openenergymonitor.org, Licence GNU GPL V3

// 90�*���



#include "EmonLib.h"                   // Include Emon Library

EnergyMonitor emon1;                   // Create an instance

double i;

void setup()

{  

  Serial.begin(9600);

  

  emon1.current(5, 65.0);             // Current: input pin, calibration.

}



void loop()

{

  double Irms = emon1.calcIrms(1470);  // Calculate Irms only

  Serial.print("P : ");

  i=Irms*115.0; 

  Serial.print(i);	       // Apparent power

  //Serial.print("  ");

  //Serial.print("Irms : ");

  //Serial.println(Irms);		       // Irms
    
   if(i<1900)
   {
      if(i>1000)
      {
          i=i-1135;
          Serial.print("  !Water!");
          if(i>450)
          {
            i=i-455;
            Serial.print("  + Hair drier!-2");
             if(i>180)
             {
                i=i-190;
                Serial.print("  + Hair drier!");
                if(i>75)
                { 
                  i=i-80;
                  Serial.print("  + 2Fan!");
                  if(i>40){Serial.print("  + Paper!");}   
                }        
                else
                {
                  if(i>37){Serial.print("  + Paper!");}
                }
             }
             else
             {
                if(i>70)
                { 
                  i=i-75;
                  Serial.print("  + 2Fan!");
                  if(i>30){Serial.print("  + Paper!");}  
                }       
                else
                {
                  if(i>30){Serial.print("  + Paper!");}
                }
             }
          }
          else
          {
             if(i>200)
             {
                i=i-215;
                Serial.print("  + Hair drier!");
                if(i>80)
                { 
                  i=i-90;
                  Serial.print("  + 2Fan!");
                  if(i>30){Serial.print("  + Paper!");}   
                }   
                else
                {
                  if(i>30){Serial.print("  + Paper!");}
                }
             }
             else
             {
                if(i>70)
                { 
                  i=i-85;
                  Serial.print("  + 2Fan!");
                  if(i>35){Serial.print("  + Paper!");}   
                }        
                else
                {
                  if(i>35){Serial.print("  + Paper!");}
                }
              }
          }
      }
      else
      {
          if(i>500)
          {
            i=i-550;
            Serial.print("   Hair drier!-2");
            if(i>190)
            {
                i=i-195;
                Serial.print("  + Hair drier!");
                if(i>75)
                { 
                  i=i-85;
                  Serial.print("  + 2Fan!");
                  if(i>35){Serial.print("  + Paper!");}   
                }        
                else
                {
                  if(i>36){Serial.print("  + Paper!");}
                }
              }
              else
              {
                if(i>75)
                { 
                  i=i-85;
                  Serial.print("  2Fan!");
                  if(i>36){Serial.print("  + Paper!!");}   
                }        
                else
                {if(i>36){Serial.print("   Paper!");}}
              } 
          }
          else
          {
             if(i>225)
             {
                i=i-235;
                Serial.print("   Hair drier!");
                if(i>75)
                { 
                  i=i-85;
                  Serial.print("  + 2Fan!");
                  if(i>40){Serial.print("  + Paper!");}   
                }        
                else
                {if(i>45){Serial.print("  + Paper!");}}
             }
             else
             {
                if(i>80)
                { i=i-90;
                  Serial.print("  2Fan!");
                  if(i>45){Serial.print("  + Paper!!");}   
                }        
                else
                {if(i>45){Serial.print("   Paper!");}}
             }
          }
      }
      Serial.println("");
    }
    else
    {Serial.println("all");}
  delay(800);
  }
