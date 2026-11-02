/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9c94  Symbol: jpeg_stdio_src */

void jpeg_stdio_src(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  iVar4 = DAT_001a9cf0 + 0x1a9ca0;
  if (puVar3 == (undefined4 *)0x0) {
    iVar1 = (***(code ***)(param_1 + 4))(param_1,0,0x28,**(code ***)(param_1 + 4),param_4);
    *(int *)(param_1 + 0x18) = iVar1;
    uVar2 = (***(code ***)(param_1 + 4))(param_1,0,0x1000);
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    puVar3 = *(undefined4 **)(param_1 + 0x18);
  }
  iVar1 = DAT_001a9cf4;
  puVar3[7] = param_2;
  puVar3[2] = iVar4 + iVar1;
  puVar3[3] = iVar4 + DAT_001a9cf8;
  puVar3[4] = iVar4 + DAT_001a9cfc;
  puVar3[5] = *(undefined4 *)(iVar4 + DAT_001a9d00);
  puVar3[6] = iVar4 + DAT_001a9d04;
  puVar3[1] = 0;
  *puVar3 = 0;
  return;
}


