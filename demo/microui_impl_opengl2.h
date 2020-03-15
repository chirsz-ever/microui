#ifndef MICROUI_IMPL_OPENGL2_H
#define MICROUI_IMPL_OPENGL2_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct mu_Context mu_Context;

void microui_opengl2_init();
void microui_opengl2_shutdown();
void microui_opengl2_new_frame(int display_width, int display_height);
void microui_opengl2_render_data(mu_Context *ctx);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif
