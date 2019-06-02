
void setup()
  // put your setup code here, to run once:
 {
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(A2,INPUT);
 pinMode(A3,INPUT);
 pinMode(A4,INPUT);
 pinMode(A5,INPUT);
 pinMode(A6,INPUT);
 pinMode(A7,INPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 Serial.begin(9600);
 }
void loop()
  // put your main code here, to run repeatedly:
{
int S0=analogRead(A0);
Serial.println(S0);
if (S0>100)
{
  S0=0;
  Serial.println(S0);
}
else
{
  S0=1;
  Serial.println(S0);  
}

int S1=analogRead(A1);
Serial.println(S1);
if (S1>100)
{
  S1=0;
  Serial.println(S1);
}
else
{
  S1=1;
  Serial.println(S1);  
}

int S2=analogRead(A2);
Serial.println(S2);
if (S2>100)
{
  S2=0;
  Serial.println(S2);
}
else
{
  S2=1;
  Serial.println(S2);  
}

int S3=analogRead(A3);
Serial.println(S3);
if (S3>100)
{
  S3=0;
  Serial.println(S3);
}
else
{
  S3=1;
  Serial.println(S3);  
}

int S4=analogRead(A4);
Serial.println(S4);
if (S4>100)
{
  S4=0;
  Serial.println(S4);
}
else
{
  S4=1;
  Serial.println(S4);  
}

int S5=analogRead(A5);
Serial.println(S5);
if (S5>100)
{
  S5=0;
  Serial.println(S5);
}
else
{
  S5=1;
  Serial.println(S5);  
}
int S6=analogRead(A6);
Serial.println(S6);
if (S6>100)
{
  S6=0;
  Serial.println(S6);
}
else
{
  S6=1;
  Serial.println(S6);  
}

int S7=analogRead(A7);
Serial.println(S7);
if (S7>100)
{
  S7=0;
  Serial.println(S7);
}
else
{
  S7=1;
  Serial.println(S7);  
}

if(S0==1 && S1==1 && S2==1 && S3==0 && S4==0 && S5==1 && S6==1 && S7==1)
{
  fwd();
}

if(S0==1 && S1==1 && S2==1 && S3==1 && S4==0 && S5==0 && S6==1 && S7==1)
{
   Rturn();
  }
  if(S0==1 && S1==1 && S2==1 && S3==1 && S4==1 && S5==0 && S6==0 && S7==1)
  {
        Rturn();
    }

    if(S0==1 && S1==1 && S2==1 && S3==1 && S4==1 && S5==1 && S6==0 && S7==0)
    {
      Rturn();
       }
       if(S0==1 && S1==1 && S2==1 && S3==1 && S4==1 && S5==1 && S6==1 && S7==0)
       {
         Rturn(); 
       }
       if(S0==1 && S1==1 && S2==0 && S3==0 && S4==1 && S5==1 && S6==1 && S7==1)
       {
        Lturn();
       }
      if(S0==1 && S1==0 && S2==0 && S3==1 && S4==1 && S5==1 && S6==1 && S7==1)
      {
      Lturn();
      }
      if(S0==0 && S1==0 && S2==1 && S3==1 && S4==1 && S5==1 && S6==1 && S7==1)
      {
        Lturn();
        }
     if(S0==0 && S1==1 && S2==1 && S3==1 && S4==1 && S5==1 && S6==1 && S7==1)
     {
      Lturn();
      }
      if(S0==1 && S1==1 && S2==1 && S3==1 && S4==1 && S5==1 && S6==1 && S7==1)
      {
       Stop();
      }
      if(S0==0 && S1==0 && S2==0 && S3==0 && S4==0 && S5==0 && S6==0 && S7==0)
      {
        Uturn();
        }
        if (S0==1 && S1==1 && S2==0 && S3==0 && S4==0 && S5==0 && S6==0 && S7==0)
      {
       Lturn();
      }
      if (S0==0 && S1==0 && S2==0 && S3==0 && S4==0 && S5==0 && S6==1 && S7==1)
      {
       Rturn();
      }
}
void fwd(){
  digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
}
void Uturn(){
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
}
void Lturn(){
  digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
}
void Rturn(){
  digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
}
void Stop()
{
    digitalWrite(2,LOW);
   digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
  }


