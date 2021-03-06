/*
 Scan type: wigle
 Networks: 15
 Target lat, lon: 37.486325, -122.145772
 Comment: Facebook HQ North East
 Generated: Feb 04, 2019 20:12:02
 (open + close this sketch to reload changes)
*/

// Copy and paste this to the networks.h file
/*
#include "networks/fb_ne.h"
extern const byte NN_NN_FB_NE;
extern char* ssids_fb_ne[];
extern byte bssids_[][6];
extern byte rssis_[]
extern byte channels_fb_ne[];
extern String name_fb_ne;
extern String city_fb_ne;
*/

// Number of networks
const byte NN_FB_NE = 15;

// Name and location for OLED
String name_fb_ne = "Facebook (NE)";
String city_fb_ne = "Menlo Park, CA";

// SSIDs for display on OLED
char* ssids_fb_ne[NN_FB_NE] = {
	"Terrag",
	"fbgues",
	"fbgues",
	"fbgues",
	"fbgues",
	"fbgues",
	"Terrag",
	"Terrag",
	"fbgues",
	"soma-o",
	"fbgues",
	"lighth",
	"Cogenr",
	"island",
	"HUAWEI"
};

// BSSIDs (MAC addresses)
byte bssids_fb_ne[NN_FB_NE][6] = {
	{0x1C, 0xB9, 0xC4, 0x33, 0xB9, 0x38},
	{0x1C, 0xB9, 0xC4, 0x73, 0xE4, 0x48},
	{0x1C, 0xB9, 0xC4, 0x75, 0xAE, 0x88},
	{0x04, 0xBD, 0x88, 0x57, 0x09, 0xC0},
	{0x1C, 0xB9, 0xC4, 0x75, 0x95, 0x88},
	{0x1C, 0xB9, 0xC4, 0x73, 0xED, 0x08},
	{0x1C, 0xB9, 0xC4, 0x33, 0xDD, 0x38},
	{0x1C, 0xB9, 0xC4, 0x34, 0x08, 0x18},
	{0x1C, 0xB9, 0xC4, 0x73, 0xBA, 0xD8},
	{0x60, 0x31, 0x97, 0x3D, 0x25, 0xB4},
	{0x1C, 0xB9, 0xC4, 0x73, 0x1D, 0x78},
	{0x18, 0x64, 0x72, 0x60, 0x36, 0x40},
	{0x00, 0x30, 0x44, 0x13, 0xEE, 0xDC},
	{0x1C, 0xB9, 0xC4, 0x75, 0xFA, 0x53},
	{0x02, 0x1A, 0x11, 0xFD, 0x6B, 0xBA}
};

// RSSIs, experimental
byte rssis_fb_ne[NN_FB_NE] = {
20, 20, 20, 20, 20, 20, 18, 18, 18, 18, 18, 18, 18, 18, 18
};

byte channels_fb_ne[NN_FB_NE] = {
 1, 1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 8, 9, 10, 11  
};