/*
 * Sequences.h
 *
 *  Created on: 09 ���. 2015 �.
 *      Author: Kreyl
 */

#ifndef SEQUENCES_H_
#define SEQUENCES_H_

#include "ChunkTypes.h"

#if 1 // ======================== Single LED Blink==============================
const BaseChunk_t lsqBlink[] = {
        {csSetup, 1},
        {csWait, 153},
        {csSetup, 0},
        {csEnd}
};
#endif

#if 0 // ========================== LED RGB blink ==============================
const LedChunk_t lsqIdle[] = {
        {csSetup, 0, clBlack},
        {csEnd}
};

const LedChunk_t lsqError[] = {
        {csSetup, 0, clRed},
        {csWait, 4005},
        {csSetup, 0, clBlack},
        {csEnd}
};

// ======= Adding / removing IDs ========
// ==== Access ====
#define LSQ_ACCESS_ADD_CLR      clGreen
#define LSQ_ACCESS_REMOVE_CLR   clRed
const LedChunk_t lsqAddingAccessWaiting[] = {
        {csSetup, 0, LSQ_ACCESS_ADD_CLR},
        {csEnd}
};
const LedChunk_t lsqAddingAccessNew[] = {
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, LSQ_ACCESS_ADD_CLR},
        {csEnd}
};
const LedChunk_t lsqAddingAccessError[] = {
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, LSQ_ACCESS_ADD_CLR},
        {csEnd}
};

const LedChunk_t lsqRemovingAccessWaiting[] = {
        {csSetup, 0, LSQ_ACCESS_REMOVE_CLR},
        {csEnd}
};
const LedChunk_t lsqRemovingAccessNew[] = {
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, LSQ_ACCESS_REMOVE_CLR},
        {csEnd}
};

// ==== Adder ====
#define LSQ_ADDER_ADD_CLR       clBlue
#define LSQ_ADDER_REMOVE_CLR    clMagenta
const LedChunk_t lsqAddingAdderWaiting[] = {
        {csSetup, 0, LSQ_ADDER_ADD_CLR},
        {csEnd}
};
const LedChunk_t lsqAddingAdderNew[] = {
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, LSQ_ADDER_ADD_CLR},
        {csEnd}
};
const LedChunk_t lsqAddingAdderError[] = {
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, LSQ_ADDER_ADD_CLR},
        {csEnd}
};

const LedChunk_t lsqRemovingAdderWaiting[] = {
        {csSetup, 0, LSQ_ADDER_REMOVE_CLR},
        {csEnd}
};
const LedChunk_t lsqRemovingAdderNew[] = {
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, LSQ_ADDER_REMOVE_CLR},
        {csEnd}
};

// ==== Remover ====
#define LSQ_REMOVER_ADD_CLR     clCyan
#define LSQ_REMOVER_REMOVE_CLR  clYellow
const LedChunk_t lsqAddingRemoverWaiting[] = {
        {csSetup, 0, LSQ_REMOVER_ADD_CLR},
        {csEnd}
};
const LedChunk_t lsqAddingRemoverNew[] = {
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, LSQ_REMOVER_ADD_CLR},
        {csEnd}
};
const LedChunk_t lsqAddingRemoverError[] = {
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, clRed},
        {csWait, 99},
        {csSetup, 0, clBlack},
        {csWait, 99},
        {csSetup, 0, LSQ_REMOVER_ADD_CLR},
        {csEnd}
};

const LedChunk_t lsqRemovingRemoverWaiting[] = {
        {csSetup, 0, LSQ_REMOVER_REMOVE_CLR},
        {csEnd}
};
const LedChunk_t lsqRemovingRemoverNew[] = {
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, LSQ_REMOVER_REMOVE_CLR},
        {csEnd}
};

// ==== Erase all ====
const LedChunk_t lsqEraseAll[] = {
        {csSetup, 0, clRed},
        {csWait, 180},
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, clRed},
        {csWait, 180},
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, clRed},
        {csWait, 180},
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, clRed},
        {csWait, 180},
        {csSetup, 0, clBlack},
        {csEnd}
};

// General
const LedChunk_t lsqBlinkGreen[] = {
        {csSetup, 0, clGreen},
        {csWait, 180},
        {csSetup, 0, clBlack},
        {csEnd}
};

const LedChunk_t lsqBlinkGreenX2[] = {
        {csSetup, 0, clGreen},
        {csWait, 180},
        {csSetup, 0, clBlack},
        {csWait, 180},
        {csSetup, 0, clGreen},
        {csWait, 180},
        {csSetup, 0, clBlack},
//        {csWait, 999},
//        {csGoto, 0}
        {csEnd}
};
#endif

#if 0 // ============================ LED RGB ==================================
// ==== Door ====
#define clDoorOpen      ((Color_t){0,   255, 0})
#define clDoorClosed    ((Color_t){18,  0,   0})
#define clWrongKey      ((Color_t){255, 0,   0})
#define clSecretKey     ((Color_t){0,   0,   255})

const LedChunk_t lsqDoorOpen[] = {
        {csSetup, 630, clDoorOpen},
        {csEnd}
};
const LedChunk_t lsqDoorClose[] = {
        {csSetup, 630, clDoorClosed},
        {csEnd}
};
const LedChunk_t lsqDoorWrongKey[] = {
        {csSetup, 0, clWrongKey},
        {csWait, 99},
        {csSetup, 360, clDoorClosed},
        {csEnd}
};

const LedChunk_t lsqDoorSecretKey[] = {
        {csSetup, 0, clSecretKey},
        {csWait, 99},
        {csSetup, 360, clDoorClosed},
        {csEnd}
};

#endif

#if 0 // =========================== LED Smooth ================================
#define LED_TOP_BRIGHTNESS  255

const LedSmoothChunk_t lsqFadeIn[] = {
        {csSetup, 630, LED_TOP_BRIGHTNESS},
        {csEnd}
};
const LedSmoothChunk_t lsqFadeOut[] = {
        {csSetup, 630, 0},
        {csEnd}
};
const LedSmoothChunk_t lsqEnterActive[] = {
        {csSetup, 0, LED_TOP_BRIGHTNESS},
        {csEnd}
};
const LedSmoothChunk_t lsqEnterIdle[] = {
        {csSetup, 360, 0},
        {csEnd}
};

#endif

#if 0 // ============================= Beeper ==================================
#define BEEP_VOLUME     2

// Type, duration_ms, freq, volume
const BeepChunk_t bsqButton[] = {
        {csSetup, 1, 1975},
        {csWait, 54},
        {csSetup, 0},
        {csEnd}
};
const BeepChunk_t bsqBeepBeep[] = {
        {csSetup, BEEP_VOLUME, 1975},
        {csWait, 54},
        {csSetup, 0},
        {csWait, 54},
        {csSetup, BEEP_VOLUME, 1975},
        {csWait, 54},
        {csSetup, 0},
        {csEnd}
};
#endif

#endif /* SEQUENCES_H_ */
