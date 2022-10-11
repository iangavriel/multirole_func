#ifndef MULTIROLE_FUNC_H_
#define MULTIROLE_FUNC_H_

#include <iostream>
#include "utils/utils.h"

typedef void (*MultiRole)();

void GkRun();
void AttRun();
void DefRun();
void AssistRun();


#endif