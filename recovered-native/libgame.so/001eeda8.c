/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eeda8  Symbol: FUN_001eeda8 */

uint * FUN_001eeda8(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  int local_1c;
  
  uVar1 = *param_1;
  uVar3 = *(uint *)(uVar1 - 0xc);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0(DAT_001eef20 + 0x1eef0c);
  }
  uVar4 = uVar3 - param_2;
  if (param_3 <= uVar3 - param_2) {
    uVar4 = param_3;
  }
  if (param_5 <= (0x3ffffffc - uVar3) + uVar4) {
    if (((param_4 < uVar1) || (uVar1 + uVar3 < param_4)) || (0 < *(int *)(uVar1 - 4))) {
      param_1 = (uint *)FUN_001ed870(param_1,param_2,uVar4,param_4,param_5);
    }
    else {
      if (uVar1 + param_2 < param_4 + param_5) {
        if (param_4 < uVar1 + uVar4 + param_2) {
          FUN_001eed80(&local_1c,param_4,param_5,auStack_24);
          puVar2 = (uint *)FUN_001ed870(param_1,param_2,uVar4,local_1c,param_5);
          if (local_1c + -0xc == DAT_001eef18 + 0x1eeed4) {
            return puVar2;
          }
          FUN_001ed670(local_1c + -0xc,auStack_20);
          return puVar2;
        }
        iVar5 = (param_5 - uVar4) + (param_4 - uVar1);
      }
      else {
        iVar5 = param_4 - uVar1;
      }
      FUN_001ed6f8(param_1,param_2,uVar4,param_5);
      uVar1 = *param_1;
      if (param_5 == 1) {
        *(undefined *)(uVar1 + param_2) = *(undefined *)(uVar1 + iVar5);
      }
      else {
        memcpy((void *)(uVar1 + param_2),(void *)(uVar1 + iVar5),param_5);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4558(DAT_001eef1c + 0x1eef00);
}


