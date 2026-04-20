/*
 * Key position defines for TOTEM (38 keys)
 *
 *      ╭───┬───┬───┬───┬───╮       ╭───┬───┬───┬───┬───╮
 *      │ 0 │ 1 │ 2 │ 3 │ 4 │       │ 5 │ 6 │ 7 │ 8 │ 9 │
 * ╭────┼───┼───┼───┼───┼───┼       ├───┼───┼───┼───┼───┼────╮
 * │ 20 │10 │11 │12 │13 │14 │       │15 │16 │17 │18 │19 │ 31 │
 * ╰────┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼────╯
 *      │21 │22 │23 │24 │25 │       │26 │27 │28 │29 │30 │
 *      ╰───┴───┼───┼───┼───┤       ├───┼───┼───┼───┴───╯
 *              │32 │33 │34 │       │35 │36 │37 │
 *              ╰───┴───┴───╯       ╰───┴───┴───╯
 */

#pragma once

#define LT4  0 // Left-Top (QWERTY) row
#define LT3  1
#define LT2  2
#define LT1  3
#define LT0  4

#define RT0  5 // Right-Top (QWERTY) row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define LM5 20 // Left-Middle (ASDFGH) row — extra pinky
#define LM4 10
#define LM3 11
#define LM2 12
#define LM1 13
#define LM0 14

#define RM0 15 // Right-Middle (ASDFGH) row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19
#define RM5 31 // Right extra pinky

#define LB4 21 // Left-Bottom (ZXCVBN) row
#define LB3 22
#define LB2 23
#define LB1 24
#define LB0 25

#define RB0 26 // Right-Bottom (ZXCVBN) row
#define RB1 27
#define RB2 28
#define RB3 29
#define RB4 30

#define LH2 32 // Left Thumb Cluster
#define LH1 33
#define LH0 34

#define RH0 35 // Right Thumb Cluster
#define RH1 36
#define RH2 37

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4
#define THUMBS LH0 LH1 LH2 RH0 RH1 RH2
