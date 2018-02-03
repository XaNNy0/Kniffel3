//
// Created by BEDNARSKIJ on 21.12.2017.
//

#include "Die.h"

#ifndef KNIFFEL3_SCORECARD_H
#define KNIFFEL3_SCORECARD_H

//TODO: Use isStrike
typedef struct ScorecardEntry {
    char *name;
    char *description;

    int (*calculation)(Dice *dice);

    int value;
    bool hasBeenPlayed;
    bool isStrike;
} ScorecardEntry;

typedef struct Scorecard {
    ScorecardEntry *entries;
    int size;
} Scorecard;

Scorecard *initializeScorecard();

bool scorecardDoesNotExist(int scoreboardEntryIndex);

bool scorecardAlreadyPlayed(ScorecardEntry *scorecardEntry);
#endif //KNIFFEL3_SCORECARD_H
