/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 149

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 13

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 8

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 120

#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 70

#define FIRMWARE_VERSION u8"oqJ0w/LdQXA"
#define RGB_MATRIX_STARTUP_SPD 60

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
