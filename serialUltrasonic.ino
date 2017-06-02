char Rec_Data;
int finish = 0;
int i = 0;
char distance;
char array[100];
void ULTRA_SONIC_Rx();


void setup()
{
  Serial.begin(9600); 
}

void loop()
{
   ULTRA_SONIC_Rx();
   if(finish){
     Serial.print("Distance:");
     Serial.print(array);       
     Serial.println("cm");
     finish = 0;
     i = 0;
   }
}

void ULTRA_SONIC_Rx()
{
   while(Serial.available()>0)
   {
      Rec_Data = Serial.read();
      if(Rec_Data !=0x0D && finish ==0)
      {
        array[i++]= Rec_Data;   
      }
      if(Rec_Data == 0x0D)
      {
         finish = 1;
      }
   }
}
