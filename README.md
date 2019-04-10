# SoilMoistureSensor
Soil moisture sensor for ESPHOME custom component using the FC-28 sensor.

## Installation
Copy and paste the headerfile into your esphome directory.
Make sure to add "SoilMoistureSensor.h" without quotation marks to your includes in the yaml file.

### How to connect your sensor to a arduino board ![alt text](https://electrosome.com/wp-content/uploads/2018/03/Soil-Moisture-Sensor-with-Arduino-600x401.jpg)


### Usage
```yaml
esphome:
  //other settings
  //..
  
  includes:
    - SoilMoistureSensor.h
      
sensor:
- platform: custom
  lambda: |-
    auto my_sensor = new SoilMoistureSensor();
    App.register_component(my_sensor);
    return {my_sensor};

  sensors:
    name: "Soil Moisture Sensor"
    unit_of_measurement: Units
    accuracy_decimals: 1
```
