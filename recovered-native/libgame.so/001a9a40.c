/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9a40  Symbol: jpeg_stdio_dest */

void jpeg_stdio_dest(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = DAT_001a9a78 + 0x1a9a4c;
  if (iVar2 == 0) {
    iVar2 = (***(code ***)(param_1 + 4))(param_1,0,0x1c);
    *(int *)(param_1 + 0x18) = iVar2;
  }
  iVar1 = DAT_001a9a7c;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(int *)(iVar2 + 8) = iVar3 + iVar1;
  *(int *)(iVar2 + 0xc) = iVar3 + DAT_001a9a80;
  *(int *)(iVar2 + 0x10) = iVar3 + DAT_001a9a84;
  return;
}


