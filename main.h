/* 
 * File:   main.h
 * Author: trimo
 *
 * Created on 24 March, 2024, 5:54 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#define WASHING_PROGRAME_DISPLAY        0x01
#define WATER_LEVEL                     0x02
#define START_STOP_SCREEN               0x03
#define START_PROGRAME                  0x04
#define PAUSE                           0x05

#define WASHING_PROGRAME_DISPLAY_RESET  0x10
#define WATER_LEVEL_RESET               0x11
#define START_PROGRAME_RESET            0x12
#define RESET_NOTHING                   0x00

#define FAN                             RC2
#define FAN_DDR                         TRISC2
#define ON                              1
#define OFF                             0
#define BUZZER                          RC1
#define BUZZER_DDR                      TRISC1

void power_on_screen(void);
void washing_program_display(unsigned char key);
void water_level_display(unsigned char key);
void run_program(unsigned char key);
void set_time(void);
void door_status_check(void);

#endif	/* MAIN_H */

