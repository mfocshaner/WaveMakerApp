//
// Created by Michael on 10/13/2018.
//

#include <aaudio/AAudio.h>
#include "Oscillator.h"

class AudioEngine {
public:
    bool start();
    void stop();
    void restart();
    void setToneOn(bool isToneOn);

private:
    Oscillator oscillator_;
    AAudioStream *stream_;
};