#include "multirole_func/multirole.h"

int main()
{
    MultiRole roles[] =
        {
            roleKeeper,
            roleDefender,
            roleAssist,
            roleAttacker};
}

void roleAssist()
{
    // Ini diisi fungsi-fungsi assist
    AssistRun;
    AssistPrepKickoffHome;
}

void roleAttacker()
{
    // Ini diisi fungsi-fungsi attacker
    att_run;
}

void roleDefender()
{
    // Ini diisi fungsi-fungsi defender
    DefRun;
}

void roleKeeper()
{
    // Ini diisi fungsi-fungsi kiper
    GkRun;
}
