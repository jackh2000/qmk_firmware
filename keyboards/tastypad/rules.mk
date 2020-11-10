# MCU name
MCU = atmega32u4

# Bootloader selection
#    Teensy	halfkay
#    Pro Micro	caterina
#    Atmel DFU	atmel-dfu
#    LUFA DFU	lufa-dfu
#    QMK DFU	qmk-dfu
#    ATmega32A	bootloadHID
#    ATmega328P	USBasp
BOOTLOADER = atmel-dfu

# Build Options
# 	change to "no" to disable the options, or define them in the Makefile in
# 	the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no
ENCODER_ENABLE = yes
