#ifndef ZALLEG_ZALLEG_H_
#define ZALLEG_ZALLEG_H_

#include "zinfo.h"

struct DATAFILE;
enum App;

extern DATAFILE *sfxdata;

void zalleg_setup_allegro(App id, int argc, char **argv);
void zalleg_create_window();

// TODO: move base/zc_alleg stuff here.

#endif
