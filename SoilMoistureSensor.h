#include "esphome.h"

using namespace esphome;

class SoilMoistureSensor : public PollingComponent, public sensor::Sensor {
  public:
	

    SoilMoistureSensor() : PollingComponent(15000) {}
    
    void setup() override {
      Serial.begin(115200);
      Serial.println("Soil Moisture Sensor");
      Serial.println("--------------------------------------");
    }

    void update() override {
      Serial.println("-- update --");
      float level = (float)analogRead(A0)/10;
      Serial.println(level);
      publish_state(level);
    }
};