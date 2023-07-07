// C++ code
//
void setup()
{
 pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  
   digitalWrite(13, HIGH);
  delay(1000);    
  digitalWrite(13, LOW);
  delay(1000); 
  for(int i=0; i<3 ; i++){
     digitalWrite(8, HIGH);
  delay(1000);    
  digitalWrite(8, LOW);
  delay(1000); 
  }
   digitalWrite(7, HIGH);
  delay(1000);     
  digitalWrite(7, LOW);
  delay(1000); 
  
}

void loop()
{

}