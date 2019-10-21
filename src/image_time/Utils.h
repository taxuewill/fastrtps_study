#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <vector>

int64_t getCurrentTimestamp();


class CaculatorUtil{
public:
    CaculatorUtil() = default;
    void feedTime(int64_t time);
    void dumpResult();


private:
    std::vector<int64_t> timeVec;
    int64_t minTime =0;
    int64_t maxTime =0;
};


#endif // UTILS_H