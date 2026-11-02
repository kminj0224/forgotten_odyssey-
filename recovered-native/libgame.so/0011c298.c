/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c298  Symbol: notice_item_store_type_Init */

/* New_Notice::notice_item_store_type_Init(int) */

int New_Notice::notice_item_store_type_Init(int param_1)

{
  int iVar1;
  int in_r2;
  
  *(int *)param_1 = *(int *)(DAT_0011c2d8 + 0x11c2a2) + 0xc;
  if (in_r2 == 2) {
    iVar1 = DAT_0011c2e0 + 0x11c2c8;
  }
  else {
    if (in_r2 < 3) {
      if (in_r2 != 1) {
        return param_1;
      }
    }
    else if (in_r2 != 8) {
      if (in_r2 != 0x16) {
        return param_1;
      }
      iVar1 = DAT_0011c2e4 + 0x11c2ce;
      goto LAB_0011c2cc;
    }
    iVar1 = DAT_0011c2dc + 0x11c2c2;
  }
LAB_0011c2cc:
  FUN_001ed9dc(param_1,iVar1);
  return param_1;
}


