/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c548  Symbol: FUN_0019c548 */

uint FUN_0019c548(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    if (param_2 == (int *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      return 0xffffffff;
    }
    iVar2 = *param_2;
    if (0 < iVar2) {
      uVar3 = (uint)*param_1;
      if ((*param_1 & 0x80) == 0) {
        *param_2 = 1;
        return uVar3;
      }
      if ((iVar2 != 1) && ((param_1[1] & 0xc0) == 0x80)) {
        if ((uVar3 & 0xe0) == 0xe0) {
          if ((iVar2 == 2) || ((param_1[2] & 0xc0) != 0x80)) goto LAB_0019c5fe;
          if ((uVar3 & 0xf0) == 0xf0) {
            if (((iVar2 == 3) || ((uVar3 & 0xf8) != 0xf0)) || ((param_1[3] & 0xc0) != 0x80))
            goto LAB_0019c5fe;
            *param_2 = 4;
            uVar4 = param_1[3] & 0x3f | (*param_1 & 7) << 0x12 | (param_1[1] & 0x3f) << 0xc;
            bVar1 = param_1[2];
          }
          else {
            *param_2 = 3;
            uVar4 = (uint)*param_1 << 0xc & DAT_0019c608 | param_1[2] & 0x3f;
            bVar1 = param_1[1];
          }
          uVar3 = bVar1 & 0x3f;
        }
        else {
          *param_2 = 2;
          uVar3 = *param_1 & 0x1f;
          uVar4 = param_1[1] & 0x3f;
        }
        return uVar4 | uVar3 << 6;
      }
    }
  }
LAB_0019c5fe:
  *param_2 = 0;
  return 0xffffffff;
}


