#include <thread>
// #include <log.hpp>
#include <time.hpp>

#include "orbbec.h"

int main(){
    OrbbecCam cam;
    cam.wait4Device();
    cam.init();
    std::thread t = std::thread([&cam]() {
        cam.run();
    });
    t.detach();
    while (true)
    {
        CGU::SLEEP(100);
        cam.saveImg();
        cam.saveDepth();
    }
    return 0;
}