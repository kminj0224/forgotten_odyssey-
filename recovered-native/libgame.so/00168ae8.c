/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168ae8  Symbol: png_zalloc */

undefined4 png_zalloc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x130);
  iVar4 = DAT_00168b40 + 0x168b08;
  uVar1 = __udivsi3(0xffffffff,param_3);
  if (uVar1 < param_2) {
    png_warning(param_1,iVar4 + DAT_00168b44);
    uVar2 = 0;
  }
  else {
    *(uint *)(param_1 + 0x130) = uVar3 | 0x100000;
    uVar2 = png_malloc(param_1,param_2 * param_3);
    *(uint *)(param_1 + 0x130) = uVar3;
  }
  return uVar2;
}


