#include "Utils.h"
#include <math.h>
#include <iostream>

using namespace std;

int64_t getCurrentTimestamp(){
    // check timestamp max difference
    struct timespec res;
    clock_gettime(CLOCK_REALTIME, &res);
    int64_t t0 = (int64_t)1000000 * res.tv_sec + (int64_t) res.tv_nsec / 1000;
    return t0;
}    

void CaculatorUtil::feedTime(int64_t time){
    if(minTime == 0){
        minTime = time;
        
    }else if(minTime > time){
        minTime = time;
    }
    if(maxTime == 0){
        maxTime = time;
    }else if(maxTime < time){
        maxTime = time;
    }
    

    timeVec.push_back(time);
}

void CaculatorUtil::dumpResult(){
    cout<<"Max "<<maxTime<<endl;
    cout<<"Min "<<minTime<<endl;
    //cout<<"size "<<timeVec.size()<<endl;
    auto iter = timeVec.begin();
    while(iter != timeVec.end()){
        if(*iter==maxTime){
            timeVec.erase(iter);
            break;
        }
        iter++;
    }
    iter = timeVec.begin();
    while(iter != timeVec.end()){
        if(*iter==minTime){
            timeVec.erase(iter);
            break;
        }
        iter++;
    }
    //cout<<"size "<<timeVec.size()<<endl;
    int64_t tempSum = 0;
    iter = timeVec.begin();
    while(iter != timeVec.end()){
        tempSum+=*iter;
        iter++;
    }
    int64_t avgTime =tempSum/timeVec.size();
    cout<<"avg is "<<avgTime<<endl;
    double powSum = 0;
    iter = timeVec.begin();
    while(iter != timeVec.end()){
        powSum+=(*iter-avgTime)*(*iter-avgTime);
        iter++;
    }
    double powAvg = powSum/timeVec.size();
    cout<<"pow agv is "<<powAvg<<endl;
    double sqtPowAvg = sqrt(powAvg);
    cout<<"sqrt pow agv is "<<sqtPowAvg<<endl;


}