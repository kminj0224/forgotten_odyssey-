/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001729f0  Symbol: png_destroy_struct_2 */

void png_destroy_struct_2(void *param_1,code *param_2,undefined4 param_3)

{
  if (param_1 != (void *)0x0) {
    if (param_2 == (code *)0x0) {
      free(param_1);
    }
    else {
      *(undefined4 *)(&stack0x000002f8 + DAT_00172a18) = param_3;
      (*param_2)(&stack0xfffffff8 + DAT_00172a18,param_1);
    }
  }
  return;
}


