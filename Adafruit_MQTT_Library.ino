/* The MIT License (MIT)
 *
 * This File is Created by Benedikt Wiegert
 * Email: Benedikt.Wiegert@stud.h-da.de 
 */

// Includes

#include <SPI.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

#include <UIPEthernet.h>
#include <Dns.h>
#include <Dhcp.h>

// Global Variables

// Procedure Prototypes

 void setup(){
     Serial.begin(115200);

   Serial.println("memory Consumpotion");
   Serial.print("\tEthernetClient:\t");
   Serial.println(sizeof(EthernetClient));

    Serial.print("\tAdafruit_MQTT_Client:\t");
   Serial.println(sizeof(Adafruit_MQTT_Client));

      Serial.print("\tAdafruit_MQTT_Publish:\t");
   Serial.println(sizeof(Adafruit_MQTT_Publish));

      Serial.print("\tAdafruit_MQTT_Subscribe:\t");
   Serial.println(sizeof(Adafruit_MQTT_Subscribe));

      Serial.print("\tEthernetClient:\t");
   Serial.println(sizeof(EthernetClient));

 }
 void loop() {}

 // Procedure Definition 
