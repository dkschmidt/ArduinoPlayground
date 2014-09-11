#include <SoftTimer.h>
#include <TonePlayer.h>

#define BEEPER_PIN  24

// -- Player initialized with 200ms as base time-span.
TonePlayer tonePlayer(BEEPER_PIN, 120);

void setup(void)
{
    delay(1000);
    tonePlayer.play("g1g1g1g1g1_3_4_4_4_4_4l1_3g1g1g1g1g1_3_4_4_4_4_4_4g1g1g1g1g1_3_4_4g1g1g1g1g1_3_4_4g1g1g1g1g1_3g1g1g1g1g1_3g1g1g1g1g1_1g1_1g1g1g1g1g1_1g1_1g1g1g1g1g1_1g1g1g1g1g1g1g1_1l1l1l1l1l1l1l1_1j1j1j1j1j1j1j1_1e1e1g1g1g1g1g1_1g1g1g1g1g1g1g1_1l1l1g1g1g1g1g1_1g1g1g1g1g1g1g1_1l1l1g1g1g1g1g1_1g1g1g1g1g1g1g1_1l1l1l1l1l1l1l1_1j1j1j1j1j1j1j1_1e1e1g1g1g1g1g1_1g1g1g1g1g1g1g1_1l1l1g1g1g1g1g1_1g1g1g1g1g1g1g1_1l1l1");
}

