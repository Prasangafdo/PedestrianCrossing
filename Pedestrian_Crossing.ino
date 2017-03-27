//Run this to identify the pinout easily

void setup() {
 for(int i = 1;i<12;i++){
   pinMode(i,OUTPUT);
  // digitalWrite(i,HIGH);//Uncomment if CA
 }
}

void off(){
      for(int j = 1;j<12;j++){//This is off
    digitalWrite (j,HIGH);
    }
}


 void num7(){
   digitalWrite(2,LOW);//This is #7
   digitalWrite(3,LOW);
   digitalWrite(7,LOW);  

 }
 
void num4(){
//This is #4
   digitalWrite(2,LOW);//LOW if CA
   digitalWrite(4,LOW);//LOW if CA
   digitalWrite(7,LOW);//LOW if CA
   digitalWrite(5,LOW);//LOW if CA  
 
}

void num3(){
   digitalWrite(2,LOW);//This is #3
   digitalWrite(8,LOW);
   digitalWrite(3,LOW);
   digitalWrite(7,LOW);
   digitalWrite(5,LOW);
 
}

void num2(){
   digitalWrite(2,LOW);//This is #2
   digitalWrite(9,LOW);
   digitalWrite(3,LOW);
   digitalWrite(8,LOW);
   digitalWrite(5,LOW);
 
}


 void num1(){
   digitalWrite(2,LOW);//This is #1
   digitalWrite(7,LOW);
 }

void loop() {
  off();
  num7();
     delay(1000);
  off();
  num4();
     delay(1000);
  off();
  num3();
     delay(1000);
  off();
  num2();
     delay(1000);
  off();
  num1();
     delay(1000);
  off();


digitalWrite(10,LOW);
digitalWrite(11, LOW);
delay(1000);
  // for(int i = 1;i<12;i++){

   



// }
}
