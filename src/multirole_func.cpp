#include "multirole_func/multirole_func.h"

int main()
{
    // "Array" of functions
    MultiRole roles[] =
        {
            roleAssist,
            roleAttacker,
            roleDefender,
            roleKeeper};

    // misal mau coba tes tinggal di panggil kek di bawah ini
    roles[0]();
}

void roleAssist()
{
    // Ini diisi fungsi-fungsi assist
    // AssistRun;
    // AssistPrepKickoffHome;
}

void roleAttacker()
{
    // Ini diisi fungsi-fungsi attacker
    // att_run;
}

void roleDefender()
{
    // Ini diisi fungsi-fungsi defender
    // DefRun;
}

void roleKeeper()
{
    // Ini diisi fungsi-fungsi kiper
    GkRun;
}
