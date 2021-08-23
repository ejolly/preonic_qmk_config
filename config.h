#pragma once

/* Adjust tap timing for multi-function keys 
    When a dual-function key is held down for longer than TAPPING_TERM
    trigger it's modifier functionality. Otherwise treat it like a normal
    non-modified key-press.

    IGNORE_MOD_TAP_INTERRUPT additionally requires the second key pressed while the 
    dual-function key is pressed to be held for TAPPING_TERM. This makes typing quickly
    without accidentally triggering modifiers or incurring a delay on dual-function keys. As long as your finger doesn't linger on the dual-function key for more than
    TAPPING_TERM you won't get accidental modifiers.
*/
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT

// Play startup sound when keyboard is plugged in
#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
#endif

/* MUSIC MODE
    The MU_TOG key will switch this on and off
    The MU_MOD key will cycle between keyboard styles
    *_MULTIPLEXING allows midi notes to be rapidly oscillated
    simulating playing chords when hold multiple keys
*/
#define MUSIC_MASK (keycode != KC_NO)
#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 50

/* Enable basic MIDI features */
// #define MIDI_BASIC

/* Optionally enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
