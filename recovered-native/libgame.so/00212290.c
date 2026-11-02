/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00212290  Symbol: FUN_00212290 */

undefined4 FUN_00212290(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  
  do {
    iVar1 = FUN_00211f3c(param_1,*(undefined4 *)(param_2 + 0x40));
    if (iVar1 != 0) goto LAB_002122dc;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x40);
    pcVar4 = *(code **)(param_1 + 0x10);
    uVar3 = param_2;
    iVar1 = (*pcVar4)(1,param_1);
  } while (iVar1 == 8);
  if (iVar1 == 7) {
    uVar6 = restore_core_regs(param_2 + 4);
    if ((int)(uVar6 >> 0x20) == 0) {
      bVar5 = uVar3 == 0xf;
      if (uVar3 < 0x10) {
        bVar5 = pcVar4 == (code *)0x0;
      }
      if (bVar5) {
        uVar2 = 0;
        *param_4 = *(undefined4 *)((int)uVar6 + uVar3 * 4 + 4);
      }
      else {
        uVar2 = 2;
      }
      return uVar2;
    }
    if (uVar6 < 0x500000000) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    return uVar2;
  }
LAB_002122dc:
                    /* WARNING: Subroutine does not return */
  abort();
}


