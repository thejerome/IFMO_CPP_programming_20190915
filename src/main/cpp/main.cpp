#include <iostream>
#include <map>
#include <functional>
#include <cstring>
#include "t00_hello.h"
#include "t01_squirrels.h"
#include "t02_squirrels2.h"
#include "t03_last_number.h"
#include "t04_first_number.h"
#include "t05_tens_number.h"
#include "t06_3digits.h"
#include "t07_pies.h"
#include "t08_watch.h"
#include "t09_snail.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "You should specify a name of a single function to run\n";
        return -1;
    }
    char *functionName = argv[1];

    std::map <std::string, std::function<int()>> funcMap =
            {
                    {"t00_hello",        t00_hello}
            };

    funcMap[functionName]();

    return 0;
}
