#define DEBUGeeprom 1
#define DEBUG 1
#define USE_DHCP 1

// lib wifi ethernet
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <SPI.h>         // needed for Arduino versions later than 0018
#include <Ethernet2.h>
#include <EthernetUdp2.h>         // UDP library from: bjoern@cs.stanford.edu 12/30/2008
byte mac[]    = {  0x00, 0xAA, 0xBB, 0xCC, 0xDE, 0x02 };
EthernetUDP Udp;
unsigned int udpPort_node = 6454;  // local port to listen on
unsigned int udpPort_server = 6454;  // local port to speak to
const int MTUu = 1472;  // Usable MTU (1500 - 20 IP - 8 UDP)
byte incomingPacket[MTUu];  // buffer for incoming packets

#define WIZ_RESET 0
#define WIZ_CS 15


// lib eeprom
#include <EEPROM.h>
// start reading from the first byte (address 0) of the EEPROM

// dmx shield
#include <LXESP8266UARTDMX.h>
//#include "ESPDMX.h"
//DMXESPSerial dmx;

#define BIT_N(v,n)((v&1<<n)>>n)

// lib  NeoNextion-2.2.0
#include <Nextion.h>
#include <NextionPage.h>
#include <NextionProgressBar.h>
#include <NextionText.h>
#include <NextionButton.h>
// def serial nextion
#include <SoftwareSerial.h>
SoftwareSerial NEXTION_PORT(5, 4); // RX, TX d1 d2
Nextion nex(NEXTION_PORT);

// varialble

int addr = 0;
byte value;
int L;
uint8_t I;
uint8_t r = 1;
uint16_t R[3];
int D;
uint8_t touche_int;
uint8_t compt_touche_int;
uint8_t rcompt_touche_int;
uint8_t rdcompt_touche_int;
uint8_t c_t_i;
uint8_t cc_t_i;
uint16_t nombre_saisi_int;
uint16_t rnombre_saisi_int;
uint16_t rdnombre_saisi_int;
uint8_t incr_saisi_int;
long rsaisie_int[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
long rdsaisie_int[3] = {0, 0, 0};
long incr_int[3] = {0, 0, 0};
uint8_t fonction = 0;
uint8_t inc = 0;
uint8_t dim = 0;
uint8_t clear_t = 0;
uint8_t at;
uint8_t p_rdcompt_touche_int;
uint8_t page_componentID;
uint8_t componentID;
char buffer[20] = {0};
char D_buffer[2] = {0};
char bu[20] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
uint8_t c;
uint8_t d;
uint8_t u;
uint8_t m;
uint8_t wifi = 0;
uint8_t wif = 0;
uint8_t ethernet = 0;
uint8_t etherne = 0;
uint16_t dela = 1000;

//ARTNET

#define ARTNET_PORT 6454
#define ARTNET_BUFFER_MAX 600
#define ARTNET_REPLY_SIZE 239
#define ARTNET_ADDRESS_OFFSET 18
#define ARTNET_ARTDMX 0x5000
#define ARTNET_ARTPOLL 0x2000
unsigned char packetBuffer[ARTNET_BUFFER_MAX];
char nodeName[30] = "Art-Net Node 1";
uint8_t artNetUniA = 0;
uint8_t artNetUniB = 1;
uint8_t artNetSub = 0;
uint8_t artNetNet = 0;
int DMX_Universe = ((artNetSub * 16) + artNetUniA);
//ART-NET variables
char ArtNetHead[8] = "Art-Net";
//short OpOutput= 0x5000 ;//output
byte buffer_dmx[512]; //buffer used for DMX data
//Artnet PACKET
byte  ArtdmxBuffer[(17 + 512) + 8 + 1];

//DMX
enum dmxStates {DMX_STOPPED, DMX_STARTED};
bool dmxStateA = DMX_STOPPED;
bool dmxStateB = DMX_STOPPED;
bool newDataA = 0;
bool newDataB = 0;
byte* dmxDataA;       //pointer
byte* dmxDataB;       //pointer
//dmxN.end();
//dmxN.pause();
//dmxN.unPause();
//dmxN.clearChans();
//dmxN.getChans();
//dmxN.begin();
//dmxN.begin(ledPin);
//dmxN.begin(ledPin, ledIntensity);
//dmxN.ledIntensity(newIntensity);
//dmxN.setChans(data, numChans, startChan);
//dmxN.setChans(data, numChans);
//dmxN.setChans(data);

//NETWORK
bool wifi_mode_ap = false;  //true = AP, false = client
bool wifi_radio = true;      //Wifi ON or OFF
bool dhcp = 0;
//byte MAC_array[6];
byte MAC_array[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
String MAC_address;
IPAddress ip(2, 0, 0, 111);
IPAddress subnet(255, 255, 255, 0);
IPAddress broadcast(ip[0], 255, 255, 255);
char wifi_client_ssid[30] = "riri";
char wifi_client_pass[30] = "288F42E7E8";
char wifi_ap_ssid[30] = "Noderiri";
char wifi_ap_pass[30] = "balourds";
uint8_t wifi_connect_timer = 0;
#define MAX_WIFI_APS 30
String wifi_aps[MAX_WIFI_APS];
uint8_t wifi_ap_num = 0;
uint8_t wifi_aps_found = 0;

// art net parameters

//unsigned int localPort = 6454;// artnet UDP port is by default 6454
//byte SubnetID = {0};
//byte UniverseID = {1};

//byte destination_Ip[]= {255,255,255,255};
//HARDWARE
//byte mac[] = {144,162,218,00,16,96};
//byte ip[] = {2,0,0,111};

WiFiUDP eUDP;
EthernetUDP UDP;
int artNetUniA_LastReceived = 0;
int artNetUniB_LastReceived = 0;
int artNet_LastReceived_Net = 0;
int artNet_LastReceived_SubNet = 0;
int artNet_LastReceived_Uni = 0;
int artNet_LastReceived_Time = 0;
