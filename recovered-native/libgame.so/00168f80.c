/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168f80  Symbol: png_info_init_3 */

void png_info_init_3(void **param_1,uint param_2)

{
  void *__s;
  
  __s = *param_1;
  if (__s != (void *)0x0) {
    if (param_2 <= DAT_00168fac) {
      png_destroy_struct();
      __s = (void *)png_create_struct(2);
      *param_1 = __s;
    }
    memset(__s,0,0x120);
  }
  return;
}


