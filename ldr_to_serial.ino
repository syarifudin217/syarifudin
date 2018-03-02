//--------------- variabel  ldr-------------------
const int pinldr1 = A0; // pin sensor ldr (peka cahaya) ruang 1
const int pinldr2 = A1; // pin sensor ldr (peka cahaya) ruang 2
const int pinldr3 = A2; // pin sensor ldr (peka cahaya) ruang 3
const int Pinledldr1 = 11; // pin indicator lampu
const int Pinledldr2 = 12; // pin indicator lampu
const int Pinledldr3= 12; // pin indicator lampu

int nilaiLDR1 = 0;
int nilaiLDR2 = 0;
int nilaiLDR3 = 0;

void setup() {
                Serial.begin(9600);
                //SET PIN SEBAGAI OUTPUT/INPUT
                    //------------------------------------
                    //------------------PIR
                    pinMode(Pinledldr1,OUTPUT); // Set pin 8 sebagai Output
                    pinMode(Pinledldr2,OUTPUT); // Set pin 8 sebagai Output
                    pinMode(Pinledldr3,OUTPUT); // Set pin 8 sebagai Output
                    pinMode(A0,INPUT); // Set pin A0 sebagai Input ldr (peka cahaya)
                    pinMode(A1,INPUT); // Set pin A1 sebagai Input ldr (peka cahaya)
                    pinMode(A2,INPUT); // Set pin A2 sebagai Input ldr (peka cahaya)
                    //------------------------------------
                    //------ [ledpir]set pin output 
                    for (int thisPin = 11; thisPin < 13; thisPin++) {pinMode(thisPin, OUTPUT);}
                   
                     
               }            
void loop() 
{
  loop1();
  loop2();
  loop3();
 }
void loop1()   
{

                               
//------------------------------------------------------------------------
                {
                   nilaiLDR1 = analogRead(A0);
                   delay(1000);
                   Serial.print("NilaiLDR= ");         // menampilkan teks nilaiLDR=
                   Serial.println(nilaiLDR1);  // menampilkan nilai dari nilaiLDR
                     if (nilaiLDR1 < 50)
                          {
                          digitalWrite(Pinledldr1, HIGH);
                          Serial.println("lampu ruang1 On");
                          }                          
                      else if (nilaiLDR1 > 51 )
                          {
                            digitalWrite(Pinledldr1, LOW);
                            Serial.println("lampu ruang1 OFF");
                          }
                              else
                                 Serial.println("lampu ruang1 off"); 
                           
                  }  
//------------------------------------------------------------------------
} 
void loop2()   
{

                               
//------------------------------------------------------------------------
                {
                   nilaiLDR2 = analogRead(A1);
                   delay(1000);
                   Serial.print("NilaiLDR= ");         // menampilkan teks nilaiLDR=
                   Serial.println(nilaiLDR2);  // menampilkan nilai dari nilaiLDR
                     if (nilaiLDR2 < 50)
                          {
                          digitalWrite(Pinledldr2, HIGH);
                          Serial.println("lampu ruang2 On");
                          }                          
                      else if (nilaiLDR2 > 51 )
                          {
                            digitalWrite(Pinledldr2, LOW);
                            Serial.println("lampu ruang2 OFF");
                          }
                              else
                                 Serial.println("lampu ruang2 off"); 
                           
                  }  
//------------------------------------------------------------------------
}  
void loop3()   
{

                               
//------------------------------------------------------------------------
                {
                   nilaiLDR3 = analogRead(A2);
                   delay(1000);
                   Serial.print("NilaiLDR= ");         // menampilkan teks nilaiLDR=
                   Serial.println(nilaiLDR3);  // menampilkan nilai dari nilaiLDR
                     if (nilaiLDR3 < 50)
                          {
                          digitalWrite(Pinledldr3, HIGH);
                          Serial.println("lampu ruang1 On");
                          }                          
                      else if (nilaiLDR3 > 51 )
                          {
                            digitalWrite(Pinledldr3, LOW);
                            Serial.println("lampu ruang3 OFF");
                          }
                              else
                                 Serial.println("lampu ruang3 off"); 
                           
                  }  
//------------------------------------------------------------------------
}  

