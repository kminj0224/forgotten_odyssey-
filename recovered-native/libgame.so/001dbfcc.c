/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dbfcc  Symbol: FUN_001dbfcc */

int FUN_001dbfcc(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc02c + 0x1dbfe0);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc030 + 0x1dc010),DAT_001dc034 + 0x1dc014,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


