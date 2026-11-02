/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200e50  Symbol: FUN_00200e50 */

uint * FUN_00200e50(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  int local_24 [2];
  
  uVar1 = *param_1;
  uVar3 = *(uint *)(uVar1 - 0xc);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0(&UNK_00200fbc + DAT_00200fd0);
  }
  uVar4 = uVar3 - param_2;
  if (param_3 <= uVar3 - param_2) {
    uVar4 = param_3;
  }
  if (param_5 <= (0xffffffe - uVar3) + uVar4) {
    if (((param_4 < uVar1) || (uVar1 + uVar3 * 4 < param_4)) || (0 < *(int *)(uVar1 - 4))) {
      param_1 = (uint *)FUN_001ff84c(param_1,param_2,uVar4,param_4,param_5);
    }
    else {
      if (uVar1 + param_2 * 4 < param_4 + param_5 * 4) {
        if (param_4 < uVar1 + (uVar4 + param_2) * 4) {
          FUN_00200e28(local_24,param_4,param_5,auStack_2c);
          puVar2 = (uint *)FUN_001ff84c(param_1,param_2,uVar4,local_24[0],param_5);
          if (local_24[0] + -0xc == DAT_00200fc8 + 0x200f84) {
            return puVar2;
          }
          FUN_001ff644(local_24[0] + -0xc,auStack_28);
          return puVar2;
        }
        iVar5 = (param_5 - uVar4) + ((int)(param_4 - uVar1) >> 2);
      }
      else {
        iVar5 = (int)(param_4 - uVar1) >> 2;
      }
      FUN_001ff6cc(param_1,param_2,uVar4,param_5);
      uVar1 = *param_1;
      if (param_5 == 1) {
        *(undefined4 *)(uVar1 + param_2 * 4) = *(undefined4 *)(uVar1 + iVar5 * 4);
      }
      else {
        wmemcpy((wchar_t *)(uVar1 + param_2 * 4),(wchar_t *)(uVar1 + iVar5 * 4),param_5);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c4558(DAT_00200fcc + 0x200fb0);
}


