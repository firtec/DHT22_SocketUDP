#include <Ethernet.h>
#include <EthernetUdp.h>

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTTYPE DHT22    // Tipo de sensor
const int DHTPin = 2;   // Pin del sensor
DHT dht(DHTPin, DHTTYPE); 


byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
IPAddress ip(192, 168, 1, 200);
byte contador = 0; // Dato que se envía

// Temporary variables
static char Temperatura[5]="";
static char Humedad[5]="";
static char cadena[10];
static char cadena_old[10];

// IP donde se encuentra el servidor
const char * udpAddress = "192.168.1.103";
// Puerto donde se reciben los datos
const int udpPort = 30000;


EthernetUDP udp;

void setup() {
  
 
  Ethernet.begin(mac, ip);
  Serial.begin(9600);
  while (!Serial) {
    ;
  }

  if (Ethernet.hardwareStatus() == EthernetNoHardware) {
    Serial.println(F("ERROR en la placa Ethernet("));
    while (true) {
      delay(1); 
    }
  }
  if (Ethernet.linkStatus() == LinkOFF) {
    Serial.println(F("El cable de rer no esta conectado."));
  }
  udp.begin(udpPort);
}

void loop() {
  float t = dht.readTemperature(); // Lee sensor temperatura
  float h = dht.readHumidity();  // Lee sensor humedad
  
  if (isnan(h) || isnan(t)) { // Verifica si error de lectura
              Serial.println("ERROR!"); 
              }
            else{ // No hay error, procesa y envía los datos
              
   dtostrf(t, 4, 1, Temperatura); // Procesa la temperatura 
   dtostrf(h, 4, 1, Humedad);     // Procesa la humedad
   sprintf(cadena,"%s,%s",Temperatura,Humedad); // Arma la trama
   if (cadena_old != cadena) {        // Los datos son distintos?
          strcpy(cadena_old, cadena); // Entonces actualiza datos   
          udp.beginPacket(udpAddress, udpPort);
          udp.print(cadena); // Pone los datos en el socket
          udp.endPacket();   // Fin de transacción
      }
    }
   delay(3000); // Espera 3 segundos antes de nueva medición
  }

