#ifndef STDAFX_H
#define STDAFX_H

// Putting this in here in case someone wants to use this for a non-windows port
#ifdef _WIN32
#pragma once
#endif // _WIN32

// I'm putting in every header file I'm never going to change, if you don't want to use a precompiled header
// Just choose no for precompiled headers in the property pages -SyrianBallaS

// Nums
#include "_tfwopen.h"
#include "65c816.h"

// A
#include "AVIOutput.h"

// B
#include "bsx.h"

// C
#include "c4.h"
#include "CCGShader.h"
#include "CD3DCG.h"
#include "CDirect3D.h"
#include "CDirectDraw.h"
#include "CDirectSound.h"
#include "cgFunctions.h"
#include "CGLCG.h"
#include "cheats.h"
#include "conffile.h"
#include "controls.h"
#include "COpenGL.h"
#include "cpuaddr.h"
#include "cpuexec.h"
#include "cpumacro.h"
#include "cpuops.h"
#include "crosshairs.h"
#include "crypt.h"
#include "CXAudio2.h"
#include "CXML.h"

// D
#include "debug.h"
#include "display.h"
#include "dma.h"
#include "dsp.h"
#include "dxerr.h"

// F
#include "font.h"
#include "fxemu.h"
#include "fxinst.h"

// H
#include "getset.h"
#include "gfx.h"
#include "glext.h"

// I
#include "InputCustom.h"
#include "ioapi.h"
#include "iowin32.h"
#include "IS9xDisplayOutput.h"
#include "IS9xSoundOutput.h"

// L
#include "language.h"
#include "logger.h"

// M
#include "memmap.h"
#include "messages.h"
#include "missing.h"
#include "movie.h"
#include "msu1.h"
#include "mztools.h"

// N
#include "netplay.h"

// O
#include "obc1.h"

// P
#include "pixform.h"
#include "png.h"
#include "pngconf.h"
#include "pnglibconf.h"
#include "port.h"
#include "ppu.h"

// R
#include "render.h"

// S
#include "sa1.h"
#include "sar.h"
#include "screenshot.h"
#include "sdd1.h"
#include "sdd1emu.h"
#include "seta.h"
#include "snapshot.h"
#include "snes_ntsc.h"
#include "snes_ntsc_config.h"
#include "snes_ntsc_impl.h"
#include "snes9x.h"
#include "spc7110.h"
#include "spc7110dec.h"
#include "spc7110emu.h"
#include "srtc.h"
#include "srtcemu.h"
#include "statemanager.h"
#include "stream.h"

// T
#include "tile.h"

// U
#include "unzip.h"

// W
#include "win32_display.h"
#include "win32_sound.h"
#include "wlanguage.h"
#include "wsnes9x.h"
#include "wsnes9x.h"

// Z
#include "zconf.h"
#include "zip.h"
#include "zlib.h"

#endif // !STDAFX_H
