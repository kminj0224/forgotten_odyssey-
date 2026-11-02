/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed15c  Symbol: FUN_001ed15c */

uint FUN_001ed15c(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_3 < *(uint *)(iVar2 + -0xc)) {
    pbVar1 = (byte *)(iVar2 + param_3);
    if (*pbVar1 == param_2) {
      do {
        param_3 = param_3 + 1;
        if (*(uint *)(iVar2 + -0xc) <= param_3) goto LAB_001ed194;
      } while ((uint)*(byte *)(iVar2 + param_3) == (uint)*pbVar1);
    }
  }
  else {
LAB_001ed194:
    param_3 = 0xffffffff;
  }
  return param_3;
}


