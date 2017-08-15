#include <Arduino.h>

#ifndef __AdvancedOTA__
#define __AdvancedOTA__

#include <ESP8266WiFiMulti.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>

//APモード SSID,PASS
#define  ap_ssid  "YourSSID"
#define  ap_pass  "YourPasswd"
//STAモード SSID,PASS
#define sta_ssid  "Kabekon"
#define sta_pass  "password"

//http://esp8266.local
#define mdns_name "espSwitch"


void wifiSetup(ESP8266WiFiMulti *WiFiMulti, ESP8266WebServer *server);
void listener();

#endif __AdvancedOTA__
