#include <wayland-client-core.h>
#include <unistd.h>
#include <wayland-client-protocol.h>
#include <wayland-client.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>

struct wl_compositor* comp;
struct wl_surface* srfc;
struct wl_buffer* bffr;
struct wl_shm* shm;

int32_t alc_shm(uint_fast64_t sz){
  int8_t name[8];
  name[0] = '/';
  name[7] = 0;
  for (uint8_t i = 1; i<6; i++){
    name[i] =( rand() & 23) + 97;
  }

  int32_t fd = shm_open(name, O_RDWR | O_CREAT | O_EXCL, S_IWUSR | S_IRUSR | S_IWOTH | S_IROTH);
      shm_unlink(name);
      ftruncate(fd, sz);
      return fd;

}

//TODO: terminar a função resize minuto 29:45 https://www.youtube.com/watch?v=iIVIu7YRdY0&t=593s
void resz(){

}

void reg_glob(void* data, struct wl_registry* reg, uint32_t name, const char* intf, uint32_t v){

}

void reg_glob_rem(void* data, struct wl_registry* reg, uint32_t name){

}
struct wl_registry_listener reg_list = {
  .global = reg_glob,
  .global_remove = reg_glob_rem
};
int8_t main() {
  struct wl_display* disp = wl_display_connect(0);
  struct wl_registry* reg =  wl_display_get_registry(disp);
  wl_registry_add_listener(reg, &reg_list, 0);
  wl_display_roundtrip(disp);

  srfc = wl_compositor_create_surface(comp);
  wl_surface_destroy(srfc);

  wl_display_disconnect(disp);


  return 0;
} 
