#pragma once

namespace Egg {
    class TengotchiEgg {
    private:
        unsigned int hatch_time;
        unsigned int hatch_time_limit;
    public:
        TengotchiEgg() {
            hatch_time_limit = 300;
        }
        unsigned int GetHatchTime() { return hatch_time; }
        void AddHatchTime() { hatch_time += 1; }
    };
}