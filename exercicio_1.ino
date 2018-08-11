  int Pisca;

  
void setup() {
  // put your setup code here, to run once:

 pinMode (10, OUTPUT);
 pinMode (9, OUTPUT);
 pinMode (8, OUTPUT);

  Pisca = 500;

}

void loop() {
  // put your main code here, to run repeatedly:




  
  digitalWrite (10, HIGH);
  delay (Pisca);
  
  digitalWrite (9, HIGH);
  delay (Pisca);
   
   digitalWrite (8, HIGH);
   delay (Pisca);

  
 
  digitalWrite (10, LOW);
  delay (Pisca);

 digitalWrite (9, LOW);
 delay (Pisca);
  
  digitalWrite (8, LOW);
  delay (Pisca);

}
