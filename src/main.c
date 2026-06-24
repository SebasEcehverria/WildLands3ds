#include <3ds.h>
#include <stdio.h>
int main(int argc, char **argv) {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);
    printf("Wildlands3DS prototype running\n");
    gfxFlushBuffers();
    gfxSwapBuffers();
    while (aptMainLoop()) {
        hidScanInput();
        u32 kDown = hidKeysDown();
        if (kDown & KEY_START) break;
        gspWaitForVBlank();
    }
    gfxExit();
    return 0;
}
