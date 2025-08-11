#pragma once

#include <3ds.h>
#include "header.h"

extern C2D_TextBuf g_dynamicBuf;
extern C2D_Text dynText;

void draw_debug(float x, float y, const char *text);
