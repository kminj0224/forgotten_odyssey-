/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172ad0  Symbol: png_create_struct_2 */

void * png_create_struct_2(int param_1,code *param_2,undefined4 param_3)

{
  void *__s;
  size_t __size;
  
  if (param_1 == 2) {
    __size = 0x120;
  }
  else {
    if (param_1 != 1) {
      return (void *)0x0;
    }
    __size = 0x350;
  }
  if (param_2 == (code *)0x0) {
    __s = malloc(__size);
  }
  else {
    *(undefined4 *)(&stack0x000002f4 + DAT_00172b1c) = param_3;
    __s = (void *)(*param_2)(&stack0xfffffff4 + DAT_00172b1c,__size);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,__size);
  }
  return __s;
}


