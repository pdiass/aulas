int X=0; 
void setup()
{
  pinMode (2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (8,OUTPUT);

}

void loop ()
{  
  X=X+2;
  digitalWrite(X,1);
  delay(500);
  digitalWrite(X,0);
  if (X==8)
    {
    X=0;
    }
    
}