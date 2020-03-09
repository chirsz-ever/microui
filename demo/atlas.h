#ifndef ATLAS_H
#define ATLAS_H

/* this head file provides declarations of the altas data
 * defined in atlas.c.
 *
 * MUST include the microui.h before include this head file!
 */

enum { ATLAS_WHITE = MU_ICON_MAX, ATLAS_FONT };
enum { ATLAS_WIDTH = 128, ATLAS_HEIGHT = 128 };

extern const unsigned char atlas_texture[ATLAS_WIDTH * ATLAS_HEIGHT];
extern const mu_Rect atlas[];

#endif
