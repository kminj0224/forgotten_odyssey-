/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d8c8  Symbol: FUN_0019d8c8 */

undefined4 FUN_0019d8c8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0019d9a8;
  iVar4 = DAT_0019d99c;
  iVar3 = DAT_0019d998 + 0x19d8ce;
  if (param_1 == (int *)0x0) {
LAB_0019d992:
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 2) {
      param_1[0xe] = 0;
      param_1[0x1d] = iVar3 + iVar4;
      iVar4 = DAT_0019d9a0;
      param_1[0xf] = 0;
      param_1[0x1f] = 0;
      iVar1 = DAT_0019d9a4;
      param_1[0x1e] = iVar3 + iVar4;
      param_1[0x1b] = iVar1;
    }
    else {
      if (param_2 != 1) goto LAB_0019d992;
      param_1[0x1b] = 1;
      param_1[0xe] = iVar3 + iVar1;
      param_1[0xf] = iVar3 + DAT_0019d9ac;
    }
    iVar4 = DAT_0019d9b4;
    *param_1 = iVar3 + DAT_0019d9b0;
    iVar1 = DAT_0019d9b8;
    param_1[0x1a] = iVar3 + iVar4;
    iVar4 = DAT_0019d9bc;
    param_1[1] = iVar3 + iVar1;
    iVar1 = DAT_0019d9c0;
    param_1[2] = iVar3 + iVar4;
    iVar4 = DAT_0019d9c4;
    param_1[3] = iVar3 + iVar1;
    iVar1 = DAT_0019d9c8;
    param_1[4] = iVar3 + iVar4;
    iVar4 = DAT_0019d9cc;
    param_1[5] = iVar3 + iVar1;
    iVar1 = DAT_0019d9d0;
    param_1[0x18] = iVar3 + iVar4;
    iVar4 = DAT_0019d9d4;
    param_1[6] = iVar3 + iVar1;
    iVar1 = DAT_0019d9d8;
    param_1[8] = iVar3 + iVar4;
    iVar4 = DAT_0019d9dc;
    param_1[9] = iVar3 + iVar1;
    iVar1 = DAT_0019d9e0;
    param_1[7] = iVar3 + iVar4;
    iVar4 = DAT_0019d9e4;
    param_1[10] = iVar3 + iVar1;
    iVar1 = DAT_0019d9e8;
    param_1[0xb] = iVar3 + iVar4;
    iVar4 = DAT_0019d9ec;
    param_1[0xc] = iVar3 + iVar1;
    iVar1 = DAT_0019d9f0;
    param_1[0xd] = iVar3 + iVar4;
    param_1[0x10] = iVar3 + iVar1;
    iVar4 = DAT_0019d9f8;
    param_1[0x19] = iVar3 + DAT_0019d9f4;
    iVar1 = DAT_0019d9fc;
    param_1[0x11] = iVar3 + iVar4;
    param_1[0x12] = iVar3 + iVar4;
    iVar4 = DAT_0019da00;
    param_1[0x13] = iVar3 + iVar1;
    iVar1 = DAT_0019da04;
    param_1[0x14] = iVar3 + iVar4;
    iVar4 = DAT_0019da08;
    param_1[0x15] = *(int *)(iVar3 + iVar1);
    iVar4 = *(int *)(iVar3 + iVar4);
    param_1[0x16] = iVar4;
    param_1[0x17] = iVar4;
    uVar2 = 0;
  }
  return uVar2;
}


