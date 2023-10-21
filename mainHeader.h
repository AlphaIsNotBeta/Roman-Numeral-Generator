#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <chrono>
#include <Windows.h>
#include <consoleapi.h>

#define SEED chrono::system_clock::now().time_since_epoch().count()

using namespace std;