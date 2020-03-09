#ifndef MICROUI_IMPL_OPENGL2_H
#define MICROUI_IMPL_OPENGL2_H

typedef struct mu_Context mu_Context;

void microui_opengl2_init();
void microui_opengl2_shutdown();
void microui_opengl2_new_frame();
void microui_opengl2_render_data(mu_Context *ctx);

#endif
