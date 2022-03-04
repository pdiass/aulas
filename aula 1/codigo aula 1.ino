const int botao1 = 2;
const int botao2 = 3;
const int led = 4;
const int led = 5;

int var1;
int var2;
  
 void setup()
 { 
    pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT); 
    pinMode(Led1, OUTPUT);
    pinMode(Led2, OUTPUT);
   	//Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if(var1){
       digitalWrite (led1, HIGH);
   }else{
     digitalWrite (led1, LOW);
   }
   if(!var2){
       digitalWrite (led2, HIGH);
   }else{
     digitalWrite (led2, LOW);
 }
