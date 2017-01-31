/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Roger Montalvo                                  DATA: 24/1/17  **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************
int ledPin = 10;
int Polsador = 6;
int val;

//**************************** SETUP ************************************


void setup() {                            // CONDICIONS INICIALS
 
pinMode(ledPin,OUTPUT);
                       
pinMode(Polsador,INPUT);
             }
 
//**************************** LOOP *************************************

void loop() {   // BUCLE
 val= digitalRead(Polsador); //Assigno valor del Polsador a la variable val ; = és per assignar (Bobina) == és per comparar.
 delay(200); 
 if (val==1){
 digitalWrite (ledPin, HIGH); 
   ;
  }
   //digitalWrite (ledpin2, HIGH) ; 
 else {
 digitalWrite (ledPin, LOW) ;
   ;
  }




  }

//*************************** FUNCIONS **********************************
