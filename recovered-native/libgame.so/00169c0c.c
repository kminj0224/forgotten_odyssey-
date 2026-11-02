/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169c0c  Symbol: png_set_iCCP */

void png_set_iCCP(int param_1,int param_2,char *param_3,undefined param_4,void *param_5,
                 size_t param_6)

{
  size_t sVar1;
  void *__dest;
  void *__dest_00;
  int iVar2;
  
  iVar2 = DAT_00169ccc + 0x169c20;
  if ((((param_2 != 0) && (param_1 != 0)) && (param_5 != (void *)0x0)) && (param_3 != (char *)0x0))
  {
    sVar1 = strlen(param_3);
    __dest = (void *)png_malloc_warn(param_1,sVar1 + 1);
    if (__dest == (void *)0x0) {
      png_warning(param_1,iVar2 + DAT_00169cd4);
    }
    else {
      memcpy(__dest,param_3,sVar1 + 1);
      __dest_00 = (void *)png_malloc_warn(param_1,param_6);
      if (__dest_00 == (void *)0x0) {
        png_free(param_1,__dest);
        png_warning(param_1,iVar2 + DAT_00169cd0);
      }
      else {
        memcpy(__dest_00,param_5,param_6);
        png_free_data(param_1,param_2,0x10,0);
        *(size_t *)(param_2 + 0xcc) = param_6;
        *(void **)(param_2 + 0xc4) = __dest;
        *(void **)(param_2 + 200) = __dest_00;
        *(undefined *)(param_2 + 0xd0) = param_4;
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x10;
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
      }
    }
  }
  return;
}


