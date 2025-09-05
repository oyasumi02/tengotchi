#pragma once

namespace State {
    enum class Program {
        RUNNING,
        DEBUGGING,
        EXITING,
    };
    enum class Screen {
        PET,
        FEED,
        LIGHTS,
        PLAY,
        DISCIPLINE,
        STATS
    };
}