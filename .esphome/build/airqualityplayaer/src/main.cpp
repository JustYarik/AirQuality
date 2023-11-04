// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace time;
using namespace media_player;
using namespace binary_sensor;
using namespace text_sensor;
using namespace display;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
using namespace i2c;
i2c::ArduinoI2CBus *i2c_arduinoi2cbus;
preferences::IntervalSyncer *preferences_intervalsyncer;
homeassistant::HomeassistantTime *ha_time;
i2s_audio::I2SAudioComponent *i2s_audio_i2saudiocomponent;
i2s_audio::I2SAudioMediaPlayer *i2s_audio_i2saudiomediaplayer;
esp32_touch::ESP32TouchComponent *esp32_touch_esp32touchcomponent;
tm1638::TM1638Key *timer1minute;
tm1638::TM1638Key *timer3minutes;
tm1638::TM1638Key *timer5minutes;
tm1638::TM1638Key *timer10minutes;
tm1638::TM1638Key *timer15minutes;
tm1638::TM1638Key *previus_frame;
tm1638::TM1638Key *next_frame;
tm1638::TM1638Key *turnonkitchensoket;
homeassistant::HomeassistantBinarySensor *kitchensoket;
homeassistant::HomeassistantBinarySensor *synchwithhaled;
gpio::GPIOBinarySensor *gasdetectedbinary;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
gpio::GPIOBinarySensor *set_timer_adjustment;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_2;
template_::TemplateBinarySensor *timer_is_active;
using namespace output;
tm1638::TM1638OutputLed *gasdetectedled;
tm1638::TM1638OutputLed *LedKitchenSoket;
tm1638::TM1638OutputLed *Led3;
tm1638::TM1638OutputLed *Led4;
tm1638::TM1638OutputLed *Led5;
tm1638::TM1638OutputLed *Led6;
tm1638::TM1638OutputLed *Led7;
homeassistant::HomeassistantSensor *currenttemperature;
homeassistant::HomeassistantSensor *feelLiketemperature;
homeassistant::HomeassistantSensor *forecasttemperature;
aht10::AHT10Component *aht10_aht10component;
sensor::Sensor *internal_temperature;
sensor::CalibrateLinearFilter *sensor_calibratelinearfilter;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter;
sensor::Sensor *internal_humidity;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter_2;
bmp280::BMP280Component *bmp280_bmp280component;
sensor::Sensor *internal_temperature2;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter_3;
sensor::Sensor *air_preasure;
sensor::CalibrateLinearFilter *sensor_calibratelinearfilter_2;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter_4;
rotary_encoder::RotaryEncoderSensor *rotary_encoder_rotaryencodersensor;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_3;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_4;
rotary_encoder::RotaryEncoderClockwiseTrigger *rotary_encoder_rotaryencoderclockwisetrigger;
Automation<> *automation;
homeassistant::HomeassistantTextSensor *wethercondition;
homeassistant::HomeassistantTextSensor *forecastwethercondition;
tm1638::TM1638Component *tm1638_display;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_6;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_7;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_5;
globals::GlobalsComponent<int> *global_timer_seconds;
globals::GlobalsComponent<int> *glogal_timer_adjustment;
globals::GlobalsComponent<int> *global_init_timer_seconds;
LambdaAction<> *lambdaaction;
rotary_encoder::RotaryEncoderAnticlockwiseTrigger *rotary_encoder_rotaryencoderanticlockwisetrigger;
Automation<> *automation_2;
LambdaAction<> *lambdaaction_2;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  //   {}
  // esphome:
  //   name: airqualityplayaer
  //   friendly_name: Air Quality and Player
  //   build_path: .esphome/build/airqualityplayaer
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2023.4.1
  App.pre_setup("airqualityplayaer", "Air Quality and Player", "", __DATE__ ", " __TIME__, false);
  // time:
  // media_player:
  // binary_sensor:
  // text_sensor:
  // display:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: Esphome-Web-airplayer
  //     password: '1234567890'
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   networks:
  //   - ssid: Tenda_16EF40
  //     password: '1234567890'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: airqualityplayaer.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("airqualityplayaer.local");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("Tenda_16EF40");
  wifi_wifiap_2.set_password("1234567890");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  }
  {
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Esphome-Web-airplayer");
  wifi_wifiap.set_password("1234567890");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  //   services: []
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: VdYFcBK7U6asCylpGancIfuNSNI9mcSukauTN7WuR1g=
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  api_apiserver->set_noise_psk({85, 214, 5, 112, 18, 187, 83, 166, 172, 11, 41, 105, 25, 169, 220, 33, 251, 141, 72, 210, 61, 153, 196, 174, 145, 171, 147, 55, 181, 174, 71, 88});
  // sensor:
  // i2c:
  //   sda: 33
  //   scl: 32
  //   scan: true
  //   id: i2c_arduinoi2cbus
  //   frequency: 50000.0
  i2c_arduinoi2cbus = new i2c::ArduinoI2CBus();
  i2c_arduinoi2cbus->set_component_source("i2c");
  App.register_component(i2c_arduinoi2cbus);
  i2c_arduinoi2cbus->set_sda_pin(33);
  i2c_arduinoi2cbus->set_scl_pin(32);
  i2c_arduinoi2cbus->set_frequency(50000);
  i2c_arduinoi2cbus->set_scan(true);
  // esp32:
  //   board: nodemcu-32s
  //   framework:
  //     version: 2.0.5
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32 @ 5.3.0
  //     type: arduino
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // time.homeassistant:
  //   platform: homeassistant
  //   id: ha_time
  //   timezone: EET-2EEST,M3.5.0/3,M10.5.0/4
  //   update_interval: 15min
  ha_time = new homeassistant::HomeassistantTime();
  ha_time->set_timezone("EET-2EEST,M3.5.0/3,M10.5.0/4");
  ha_time->set_update_interval(900000);
  ha_time->set_component_source("homeassistant.time");
  App.register_component(ha_time);
  // i2s_audio:
  //   i2s_lrclk_pin: 26
  //   i2s_bclk_pin: 27
  //   id: i2s_audio_i2saudiocomponent
  i2s_audio_i2saudiocomponent = new i2s_audio::I2SAudioComponent();
  i2s_audio_i2saudiocomponent->set_component_source("i2s_audio");
  App.register_component(i2s_audio_i2saudiocomponent);
  i2s_audio_i2saudiocomponent->set_bclk_pin(27);
  i2s_audio_i2saudiocomponent->set_lrclk_pin(26);
  // media_player.i2s_audio:
  //   platform: i2s_audio
  //   name: Air Player
  //   i2s_dout_pin: 25
  //   mode: mono
  //   disabled_by_default: false
  //   id: i2s_audio_i2saudiomediaplayer
  //   i2s_audio_id: i2s_audio_i2saudiocomponent
  //   dac_type: external
  i2s_audio_i2saudiomediaplayer = new i2s_audio::I2SAudioMediaPlayer();
  i2s_audio_i2saudiomediaplayer->set_component_source("i2s_audio.media_player");
  App.register_component(i2s_audio_i2saudiomediaplayer);
  App.register_media_player(i2s_audio_i2saudiomediaplayer);
  i2s_audio_i2saudiomediaplayer->set_name("Air Player");
  i2s_audio_i2saudiomediaplayer->set_object_id("air_player");
  i2s_audio_i2saudiomediaplayer->set_disabled_by_default(false);
  i2s_audio_i2saudiocomponent->register_audio_out(i2s_audio_i2saudiomediaplayer);
  i2s_audio_i2saudiomediaplayer->set_dout_pin(25);
  i2s_audio_i2saudiomediaplayer->set_external_dac_channels(1);
  // esp32_touch:
  //   id: esp32_touch_esp32touchcomponent
  //   setup_mode: false
  //   iir_filter: 0ms
  //   sleep_duration: 27306us
  //   measurement_duration: 8192us
  //   low_voltage_reference: 0.5V
  //   high_voltage_reference: 2.7V
  //   voltage_attenuation: 0V
  esp32_touch_esp32touchcomponent = new esp32_touch::ESP32TouchComponent();
  esp32_touch_esp32touchcomponent->set_component_source("esp32_touch");
  App.register_component(esp32_touch_esp32touchcomponent);
  esp32_touch_esp32touchcomponent->set_setup_mode(false);
  esp32_touch_esp32touchcomponent->set_iir_filter(0);
  esp32_touch_esp32touchcomponent->set_sleep_duration(4096);
  esp32_touch_esp32touchcomponent->set_measurement_duration(65535);
  esp32_touch_esp32touchcomponent->set_low_voltage_reference(TOUCH_LVOLT_0V5);
  esp32_touch_esp32touchcomponent->set_high_voltage_reference(TOUCH_HVOLT_2V7);
  esp32_touch_esp32touchcomponent->set_voltage_attenuation(TOUCH_HVOLT_ATTEN_0V);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Start Timer for 1 minute
  //   id: timer1minute
  //   key: 0
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  timer1minute = new tm1638::TM1638Key();
  App.register_binary_sensor(timer1minute);
  timer1minute->set_name("Start Timer for 1 minute");
  timer1minute->set_object_id("start_timer_for_1_minute");
  timer1minute->set_disabled_by_default(false);
  timer1minute->set_keycode(0);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Start Timer for 3 minutes
  //   id: timer3minutes
  //   key: 1
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  timer3minutes = new tm1638::TM1638Key();
  App.register_binary_sensor(timer3minutes);
  timer3minutes->set_name("Start Timer for 3 minutes");
  timer3minutes->set_object_id("start_timer_for_3_minutes");
  timer3minutes->set_disabled_by_default(false);
  timer3minutes->set_keycode(1);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Start Timer for 5 minutes
  //   id: timer5minutes
  //   key: 2
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  timer5minutes = new tm1638::TM1638Key();
  App.register_binary_sensor(timer5minutes);
  timer5minutes->set_name("Start Timer for 5 minutes");
  timer5minutes->set_object_id("start_timer_for_5_minutes");
  timer5minutes->set_disabled_by_default(false);
  timer5minutes->set_keycode(2);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Start Timer for 10 minutes
  //   id: timer10minutes
  //   key: 3
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  timer10minutes = new tm1638::TM1638Key();
  App.register_binary_sensor(timer10minutes);
  timer10minutes->set_name("Start Timer for 10 minutes");
  timer10minutes->set_object_id("start_timer_for_10_minutes");
  timer10minutes->set_disabled_by_default(false);
  timer10minutes->set_keycode(3);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Start Timer for 15 minutes
  //   id: timer15minutes
  //   key: 4
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  timer15minutes = new tm1638::TM1638Key();
  App.register_binary_sensor(timer15minutes);
  timer15minutes->set_name("Start Timer for 15 minutes");
  timer15minutes->set_object_id("start_timer_for_15_minutes");
  timer15minutes->set_disabled_by_default(false);
  timer15minutes->set_keycode(4);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Previus Frame
  //   id: previus_frame
  //   key: 5
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  previus_frame = new tm1638::TM1638Key();
  App.register_binary_sensor(previus_frame);
  previus_frame->set_name("Previus Frame");
  previus_frame->set_object_id("previus_frame");
  previus_frame->set_disabled_by_default(false);
  previus_frame->set_keycode(5);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Next Frame
  //   id: next_frame
  //   key: 6
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  next_frame = new tm1638::TM1638Key();
  App.register_binary_sensor(next_frame);
  next_frame->set_name("Next Frame");
  next_frame->set_object_id("next_frame");
  next_frame->set_disabled_by_default(false);
  next_frame->set_keycode(6);
  // binary_sensor.tm1638:
  //   platform: tm1638
  //   name: Toggle kitchen soket
  //   id: turnonkitchensoket
  //   key: 7
  //   disabled_by_default: false
  //   tm1638_id: tm1638_display
  turnonkitchensoket = new tm1638::TM1638Key();
  App.register_binary_sensor(turnonkitchensoket);
  turnonkitchensoket->set_name("Toggle kitchen soket");
  turnonkitchensoket->set_object_id("toggle_kitchen_soket");
  turnonkitchensoket->set_disabled_by_default(false);
  turnonkitchensoket->set_keycode(7);
  // binary_sensor.homeassistant:
  //   platform: homeassistant
  //   name: Kitchen Soket
  //   id: kitchensoket
  //   entity_id: switch.soket_switch
  //   disabled_by_default: false
  //   internal: true
  kitchensoket = new homeassistant::HomeassistantBinarySensor();
  App.register_binary_sensor(kitchensoket);
  kitchensoket->set_name("Kitchen Soket");
  kitchensoket->set_object_id("kitchen_soket");
  kitchensoket->set_disabled_by_default(false);
  kitchensoket->set_internal(true);
  kitchensoket->set_component_source("homeassistant.binary_sensor");
  App.register_component(kitchensoket);
  kitchensoket->set_entity_id("switch.soket_switch");
  // binary_sensor.homeassistant:
  //   platform: homeassistant
  //   name: synch toggle
  //   id: synchwithhaled
  //   entity_id: input_boolean.synchtoggle
  //   disabled_by_default: false
  //   internal: true
  synchwithhaled = new homeassistant::HomeassistantBinarySensor();
  App.register_binary_sensor(synchwithhaled);
  synchwithhaled->set_name("synch toggle");
  synchwithhaled->set_object_id("synch_toggle");
  synchwithhaled->set_disabled_by_default(false);
  synchwithhaled->set_internal(true);
  synchwithhaled->set_component_source("homeassistant.binary_sensor");
  App.register_component(synchwithhaled);
  synchwithhaled->set_entity_id("input_boolean.synchtoggle");
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: Gas detected Binary
  //   id: gasdetectedbinary
  //   pin:
  //     number: 19
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin
  //   disabled_by_default: false
  gasdetectedbinary = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gasdetectedbinary);
  gasdetectedbinary->set_name("Gas detected Binary");
  gasdetectedbinary->set_object_id("gas_detected_binary");
  gasdetectedbinary->set_disabled_by_default(false);
  gasdetectedbinary->set_component_source("gpio.binary_sensor");
  App.register_component(gasdetectedbinary);
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_19);
  esp32_esp32internalgpiopin->set_inverted(true);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  gasdetectedbinary->set_pin(esp32_esp32internalgpiopin);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: Set Timer Adjustment
  //   id: set_timer_adjustment
  //   pin:
  //     number: 18
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin_2
  //   disabled_by_default: false
  set_timer_adjustment = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(set_timer_adjustment);
  set_timer_adjustment->set_name("Set Timer Adjustment");
  set_timer_adjustment->set_object_id("set_timer_adjustment");
  set_timer_adjustment->set_disabled_by_default(false);
  set_timer_adjustment->set_component_source("gpio.binary_sensor");
  App.register_component(set_timer_adjustment);
  esp32_esp32internalgpiopin_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_2->set_pin(::GPIO_NUM_18);
  esp32_esp32internalgpiopin_2->set_inverted(true);
  esp32_esp32internalgpiopin_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_2->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  set_timer_adjustment->set_pin(esp32_esp32internalgpiopin_2);
  // binary_sensor.template:
  //   platform: template
  //   name: Timer is running
  //   id: timer_is_active
  //   lambda: !lambda " Add your custom logic here to determine the state of the virtual
  //     \ binary sensor\nif (id(global_timer_seconds) != 0 ) { return true; } \nelse { return
  //     \ false; }"
  //   disabled_by_default: false
  timer_is_active = new template_::TemplateBinarySensor();
  App.register_binary_sensor(timer_is_active);
  timer_is_active->set_name("Timer is running");
  timer_is_active->set_object_id("timer_is_running");
  timer_is_active->set_disabled_by_default(false);
  timer_is_active->set_component_source("template.binary_sensor");
  App.register_component(timer_is_active);
  // output:
  // output.tm1638:
  //   platform: tm1638
  //   id: gasdetectedled
  //   led: 0
  //   tm1638_id: tm1638_display
  gasdetectedled = new tm1638::TM1638OutputLed();
  gasdetectedled->set_component_source("tm1638.output");
  App.register_component(gasdetectedled);
  gasdetectedled->set_lednum(0);
  // output.tm1638:
  //   platform: tm1638
  //   id: LedKitchenSoket
  //   led: 1
  //   tm1638_id: tm1638_display
  LedKitchenSoket = new tm1638::TM1638OutputLed();
  LedKitchenSoket->set_component_source("tm1638.output");
  App.register_component(LedKitchenSoket);
  LedKitchenSoket->set_lednum(1);
  // output.tm1638:
  //   platform: tm1638
  //   id: Led3
  //   led: 3
  //   tm1638_id: tm1638_display
  Led3 = new tm1638::TM1638OutputLed();
  Led3->set_component_source("tm1638.output");
  App.register_component(Led3);
  Led3->set_lednum(3);
  // output.tm1638:
  //   platform: tm1638
  //   id: Led4
  //   led: 4
  //   tm1638_id: tm1638_display
  Led4 = new tm1638::TM1638OutputLed();
  Led4->set_component_source("tm1638.output");
  App.register_component(Led4);
  Led4->set_lednum(4);
  // output.tm1638:
  //   platform: tm1638
  //   id: Led5
  //   led: 5
  //   tm1638_id: tm1638_display
  Led5 = new tm1638::TM1638OutputLed();
  Led5->set_component_source("tm1638.output");
  App.register_component(Led5);
  Led5->set_lednum(5);
  // output.tm1638:
  //   platform: tm1638
  //   id: Led6
  //   led: 6
  //   tm1638_id: tm1638_display
  Led6 = new tm1638::TM1638OutputLed();
  Led6->set_component_source("tm1638.output");
  App.register_component(Led6);
  Led6->set_lednum(6);
  // output.tm1638:
  //   platform: tm1638
  //   id: Led7
  //   led: 7
  //   tm1638_id: tm1638_display
  Led7 = new tm1638::TM1638OutputLed();
  Led7->set_component_source("tm1638.output");
  App.register_component(Led7);
  Led7->set_lednum(7);
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: currenttemperature
  //   entity_id: sensor.openweathermap_temperature
  //   internal: true
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: currenttemperature
  currenttemperature = new homeassistant::HomeassistantSensor();
  App.register_sensor(currenttemperature);
  currenttemperature->set_name("currenttemperature");
  currenttemperature->set_object_id("currenttemperature");
  currenttemperature->set_disabled_by_default(false);
  currenttemperature->set_internal(true);
  currenttemperature->set_accuracy_decimals(1);
  currenttemperature->set_force_update(false);
  currenttemperature->set_component_source("homeassistant.sensor");
  App.register_component(currenttemperature);
  currenttemperature->set_entity_id("sensor.openweathermap_temperature");
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: feelLiketemperature
  //   entity_id: sensor.openweathermap_feels_like_temperature
  //   internal: true
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: feelLiketemperature
  feelLiketemperature = new homeassistant::HomeassistantSensor();
  App.register_sensor(feelLiketemperature);
  feelLiketemperature->set_name("feelLiketemperature");
  feelLiketemperature->set_object_id("feelliketemperature");
  feelLiketemperature->set_disabled_by_default(false);
  feelLiketemperature->set_internal(true);
  feelLiketemperature->set_accuracy_decimals(1);
  feelLiketemperature->set_force_update(false);
  feelLiketemperature->set_component_source("homeassistant.sensor");
  App.register_component(feelLiketemperature);
  feelLiketemperature->set_entity_id("sensor.openweathermap_feels_like_temperature");
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: forecasttemperature
  //   entity_id: sensor.openweathermap_forecast_temperature
  //   internal: true
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: forecasttemperature
  forecasttemperature = new homeassistant::HomeassistantSensor();
  App.register_sensor(forecasttemperature);
  forecasttemperature->set_name("forecasttemperature");
  forecasttemperature->set_object_id("forecasttemperature");
  forecasttemperature->set_disabled_by_default(false);
  forecasttemperature->set_internal(true);
  forecasttemperature->set_accuracy_decimals(1);
  forecasttemperature->set_force_update(false);
  forecasttemperature->set_component_source("homeassistant.sensor");
  App.register_component(forecasttemperature);
  forecasttemperature->set_entity_id("sensor.openweathermap_forecast_temperature");
  // sensor.aht10:
  //   platform: aht10
  //   address: 0x38
  //   update_interval: 30s
  //   temperature:
  //     name: internal temperature
  //     id: internal_temperature
  //     accuracy_decimals: 0
  //     filters:
  //     - calibrate_linear:
  //       - from: 0.0
  //         to: -8.5
  //       - from: 32.0
  //         to: 23.5
  //       type_id: sensor_calibratelinearfilter
  //     - sliding_window_moving_average:
  //         window_size: 10
  //         send_every: 10
  //         send_first_at: 1
  //       type_id: sensor_slidingwindowmovingaveragefilter
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: °C
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: internal Humidity
  //     id: internal_humidity
  //     accuracy_decimals: 0
  //     filters:
  //     - sliding_window_moving_average:
  //         window_size: 10
  //         send_every: 10
  //         send_first_at: 1
  //       type_id: sensor_slidingwindowmovingaveragefilter_2
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: '%'
  //     device_class: humidity
  //     state_class: measurement
  //   id: aht10_aht10component
  //   i2c_id: i2c_arduinoi2cbus
  aht10_aht10component = new aht10::AHT10Component();
  aht10_aht10component->set_update_interval(30000);
  aht10_aht10component->set_component_source("aht10.sensor");
  App.register_component(aht10_aht10component);
  aht10_aht10component->set_i2c_bus(i2c_arduinoi2cbus);
  aht10_aht10component->set_i2c_address(0x38);
  internal_temperature = new sensor::Sensor();
  App.register_sensor(internal_temperature);
  internal_temperature->set_name("internal temperature");
  internal_temperature->set_object_id("internal_temperature");
  internal_temperature->set_disabled_by_default(false);
  internal_temperature->set_device_class("temperature");
  internal_temperature->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  internal_temperature->set_unit_of_measurement("\302\260C");
  internal_temperature->set_accuracy_decimals(0);
  internal_temperature->set_force_update(false);
  sensor_calibratelinearfilter = new sensor::CalibrateLinearFilter(1.0f, -8.5f);
  sensor_slidingwindowmovingaveragefilter = new sensor::SlidingWindowMovingAverageFilter(10, 10, 1);
  internal_temperature->set_filters({sensor_calibratelinearfilter, sensor_slidingwindowmovingaveragefilter});
  aht10_aht10component->set_temperature_sensor(internal_temperature);
  internal_humidity = new sensor::Sensor();
  App.register_sensor(internal_humidity);
  internal_humidity->set_name("internal Humidity");
  internal_humidity->set_object_id("internal_humidity");
  internal_humidity->set_disabled_by_default(false);
  internal_humidity->set_device_class("humidity");
  internal_humidity->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  internal_humidity->set_unit_of_measurement("%");
  internal_humidity->set_accuracy_decimals(0);
  internal_humidity->set_force_update(false);
  sensor_slidingwindowmovingaveragefilter_2 = new sensor::SlidingWindowMovingAverageFilter(10, 10, 1);
  internal_humidity->set_filters({sensor_slidingwindowmovingaveragefilter_2});
  aht10_aht10component->set_humidity_sensor(internal_humidity);
  // sensor.bmp280:
  //   platform: bmp280
  //   address: 0x76
  //   update_interval: 30s
  //   temperature:
  //     id: internal_temperature2
  //     name: Temperature 2
  //     accuracy_decimals: 0
  //     filters:
  //     - sliding_window_moving_average:
  //         window_size: 10
  //         send_every: 10
  //         send_first_at: 1
  //       type_id: sensor_slidingwindowmovingaveragefilter_3
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: °C
  //     device_class: temperature
  //     state_class: measurement
  //     oversampling: 16X
  //   pressure:
  //     id: air_preasure
  //     name: Air Pressure
  //     accuracy_decimals: 1
  //     filters:
  //     - calibrate_linear:
  //       - from: 738.0
  //         to: 1015.0
  //       - from: 838.0
  //         to: 1115.0
  //       type_id: sensor_calibratelinearfilter_2
  //     - sliding_window_moving_average:
  //         window_size: 10
  //         send_every: 10
  //         send_first_at: 1
  //       type_id: sensor_slidingwindowmovingaveragefilter_4
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: hPa
  //     device_class: pressure
  //     state_class: measurement
  //     oversampling: 16X
  //   id: bmp280_bmp280component
  //   iir_filter: 'OFF'
  //   i2c_id: i2c_arduinoi2cbus
  bmp280_bmp280component = new bmp280::BMP280Component();
  bmp280_bmp280component->set_update_interval(30000);
  bmp280_bmp280component->set_component_source("bmp280.sensor");
  App.register_component(bmp280_bmp280component);
  bmp280_bmp280component->set_i2c_bus(i2c_arduinoi2cbus);
  bmp280_bmp280component->set_i2c_address(0x76);
  internal_temperature2 = new sensor::Sensor();
  App.register_sensor(internal_temperature2);
  internal_temperature2->set_name("Temperature 2");
  internal_temperature2->set_object_id("temperature_2");
  internal_temperature2->set_disabled_by_default(false);
  internal_temperature2->set_device_class("temperature");
  internal_temperature2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  internal_temperature2->set_unit_of_measurement("\302\260C");
  internal_temperature2->set_accuracy_decimals(0);
  internal_temperature2->set_force_update(false);
  sensor_slidingwindowmovingaveragefilter_3 = new sensor::SlidingWindowMovingAverageFilter(10, 10, 1);
  internal_temperature2->set_filters({sensor_slidingwindowmovingaveragefilter_3});
  bmp280_bmp280component->set_temperature_sensor(internal_temperature2);
  bmp280_bmp280component->set_temperature_oversampling(bmp280::BMP280_OVERSAMPLING_16X);
  air_preasure = new sensor::Sensor();
  App.register_sensor(air_preasure);
  air_preasure->set_name("Air Pressure");
  air_preasure->set_object_id("air_pressure");
  air_preasure->set_disabled_by_default(false);
  air_preasure->set_device_class("pressure");
  air_preasure->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  air_preasure->set_unit_of_measurement("hPa");
  air_preasure->set_accuracy_decimals(1);
  air_preasure->set_force_update(false);
  sensor_calibratelinearfilter_2 = new sensor::CalibrateLinearFilter(1.0f, 277.0f);
  sensor_slidingwindowmovingaveragefilter_4 = new sensor::SlidingWindowMovingAverageFilter(10, 10, 1);
  air_preasure->set_filters({sensor_calibratelinearfilter_2, sensor_slidingwindowmovingaveragefilter_4});
  bmp280_bmp280component->set_pressure_sensor(air_preasure);
  bmp280_bmp280component->set_pressure_oversampling(bmp280::BMP280_OVERSAMPLING_16X);
  // sensor.rotary_encoder:
  //   platform: rotary_encoder
  //   name: Timer Setup
  //   pin_a:
  //     number: 13
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin_3
  //   pin_b:
  //     number: 14
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin_4
  //   resolution: 2
  //   on_clockwise:
  //   - then:
  //     - lambda: !lambda |-
  //         id(global_timer_seconds) = id(global_timer_seconds) + (30 - id(global_timer_seconds)%30) ;
  //         id(glogal_timer_adjustment) = 3;
  //       type_id: lambdaaction
  //     automation_id: automation
  //     trigger_id: rotary_encoder_rotaryencoderclockwisetrigger
  //   on_anticlockwise:
  //   - then:
  //     - lambda: !lambda "if ( id(global_timer_seconds) >= 30 )\n{ \n  if (id(global_timer_seconds)%30
  //         \ != 0 )\n  { id(global_timer_seconds) = id(global_timer_seconds) - id(global_timer_seconds)%30
  //         \ ; }\n  else  {id(global_timer_seconds) = id(global_timer_seconds) - 30; }
  //         \ \n}\nelse {id(global_timer_seconds) = 0;}\nid(glogal_timer_adjustment) = 3;"
  //       type_id: lambdaaction_2
  //     automation_id: automation_2
  //     trigger_id: rotary_encoder_rotaryencoderanticlockwisetrigger
  //   disabled_by_default: false
  //   force_update: false
  //   id: rotary_encoder_rotaryencodersensor
  //   unit_of_measurement: steps
  //   icon: mdi:rotate-right
  //   accuracy_decimals: 0
  //   publish_initial_value: false
  //   restore_mode: RESTORE_DEFAULT_ZERO
  rotary_encoder_rotaryencodersensor = new rotary_encoder::RotaryEncoderSensor();
  App.register_sensor(rotary_encoder_rotaryencodersensor);
  rotary_encoder_rotaryencodersensor->set_name("Timer Setup");
  rotary_encoder_rotaryencodersensor->set_object_id("timer_setup");
  rotary_encoder_rotaryencodersensor->set_disabled_by_default(false);
  rotary_encoder_rotaryencodersensor->set_icon("mdi:rotate-right");
  rotary_encoder_rotaryencodersensor->set_unit_of_measurement("steps");
  rotary_encoder_rotaryencodersensor->set_accuracy_decimals(0);
  rotary_encoder_rotaryencodersensor->set_force_update(false);
  rotary_encoder_rotaryencodersensor->set_component_source("rotary_encoder.sensor");
  App.register_component(rotary_encoder_rotaryencodersensor);
  esp32_esp32internalgpiopin_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_3->set_pin(::GPIO_NUM_13);
  esp32_esp32internalgpiopin_3->set_inverted(false);
  esp32_esp32internalgpiopin_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_3->set_flags(gpio::Flags::FLAG_INPUT);
  rotary_encoder_rotaryencodersensor->set_pin_a(esp32_esp32internalgpiopin_3);
  esp32_esp32internalgpiopin_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_4->set_pin(::GPIO_NUM_14);
  esp32_esp32internalgpiopin_4->set_inverted(false);
  esp32_esp32internalgpiopin_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_4->set_flags(gpio::Flags::FLAG_INPUT);
  rotary_encoder_rotaryencodersensor->set_pin_b(esp32_esp32internalgpiopin_4);
  rotary_encoder_rotaryencodersensor->set_publish_initial_value(false);
  rotary_encoder_rotaryencodersensor->set_restore_mode(rotary_encoder::ROTARY_ENCODER_RESTORE_DEFAULT_ZERO);
  rotary_encoder_rotaryencodersensor->set_resolution(rotary_encoder::ROTARY_ENCODER_2_PULSES_PER_CYCLE);
  rotary_encoder_rotaryencoderclockwisetrigger = new rotary_encoder::RotaryEncoderClockwiseTrigger(rotary_encoder_rotaryencodersensor);
  automation = new Automation<>(rotary_encoder_rotaryencoderclockwisetrigger);
  // text_sensor.homeassistant:
  //   platform: homeassistant
  //   id: wethercondition
  //   name: Wether Condition
  //   entity_id: sensor.openweathermap_condition
  //   internal: true
  //   disabled_by_default: false
  wethercondition = new homeassistant::HomeassistantTextSensor();
  App.register_text_sensor(wethercondition);
  wethercondition->set_name("Wether Condition");
  wethercondition->set_object_id("wether_condition");
  wethercondition->set_disabled_by_default(false);
  wethercondition->set_internal(true);
  wethercondition->set_component_source("homeassistant.text_sensor");
  App.register_component(wethercondition);
  wethercondition->set_entity_id("sensor.openweathermap_condition");
  // text_sensor.homeassistant:
  //   platform: homeassistant
  //   id: forecastwethercondition
  //   name: Forecast Wether Condition
  //   entity_id: sensor.openweathermap_forecast_condition
  //   internal: true
  //   disabled_by_default: false
  forecastwethercondition = new homeassistant::HomeassistantTextSensor();
  App.register_text_sensor(forecastwethercondition);
  forecastwethercondition->set_name("Forecast Wether Condition");
  forecastwethercondition->set_object_id("forecast_wether_condition");
  forecastwethercondition->set_disabled_by_default(false);
  forecastwethercondition->set_internal(true);
  forecastwethercondition->set_component_source("homeassistant.text_sensor");
  App.register_component(forecastwethercondition);
  forecastwethercondition->set_entity_id("sensor.openweathermap_forecast_condition");
  // display.tm1638:
  //   platform: tm1638
  //   id: tm1638_display
  //   stb_pin:
  //     number: 21
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin_5
  //   clk_pin:
  //     number: 22
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin_6
  //   dio_pin:
  //     number: 23
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     drive_strength: 20.0
  //     id: esp32_esp32internalgpiopin_7
  //   intensity: 5
  //   update_interval: 100ms
  //   lambda: !lambda "char str[32];\n dtostrf(i, 8, 2, str);\n ESP_LOGI(\"main\", str
  //     \ );\n\n static int catchedi = 20;  16 =fraimtime(4)*numbers of fraims(4)  \n
  //     static int i = 0;\nstatic int j = 1500;\nstatic int countdowntime = 0;\nstatic int
  //     \ fraimtime = 40;  in terms of display update_interval-s  (4 sec)\nstatic bool
  //     \ gas_alart = false;\nstatic bool next_frame_button_released = false;\nstatic bool
  //     \ prev_frame_button_released = false;\nstatic bool exist_conntction_to_ha = false;\n
  //     static bool iniialLoaded = false;\n\nstatic float feel_like_temperature = -42; id(feelLiketemperature).state;\n
  //     static float forecast_temperature = -42; id(forecasttemperature).state;\nstatic
  //     \ float current_temperature = -42; id(currenttemperature).state;\nstatic std::string
  //     \ wether_condition = \"unLo\"; id(wethercondition).state;\nstatic std::string
  //     \ forecast_wether_condition = \"unLo\"; id(forecastwethercondition).state;\n \n
  //     \n\ncountdowntime = id(global_timer_seconds); \nif ( i>15000 ){ i=0; }  \nif ( j>15000
  //     \ ){ j=0; }  \n\nif (iniialLoaded == false and j % 50 == 0)\n{\n    if( id(synchwithhaled).state)\n
  //     \    { iniialLoaded = true; j = 2900; } \n}\n\n Get data form HA\nj++;\nif ( j
  //     \ % 3000 == 0 )  get data from HA every 5 mins\n{\n  feel_like_temperature   
  //     \  = id(feelLiketemperature).state; \n  forecast_temperature      = id(forecasttemperature).state;
  //     \ \n  current_temperature       = id(currenttemperature).state;\n  wether_condition
  //     \          = id(wethercondition).state; \n  forecast_wether_condition = id(forecastwethercondition).state;\n
  //     \  j=1;\n}\n\nif(id(kitchensoket).state)\n{ id(LedKitchenSoket).turn_on(); }\nelse
  //     \ { id(LedKitchenSoket).turn_off(); }\n switch frame\n\n       next frame\n
  //     if ( \n         id(next_frame).state \n    and next_frame_button_released   \n 
  //     \  ) \n{\n  it.printf(0, \"        \" );\n  i = i + (fraimtime - i%fraimtime) ;\n
  //     \   skip first 3 fraims becaues it shows same data\n  if ( i < 3 * fraimtime )
  //     \ { i = 3 * fraimtime; }\n  next_frame_button_released = false;\n}\nelse if(!id(next_frame).state)
  //     \ {next_frame_button_released = true;}\n       previus frame\nif ( \n        id(previus_frame).state
  //     \ \n    and i > 0 \n    and prev_frame_button_released \n   ) \n{ \n  it.printf(0,
  //     \ \"        \" );\n   skip first 3 fraims becaues it shows same data\n  if (i
  //     \ < 3 * fraimtime) \n  { i = 7 * fraimtime; }  last frame \n  else if \n  (\n
  //     \        i > 3 * fraimtime \n    and i < 4 * fraimtime\n  ) \n  { i=0; }\n  else
  //     \ { i = i - (fraimtime + i%fraimtime) ; }\n  prev_frame_button_released = false;\n
  //     }\nelse if(!id(previus_frame).state) {prev_frame_button_released = true;}\n\n\n
  //      dtostrf(i, 8, 2, str);\n ESP_LOGI(\"main\", str );\n\n GAS leds\nif (id(gasdetectedbinary).state
  //     \ and (i%20<10)) { id(gasdetectedled).turn_on(); } \nelse { id(gasdetectedled).turn_off();
  //     \ }\n\n set timer adjustment\nif (id(set_timer_adjustment).state) {id(glogal_timer_adjustment)
  //     \ = 0;}\nif (id(glogal_timer_adjustment) != 0 and i%10 == 0) {id(glogal_timer_adjustment)--;}
  //     \ \n\n synch with HA indicator\nif (i%150==0 ) \n{ \n    if ( id(synchwithhaled).state
  //     \ ) { exist_conntction_to_ha = true; }\n    else { exist_conntction_to_ha = false;
  //     \ }\n}\nif (exist_conntction_to_ha == true and i%50 == 0) { id(Led6).turn_on();
  //     \ }\nelse { id(Led6).turn_off(); }\n\n GAS alarm\nif (id(gasdetectedbinary).state)
  //     \ {gas_alart = true;}\n if (id(reset_gas_alarm).state) {gas_alart = false;}\n\n
  //     if (!gas_alart)\n{\n   COUNTDOWN\n  if (id(timer1minute).state   ) {countdowntime
  //     \ = 60;     it.printf(0, \"        \" );}      \n  if (id(timer3minutes).state 
  //     \ ) {countdowntime = 3*60;   it.printf(0, \"        \" );}      \n  if (id(timer5minutes).state
  //     \  ) {countdowntime = 5*60;   it.printf(0, \"        \" );}      \n  if (id(timer10minutes).state
  //     \ ) {countdowntime = 10*60;  it.printf(0, \"        \" );}      \n  if (id(timer15minutes).state
  //     \ ) {countdowntime = 15*60;  it.printf(0, \"        \" );}      \n  if (countdowntime
  //     \ != 0 and i%2 == 0 )\n  {\n    it.printf(0, \"        \" );\n    it.printf(0, \"
  //     %u.%02d\", countdowntime/60, countdowntime%60); \n    if (id(glogal_timer_adjustment)
  //     \ != 0) {it.printf(4, \" AdJ\" );}\n    if (i%10==0 and id(glogal_timer_adjustment)
  //     \ == 0 ){ countdowntime--; }\n  }\n\n  if (    id(timer1minute).state  \n      or
  //     \ id(timer3minutes).state  \n      or id(timer5minutes).state  \n      or id(timer10minutes).state
  //     \ \n      or id(timer15minutes).state  \n      or id(glogal_timer_adjustment) !=
  //     \ 0\n     )\n  { id(global_init_timer_seconds) = countdowntime ; }\n\n   WEATHER\n
  //     \  if (countdowntime == 0  )\n  {\n    if (\n           i == 0 * fraimtime\n   
  //     \     or i == 1 * fraimtime \n        or i == 2 * fraimtime \n       )\n    { \n
  //     \      it.printf(0, \"        \" );  clean screen\n      it.printf(0, \"%.f\"
  //     , feel_like_temperature); \n       it.printf(3, \"C\");\n      \n      if    
  //     \  (wether_condition == \"rainy\" )        {it.printf(4, \"rAin\" ); }\n      else
  //     \ if (wether_condition == \"cloudy\")        {it.printf(4, \"clo\"  ); }\n     
  //     \ else if (wether_condition == \"partlycloudy\")  {it.printf(4, \"Pclo\" ); }\n
  //     \      else if (wether_condition == \"fog\"   )        {it.printf(4, \"Fog\"  );
  //     \ }\n      else if (wether_condition == \"snowy\" )        {it.printf(4, \"snig\"
  //     \ ); }\n      else if (wether_condition == \"sunny\" )        {it.printf(4, \"sun\"
  //     \  ); }\n      else if (wether_condition == \"windy\" )        {it.printf(4, \"
  //     blo\"  ); }\n      else if (wether_condition == \"clear-night\" )  {it.printf(4,
  //     \ \"clrn\" ); }\n      else if (wether_condition == \"unLo\" )         {it.printf(4,
  //     \ \"unLo\" ); }\n      else {it.printf(4, \"unno\"  ); } \n    }\n    else if (i
  //     \ == 3 * fraimtime)\n    {\n       feel like temp at first screen\n      it.printf(0,
  //     \ \"        \" );  clean screen\n      it.printf(0, \"%.f\", feel_like_temperature);
  //     \ \n       it.printf(3, \"C\");\n\n      it.printf(4, \"%.f\", current_temperature);
  //     \ \n      it.printf(7, \"c\");\n    }\n    else if (i == 4 * fraimtime)\n    { \n
  //     \      it.printf(4, \"    \" );  clean screen\n      it.printf(4, \"%.f\", forecast_temperature
  //     \ ); \n      it.printf(7, \"F\");\n    }\n    else if (i == 5 * fraimtime)\n   
  //     \ { \n      it.printf(0, \"        \" );  clean screen\n       first screen\n
  //     \      if      (wether_condition == \"rainy\" )       {it.printf(0, \"rAin\" );
  //     \ }\n      else if (wether_condition == \"cloudy\")       {it.printf(0, \"clo\"
  //     \  ); }\n      else if (wether_condition == \"partlycloudy\") {it.printf(0, \"Pclo\"
  //     \ ); }\n      else if (wether_condition == \"fog\"   )       {it.printf(0, \"Fog\"
  //     \  ); }\n      else if (wether_condition == \"snowy\" )       {it.printf(0, \"snig\"
  //     \ ); }\n      else if (wether_condition == \"sunny\" )       {it.printf(0, \"sun\"
  //     \  ); }\n      else if (wether_condition == \"windy\" )       {it.printf(0, \"blo\"
  //     \  ); }\n      else if (wether_condition == \"clear-night\" ) {it.printf(0, \"clrn\"
  //     \ ); }\n      else if (wether_condition == \"unLo\" )        {it.printf(0, \"unLo\"
  //     \ ); }\n      else {it.printf(0, \"unno\"  ); } \n\n       second screen\n   
  //     \   if      (forecast_wether_condition == \"rainy\" )       {it.printf(4, \"rAin\"
  //     \ ); }\n      else if (forecast_wether_condition == \"cloudy\")       {it.printf(4,
  //     \ \"clo\"  ); }\n      else if (forecast_wether_condition == \"partlycloudy\") {it.printf(4,
  //     \ \"Pclo\" ); }\n      else if (forecast_wether_condition == \"fog\"   )       {it.printf(4,
  //     \ \"Fog\"  ); }\n      else if (forecast_wether_condition == \"snowy\" )       {it.printf(4,
  //     \ \"snig\" ); }\n      else if (forecast_wether_condition == \"sunny\" )       {it.printf(4,
  //     \ \"sun\"  ); }\n      else if (forecast_wether_condition == \"windy\" )       {it.printf(4,
  //     \ \"blo\"  ); }\n      else if (forecast_wether_condition == \"clear-night\" ) {it.printf(4,
  //     \ \"clrn\" ); }\n      else if (forecast_wether_condition == \"unLo\" )        {it.printf(4,
  //     \ \"unLo\" ); }\n      else {it.printf(4, \"unno\"  ); } \n\n    }\n    else if
  //     \ (i == 6 * fraimtime)\n    {\n      it.printf(0, \"        \" );  clean screen\n
  //     \      it.printf(0, \"t %.f\", id(internal_temperature).state); \n      it.printf(4,
  //     \ \"h %.f\", id(internal_humidity).state); \n    }\n    else if (i == 7 * fraimtime)\n
  //     \    {\n      it.printf(0, \"        \" );\n      it.printf(0, \"PrS \"); \n   
  //     \   it.printf(4, \"%.1f\", id(air_preasure).state); \n      \n       dtostrf(id(internal_temperature2).state,
  //     \ 8, 2, str);\n       ESP_LOGI(\"main\", str );\n    }\n    else if (i == 8 *
  //     \ fraimtime)\n    {\n       it.printf(0, \"        \" );\n       it.printf(0,
  //     \ \"GAS \" ); \n       it.printf(4, \"%.2f\", id(gasdetectorv).state); \n    }\n
  //     \  }\n}\nelse  if gas detected\n{\n   if ( i%40<20 ) \n   { \n     it.printf(0,
  //     \ \"GAS \" ); \n     it.printf(4, \"%.2f\", id(gasdetectorv).state); \n    
  //     \ id(gasdetectedled).turn_on();\n   }\n   else \n   { \n     it.printf(0,
  //     \ \"    \" ); \n     it.printf(4, \"%.2f \", id(gasdetectorv).state); \n   
  //     \  id(gasdetectedled).turn_off();\n   }\n}\n\ni++;\nid(global_timer_seconds) =
  //     \ countdowntime;\nif (i> 8 * fraimtime) {i=0;}  Number of fraims +1"
  tm1638_display = new tm1638::TM1638Component();
  tm1638_display->set_update_interval(100);
  tm1638_display->set_component_source("tm1638.display");
  App.register_component(tm1638_display);
  esp32_esp32internalgpiopin_6 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_6->set_pin(::GPIO_NUM_22);
  esp32_esp32internalgpiopin_6->set_inverted(false);
  esp32_esp32internalgpiopin_6->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_6->set_flags(gpio::Flags::FLAG_OUTPUT);
  tm1638_display->set_clk_pin(esp32_esp32internalgpiopin_6);
  esp32_esp32internalgpiopin_7 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_7->set_pin(::GPIO_NUM_23);
  esp32_esp32internalgpiopin_7->set_inverted(false);
  esp32_esp32internalgpiopin_7->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_7->set_flags(gpio::Flags::FLAG_OUTPUT);
  tm1638_display->set_dio_pin(esp32_esp32internalgpiopin_7);
  esp32_esp32internalgpiopin_5 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_5->set_pin(::GPIO_NUM_21);
  esp32_esp32internalgpiopin_5->set_inverted(false);
  esp32_esp32internalgpiopin_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_5->set_flags(gpio::Flags::FLAG_OUTPUT);
  tm1638_display->set_stb_pin(esp32_esp32internalgpiopin_5);
  tm1638_display->set_intensity(5);
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   {}
  tm1638_display->register_listener(timer1minute);
  tm1638_display->register_listener(timer3minutes);
  tm1638_display->register_listener(timer5minutes);
  tm1638_display->register_listener(timer10minutes);
  tm1638_display->register_listener(timer15minutes);
  tm1638_display->register_listener(previus_frame);
  tm1638_display->register_listener(next_frame);
  tm1638_display->register_listener(turnonkitchensoket);
  gasdetectedled->set_tm1638(tm1638_display);
  LedKitchenSoket->set_tm1638(tm1638_display);
  Led3->set_tm1638(tm1638_display);
  Led4->set_tm1638(tm1638_display);
  Led5->set_tm1638(tm1638_display);
  Led6->set_tm1638(tm1638_display);
  Led7->set_tm1638(tm1638_display);
  // globals:
  //   id: global_timer_seconds
  //   type: int
  //   restore_value: false
  //   initial_value: '0'
  global_timer_seconds = new globals::GlobalsComponent<int>(0);
  global_timer_seconds->set_component_source("globals");
  App.register_component(global_timer_seconds);
  // globals:
  //   id: glogal_timer_adjustment
  //   type: int
  //   restore_value: false
  //   initial_value: '0'
  glogal_timer_adjustment = new globals::GlobalsComponent<int>(0);
  glogal_timer_adjustment->set_component_source("globals");
  App.register_component(glogal_timer_adjustment);
  // globals:
  //   id: global_init_timer_seconds
  //   type: int
  //   restore_value: false
  //   initial_value: '0'
  global_init_timer_seconds = new globals::GlobalsComponent<int>(0);
  global_init_timer_seconds->set_component_source("globals");
  App.register_component(global_init_timer_seconds);
  tm1638_display->set_writer([=](tm1638::TM1638Component & it) -> void {
      #line 276 "air-player1.yaml"
      char str[32];
       
       
      
       
      static int i = 0;
      static int j = 1500;
      static int countdowntime = 0;
      static int fraimtime = 40;  
      static bool gas_alart = false;
      static bool next_frame_button_released = false;
      static bool prev_frame_button_released = false;
      static bool exist_conntction_to_ha = false;
      static bool iniialLoaded = false;
      
      static float feel_like_temperature = -42;  
      static float forecast_temperature = -42;  
      static float current_temperature = -42;  
      static std::string wether_condition = "unLo";  
      static std::string forecast_wether_condition = "unLo";  
       
      
      
      countdowntime = global_timer_seconds->value(); 
      if ( i>15000 ){ i=0; }  
      if ( j>15000 ){ j=0; }  
      
      if (iniialLoaded == false and j % 50 == 0)
      {
          if( synchwithhaled->state)
          { iniialLoaded = true; j = 2900; } 
      }
      
       
      j++;
      if ( j % 3000 == 0 )  
      {
        feel_like_temperature     = feelLiketemperature->state; 
        forecast_temperature      = forecasttemperature->state; 
        current_temperature       = currenttemperature->state;
        wether_condition          = wethercondition->state; 
        forecast_wether_condition = forecastwethercondition->state;
        j=1;
      }
      
      if(kitchensoket->state)
      { LedKitchenSoket->turn_on(); }
      else { LedKitchenSoket->turn_off(); }
       
      
             
      if ( 
               next_frame->state 
          and next_frame_button_released   
         ) 
      {
        it.printf(0, "        " );
        i = i + (fraimtime - i%fraimtime) ;
         
        if ( i < 3 * fraimtime ) { i = 3 * fraimtime; }
        next_frame_button_released = false;
      }
      else if(!next_frame->state) {next_frame_button_released = true;}
             
      if ( 
              previus_frame->state 
          and i > 0 
          and prev_frame_button_released 
         ) 
      { 
        it.printf(0, "        " );
         
        if (i < 3 * fraimtime) 
        { i = 7 * fraimtime; }  
        else if 
        (
              i > 3 * fraimtime 
          and i < 4 * fraimtime
        ) 
        { i=0; }
        else { i = i - (fraimtime + i%fraimtime) ; }
        prev_frame_button_released = false;
      }
      else if(!previus_frame->state) {prev_frame_button_released = true;}
      
      
       
       
      
       
      if (gasdetectedbinary->state and (i%20<10)) { gasdetectedled->turn_on(); } 
      else { gasdetectedled->turn_off(); }
      
       
      if (set_timer_adjustment->state) {glogal_timer_adjustment->value() = 0;}
      if (glogal_timer_adjustment->value() != 0 and i%10 == 0) {glogal_timer_adjustment->value()--;} 
      
       
      if (i%150==0 ) 
      { 
          if ( synchwithhaled->state ) { exist_conntction_to_ha = true; }
          else { exist_conntction_to_ha = false; }
      }
      if (exist_conntction_to_ha == true and i%50 == 0) { Led6->turn_on(); }
      else { Led6->turn_off(); }
      
       
      if (gasdetectedbinary->state) {gas_alart = true;}
       
      
      if (!gas_alart)
      {
         
        if (timer1minute->state   ) {countdowntime = 60;     it.printf(0, "        " );}      
        if (timer3minutes->state  ) {countdowntime = 3*60;   it.printf(0, "        " );}      
        if (timer5minutes->state  ) {countdowntime = 5*60;   it.printf(0, "        " );}      
        if (timer10minutes->state ) {countdowntime = 10*60;  it.printf(0, "        " );}      
        if (timer15minutes->state ) {countdowntime = 15*60;  it.printf(0, "        " );}      
        if (countdowntime != 0 and i%2 == 0 )
        {
          it.printf(0, "        " );
          it.printf(0, "%u.%02d", countdowntime/60, countdowntime%60); 
          if (glogal_timer_adjustment->value() != 0) {it.printf(4, " AdJ" );}
          if (i%10==0 and glogal_timer_adjustment->value() == 0 ){ countdowntime--; }
        }
      
        if (    timer1minute->state  
            or timer3minutes->state  
            or timer5minutes->state  
            or timer10minutes->state 
            or timer15minutes->state  
            or glogal_timer_adjustment->value() != 0
           )
        { global_init_timer_seconds->value() = countdowntime ; }
      
         
        if (countdowntime == 0  )
        {
          if (
                 i == 0 * fraimtime
              or i == 1 * fraimtime 
              or i == 2 * fraimtime 
             )
          { 
            it.printf(0, "        " );  
            it.printf(0, "%.f", feel_like_temperature); 
             
            
            if      (wether_condition == "rainy" )        {it.printf(4, "rAin" ); }
            else if (wether_condition == "cloudy")        {it.printf(4, "clo"  ); }
            else if (wether_condition == "partlycloudy")  {it.printf(4, "Pclo" ); }
            else if (wether_condition == "fog"   )        {it.printf(4, "Fog"  ); }
            else if (wether_condition == "snowy" )        {it.printf(4, "snig" ); }
            else if (wether_condition == "sunny" )        {it.printf(4, "sun"  ); }
            else if (wether_condition == "windy" )        {it.printf(4, "blo"  ); }
            else if (wether_condition == "clear-night" )  {it.printf(4, "clrn" ); }
            else if (wether_condition == "unLo" )         {it.printf(4, "unLo" ); }
            else {it.printf(4, "unno"  ); } 
          }
          else if (i == 3 * fraimtime)
          {
             
            it.printf(0, "        " );  
            it.printf(0, "%.f", feel_like_temperature); 
             
      
            it.printf(4, "%.f", current_temperature); 
            it.printf(7, "c");
          }
          else if (i == 4 * fraimtime)
          { 
            it.printf(4, "    " );  
            it.printf(4, "%.f", forecast_temperature ); 
            it.printf(7, "F");
          }
          else if (i == 5 * fraimtime)
          { 
            it.printf(0, "        " );  
             
            if      (wether_condition == "rainy" )       {it.printf(0, "rAin" ); }
            else if (wether_condition == "cloudy")       {it.printf(0, "clo"  ); }
            else if (wether_condition == "partlycloudy") {it.printf(0, "Pclo" ); }
            else if (wether_condition == "fog"   )       {it.printf(0, "Fog"  ); }
            else if (wether_condition == "snowy" )       {it.printf(0, "snig" ); }
            else if (wether_condition == "sunny" )       {it.printf(0, "sun"  ); }
            else if (wether_condition == "windy" )       {it.printf(0, "blo"  ); }
            else if (wether_condition == "clear-night" ) {it.printf(0, "clrn" ); }
            else if (wether_condition == "unLo" )        {it.printf(0, "unLo" ); }
            else {it.printf(0, "unno"  ); } 
      
             
            if      (forecast_wether_condition == "rainy" )       {it.printf(4, "rAin" ); }
            else if (forecast_wether_condition == "cloudy")       {it.printf(4, "clo"  ); }
            else if (forecast_wether_condition == "partlycloudy") {it.printf(4, "Pclo" ); }
            else if (forecast_wether_condition == "fog"   )       {it.printf(4, "Fog"  ); }
            else if (forecast_wether_condition == "snowy" )       {it.printf(4, "snig" ); }
            else if (forecast_wether_condition == "sunny" )       {it.printf(4, "sun"  ); }
            else if (forecast_wether_condition == "windy" )       {it.printf(4, "blo"  ); }
            else if (forecast_wether_condition == "clear-night" ) {it.printf(4, "clrn" ); }
            else if (forecast_wether_condition == "unLo" )        {it.printf(4, "unLo" ); }
            else {it.printf(4, "unno"  ); } 
      
          }
          else if (i == 6 * fraimtime)
          {
            it.printf(0, "        " );  
            it.printf(0, "t %.f", internal_temperature->state); 
            it.printf(4, "h %.f", internal_humidity->state); 
          }
          else if (i == 7 * fraimtime)
          {
            it.printf(0, "        " );
            it.printf(0, "PrS "); 
            it.printf(4, "%.1f", air_preasure->state); 
            
             
             
          }
          else if (i == 8 * fraimtime)
          {
             
             
             
          }
        }
      }
      else  
      {
         
         
         
         
         
         
         
         
         
         
         
         
      }
      
      i++;
      global_timer_seconds->value() = countdowntime;
      if (i> 8 * fraimtime) {i=0;}  
  });
  timer_is_active->set_template([=]() -> optional<bool> {
      #line 130 "air-player1.yaml"
       
      if (global_timer_seconds->value() != 0 ) { return true; } 
      else { return false; }
  });
  lambdaaction = new LambdaAction<>([=]() -> void {
      #line 227 "air-player1.yaml"
      global_timer_seconds->value() = global_timer_seconds->value() + (30 - global_timer_seconds->value()%30) ;
      glogal_timer_adjustment->value() = 3;
  });
  automation->add_actions({lambdaaction});
  rotary_encoder_rotaryencoderanticlockwisetrigger = new rotary_encoder::RotaryEncoderAnticlockwiseTrigger(rotary_encoder_rotaryencodersensor);
  automation_2 = new Automation<>(rotary_encoder_rotaryencoderanticlockwisetrigger);
  lambdaaction_2 = new LambdaAction<>([=]() -> void {
      #line 231 "air-player1.yaml"
      if ( global_timer_seconds->value() >= 30 )
      { 
        if (global_timer_seconds->value()%30 != 0 )
        { global_timer_seconds->value() = global_timer_seconds->value() - global_timer_seconds->value()%30 ; }
        else  {global_timer_seconds->value() = global_timer_seconds->value() - 30; } 
      }
      else {global_timer_seconds->value() = 0;}
      glogal_timer_adjustment->value() = 3;
  });
  automation_2->add_actions({lambdaaction_2});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
