#include <ros/ros.h>
#include <iostream>

typedef int (*MultiRole)(int _role);

int roleKeeper(int _role);
int roleLeftDefender(int _role);
int roleRightDefender(int _role);
int roleAssist(int _role);
int roleAttacker(int _role);
