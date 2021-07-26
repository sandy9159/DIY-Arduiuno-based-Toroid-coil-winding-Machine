#include <Wire.h>     
#include "rgb_lcd.h"  
#include <Arduino.h>
#include "BasicStepperDriver.h"
rgb_lcd lcd; 


float rev=0;
const int IR =2;
int currentstate = 0;
int laststate = 0;

int Acurrentstate = 0;
int Alaststate = 0;
float Arev=0;

int REVcurrentstate = 0;
int REVlaststate = 0;


int MOTE = 5;
int MOTA = 4;
int degree = 0;


double MOTOR_STEPS  = 200;
double RPM =0 ;
int DIR = 14;
int STEP = 15;
double MICROSTEPS = 16 ;
double primaryrotation = 360;
BasicStepperDriver stepper(MOTOR_STEPS, DIR, STEP);


 
int stateA=0;
int stateB=0;
#define outputA 3
#define outputB 12
#define Switch 11


double OD = 0;
double turns = 0;
double rotation = 0;
double circumfarence = 0;
double pulse = 0;
double step_per_cirum = 4.225;
double turn_RPM_factor = 6.4;



void isr() //interrupt service routine
{
  currentstate = digitalRead(IR);

  if (currentstate != laststate){
    rev++;
    laststate = currentstate;
  }
}


void flag() //interrupt service routine
{
  
  Acurrentstate = digitalRead(outputA);
  
  if (Acurrentstate != Alaststate){
    Arev++;
    Alaststate = Acurrentstate;
    delay(50);
  }

}



void setup(){
lcd.begin(16, 2);  
pinMode(IR, INPUT);
pinMode(outputA,INPUT);
pinMode (Switch,INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(2),isr,CHANGE); 
attachInterrupt(digitalPinToInterrupt(3), flag, CHANGE);
pinMode(MOTE, OUTPUT);
pinMode(MOTA, OUTPUT);
Serial.begin(9600);

 lcd.setCursor(0, 0);
  lcd.print ("TOROIDAL MACHINE"); 
   delay (2000);
  lcd.setCursor(0, 1);
  lcd.print (" JLCPB 2$ 5PCB"); 
  delay (4000);
  
  lcd.clear();
  digitalWrite(MOTE, HIGH);
  lcd.setCursor(0, 0);


  if (digitalRead(IR)==HIGH){
    digitalWrite(MOTA,HIGH);
    delay(1000);
    digitalWrite(MOTA,LOW);
    
  }


  
}

void loop()
{



if (stateA == 0){
  
lcd.setCursor(0, 0);
lcd.print ("CORE OD");  
lcd.setCursor(5, 1); 
lcd.print("MM"); 
lcd.setCursor(14, 1); 
lcd.print(">>");
lcd.setCursor(0, 1); 
lcd.print(round(Arev/2));
OD = round(Arev/2);


}  



if (stateA ==0 && !digitalRead(Switch)){
delay(100);
stateA = 1;
Arev = 0;
lcd.clear();

}



if (stateA ==1){


lcd.setCursor(0, 0);
lcd.print ("NO. OF TURNS");   
lcd.setCursor(14, 1); 
lcd.print(">>");
lcd.setCursor(0, 1); 
lcd.print(round(Arev/2));
turns = round(Arev/2);
}


if (stateA ==1 && !digitalRead(Switch)){
delay(100);
stateA = 2;
Arev = 0;
lcd.clear();

}


if (stateA == 2){
lcd.setCursor(0, 0);
lcd.print ("DEGREE OF WINDING");   
lcd.setCursor(14, 1); 
lcd.print(">>");
lcd.setCursor(0, 1); 
lcd.print(round(10*(Arev/2)));
rotation = round(10*(Arev/2));
}

if (stateA ==2 && !digitalRead(Switch)){
delay(100);
stateA = 3;
Arev = 0;
lcd.clear();
}


if (stateA == 3){


pulse = (MOTOR_STEPS *MICROSTEPS* 2.54 * (rotation / primaryrotation));
stepper.begin(20, MICROSTEPS);
degree = pulse / (turns * 2);

lcd.setCursor(0, 0);
lcd.print("OD");
lcd.setCursor(3, 0);
lcd.print("TURNS");
lcd.setCursor(10, 0);
lcd.print("DEG");
lcd.setCursor(0, 1);
lcd.print(round(OD));
lcd.setCursor(4, 1);
lcd.print(round(turns));
lcd.setCursor(10, 1);
lcd.print(round(rotation));
lcd.setCursor(14, 1); 
lcd.print(">>");

}


if (stateA ==3 && !digitalRead(Switch)){
delay(100);
stateA = 4;
Arev = 0;
lcd.clear();
delay (500);
}

if (stateA == 4){

if (round(rev/2)<=turns){
 


REVcurrentstate = round(rev);

if (REVcurrentstate+1 != REVlaststate){
digitalWrite(MOTA, HIGH);
stepper.move(round(degree));
lcd.setCursor(0, 0);
lcd.print("RUNNING");
lcd.setCursor(0, 1);
lcd.print(round(rev/2));

lcd.setCursor(5, 1);
lcd.print("TURNS");

REVlaststate = REVcurrentstate+1;
  
}

}

else {

digitalWrite(MOTA, LOW);
stepper.stop();
delay(500);
lcd.setCursor(0, 0);
lcd.print(".....FINISH.....");
lcd.setCursor(0, 1);
lcd.print("----------------");
}





}


}



























