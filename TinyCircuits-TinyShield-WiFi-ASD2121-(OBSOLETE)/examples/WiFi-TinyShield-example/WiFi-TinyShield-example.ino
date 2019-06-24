// Pin definitions for the TinyCircuits WiFi TinyShield

// These are the interrupt and control pins
#define ADAFRUIT_CC3000_IRQ   2  // MUST be an interrupt pin!
#define ADAFRUIT_CC3000_VBAT  A3
#define ADAFRUIT_CC3000_CS    8

#define WLAN_SSID       "myNetwork"        // cannot be longer than 32 characters!
#define WLAN_PASS       "myPassword"

// Security can be WLAN_SEC_UNSEC, WLAN_SEC_WEP, WLAN_SEC_WPA or WLAN_SEC_WPA2
#define WLAN_SECURITY   WLAN_SEC_WPA2

// WEP with HEX Passphrases
//  #define WLAN_PASS       "8899aabbccdd"  //don't do it this way!
//do it this way:
//const char WLAN_PASS[] = {0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0x00};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
