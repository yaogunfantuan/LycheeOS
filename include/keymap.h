/***************************************************************************
 *
 *  keymap.h-键盘到字符映射的定义
 *  Copyright (C) 2010 杨习辉
 **************************************************************************/
 
#ifndef _KEYMAP_H
#define _KEYMAP_H

#include "type.h"
#include "keyboard.h"

/*keymap真是个天才的想法*/
public unsigned int keymap[NR_SCAN_CODES * KEYMAP_COLS] = {

/*  scan code               !shift          shift           E0 | E1*/
/*-----------------------------------------------------------------*/
/*  0x00 - no key       */  0,              0,              0,
/*  0x01 -              */  ESC,            0,              0,
/*  0x02 -              */  '1',            '!',            0,
/*  0x03 -              */  '2',            '@',            0,
/*  0x04 -              */  '3',            '#',            0,
/*  0x05 -              */  '4',            '$',            0,
/*  0x06 -              */  '5',            '%',            0,
/*  0x07 -              */  '6',            '^',            0,
/*  0x08 -              */  '7',            '&',            0,
/*  0x09 -              */  '8',            '*',            0,
/*  0x0A -              */  '9',            '(',            0,
/*  0x0B -              */  '0',            ')',            0,
/*  0x0C -              */  '-',            '_',            0,
/*  0x0D -              */  '=',            '+',            0,
/*  0x0E -              */  BACKSPACE,      BACKSPACE,      0,
/*  0x0F -              */  TAB,            TAB,            0,
/*  0x10 -              */  'q',            'Q',            0,
/*  0x11 -              */  'w',            'W',            0,
/*  0x12 -              */  'e',            'E',            0,
/*  0x13 -              */  'r',            'R',            0,
/*  0x14 -              */  't',            'T',            0,
/*  0x15 -              */  'y',            'Y',            0,
/*  0x16 -              */  'u',            'U',            0,
/*  0x17 -              */  'i',            'I',            0,
/*  0x18 -              */  'o',            'O',            0,
/*  0x19 -              */  'p',            'P',            0,
/*  0x1A -              */  '[',            '{',            0,
/*  0x1B -              */  ']',            '}',            0,
/*  0x1C -              */  ENTER,          ENTER,          NUMPAD_ENTER,
/*  0x1D -              */  CTRL_L,         CTRL_L,         CTRL_R,
/*  0x1E -              */  'a',            'A',            0,
/*  0x1F -              */  's',            'S',            0,
/*  0x20 -              */  'd',            'D',            0,
/*  0x21 -              */  'f',            'F',            0,
/*  0x22 -              */  'g',            'G',            0,
/*  0x23 -              */  'h',            'H',            0,
/*  0x24 -              */  'j',            'J',            0,
/*  0x25 -              */  'k',            'K',            0,
/*  0x26 -              */  'l',            'L',            0,
/*  0x27 -              */  ';',            ':',            0,
/*  0x28 -              */  '\'',           '"',            0,
/*  0x29 -              */  '`',            '~',            0,
/*  0x2A -              */  SHIFT_L,        SHIFT_L,        0,
/*  0x2B -              */  '\\',           '|',            0,
/*  0x2C -              */  'z',            'Z',            0,
/*  0x2D -              */  'x',            'X',            0,
/*  0x2E -              */  'c',            'C',            0,
/*  0x2F -              */  'v',            'V',            0,
/*  0x30 -              */  'b',            'B',            0,
/*  0x31 -              */  'n',            'N',            0,
/*  0x32 -              */  'm',            'M',            0,
/*  0x33 -              */  ',',            '<',            0,
/*  0x34 -              */  '.',            '>',            0,
/*  0x35 -              */  '/',            '?',            NUMPAD_SLASH,
/*  0x36 -              */  SHIFT_R,        SHIFT_R,        0,
/*  0x37 -              */  NUMPAD_STAR,    NUMPAD_STAR,    0,
/*  0x38 -              */  ALT_L,          ALT_L,          ALT_R,
/*  0x39 -              */  ' ',            ' ',            0,
/*  0x3A -              */  CAPS_LOCK,      CAPS_LOCK,      0,
/*  0x3B -              */  F1,             F1,             0,
/*  0x3C -              */  F2,             F2,             0,
/*  0x3D -              */  F3,             F3,             0,
/*  0x3E -              */  F4,             F4,             0,
/*  0x3F -              */  F5,             F5,             0,
/*  0x40 -              */  F6,             F6,             0,
/*  0x41 -              */  F7,             F7,             0,
/*  0x42 -              */  F8,             F8,             0,
/*  0x43 -              */  F9,             F9,             0,
/*  0x44 -              */  F10,            F10,            0,
/*  0x45 -              */  NUM_LOCK,       NUM_LOCK,       0,
/*  0x46 -              */  SCROLL_LOCK,    SCROLL_LOCK,    0,
/*  0x47 -              */  NUMPAD_HOME,    NUMPAD_HOME,    HOME,
/*  0x48 -              */  NUMPAD_UP,      NUMPAD_UP,      UPARROW,
/*  0x49 -              */  NUMPAD_PAGEUP,  NUMPAD_PAGEUP,  PAGEUP,
/*  0x4A -              */  NUMPAD_MINUS,   NUMPAD_MINUS,   0,
/*  0x4B -              */  NUMPAD_LEFT,    NUMPAD_LEFT,    LEFTARROW,
/*  0x4C -              */  NUMPAD_MID,     NUMPAD_MID,     0,
/*  0x4D -              */  NUMPAD_RIGHT,   NUMPAD_RIGHT,   RIGHTARROW,
/*  0x4E -              */  NUMPAD_PLUS,    NUMPAD_PLUS,    0,
/*  0x4F -              */  NUMPAD_END,     NUMPAD_END,     END,
/*  0x50 -              */  NUMPAD_DOWN,    NUMPAD_DOWN,    DOWNARROW,
/*  0x51 -              */  NUMPAD_PAGEDOWN,NUMPAD_PAGEDOWN,PAGEDOWN,
/*  0x52 -              */  NUMPAD_INS,     NUMPAD_INS,     INSERT,
/*  0x53 -              */  NUMPAD_DOT,     NUMPAD_DOT,     0,
/*  0x54 -              */  0,              0,              0,
/*  0x55 -              */  0,              0,              0,
/*  0x56 -              */  0,              0,              0,
/*  0x57 -              */  F11,            F11,            0,
/*  0x58 -              */  F12,            F12,            0,
/*  0x59 -              */  0,              0,              0,
/*  0x5A -              */  0,              0,              0,
/*  0x5B -              */  0,              0,              GUI_L,
/*  0x5C -              */  0,              0,              GUI_R,
/*  0x5D -              */  0,              0,              APPS,
/*  0x5E -              */  0,              0,              0,
/*  0x5F -              */  0,              0,              0,
/*  0x60 -              */  0,              0,              0,
/*  0x61 -              */  0,              0,              0,
/*  0x62 -              */  0,              0,              0,
/*  0x63 -              */  0,              0,              0,
/*  0x64 -              */  0,              0,              0,
/*  0x65 -              */  0,              0,              0,
/*  0x66 -              */  0,              0,              0,
/*  0x67 -              */  0,              0,              0,
/*  0x68 -              */  0,              0,              0,
/*  0x69 -              */  0,              0,              0,
/*  0x6A -              */  0,              0,              0,
/*  0x6B -              */  0,              0,              0,
/*  0x6C -              */  0,              0,              0,
/*  0x6D -              */  0,              0,              0,
/*  0x6E -              */  0,              0,              0,
/*  0x6F -              */  0,              0,              0,
/*  0x70 -              */  0,              0,              0,
/*  0x71 -              */  0,              0,              0,
/*  0x72 -              */  0,              0,              0,
/*  0x73 -              */  0,              0,              0,
/*  0x74 -              */  0,              0,              0,
/*  0x75 -              */  0,              0,              0,
/*  0x76 -              */  0,              0,              0,
/*  0x77 -              */  0,              0,              0,
/*  0x78 -              */  0,              0,              0,
/*  0x79 -              */  0,              0,              0,
/*  0x7A -              */  0,              0,              0,
/*  0x7B -              */  0,              0,              0,
/*  0x7C -              */  0,              0,              0,
/*  0x7D -              */  0,              0,              0,
/*  0x7E -              */  0,              0,              0,
/*  0x7F -              */  0,              0,              0

};

public u32 numpad_map[NR_NUMPAD_KEY] = {
    '/','*','-','+',ENTER,'.','0','1','2','3','4','5','6','7','8','9'
};

#endif