#include <iostream>

// #include "assist/assist.h"
// #include "attacker/attacker.h"
// #include "defender/defender.h"
#include "goalkeeper/goalkeeper.h"

// #include "assist/BS_utils.h"
// #include "attacker/BS_utils.h"
// #include "defender/BS_utils.h"
#include "goalkeeper/gk_utils.h"

typedef void (*MultiRole)();

void roleKeeper();
void roleDefender();
void roleAssist();
void roleAttacker();
