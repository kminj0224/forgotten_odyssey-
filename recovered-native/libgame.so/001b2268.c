/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2268  Symbol: FUN_001b2268 */

undefined4 FUN_001b2268(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[3];
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x29;
    (***(code ***)param_1[8])();
  }
  iVar4 = param_3 + iVar4;
  uVar3 = (param_2 & (1 << (param_3 & 0xff)) - 1U) << (0x18U - iVar4 & 0xff) | param_1[2];
joined_r0x001b2292:
  do {
    if (iVar4 < 8) {
      param_1[2] = uVar3;
      param_1[3] = iVar4;
      return 1;
    }
    puVar1 = (undefined *)*param_1;
    *puVar1 = (char)(uVar3 >> 0x10);
    *param_1 = puVar1 + 1;
    iVar2 = param_1[1];
    param_1[1] = iVar2 + -1;
    if ((iVar2 + -1 == 0) && (iVar2 = FUN_001b221c(param_1), iVar2 == 0)) {
      return 0;
    }
    if (((int)uVar3 >> 0x10 & 0xffU) == 0xff) {
      puVar1 = (undefined *)*param_1;
      *puVar1 = 0;
      *param_1 = puVar1 + 1;
      iVar2 = param_1[1];
      param_1[1] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        iVar2 = FUN_001b221c(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar4 = iVar4 + -8;
        uVar3 = uVar3 << 8;
        goto joined_r0x001b2292;
      }
    }
    iVar4 = iVar4 + -8;
    uVar3 = uVar3 << 8;
  } while( true );
}


