/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001797c4  Symbol: FUN_001797c4 */

int FUN_001797c4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0017986c + 0x1797d0;
  if (param_2 == 0) {
    FUN_00179364(param_1,iVar3 + DAT_00179870,0);
  }
  else {
    if (**(int **)(iVar3 + DAT_00179874) != 0) {
      (***(code ***)(iVar3 + DAT_0017987c))
                (**(undefined4 **)(iVar3 + DAT_00179878),iVar3 + DAT_00179880,
                 *(undefined4 *)(param_2 + 8));
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      iVar3 = FUN_001795e0(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)(param_2 + 0x40) != 0) {
        uVar1 = FUN_0019c904();
        *(undefined4 *)(iVar3 + 4) = uVar1;
      }
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_2 + 0x28);
      iVar4 = *(int *)(param_2 + 0x2c);
      *(int *)(iVar3 + 0x18) = iVar4;
      *(int *)(iVar3 + 0x14) = *(int *)(param_2 + 0x28) + iVar4;
      return iVar3;
    }
    uVar2 = *(int *)(param_2 + 0x30) - 1;
    if (uVar2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0017980c */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*(code *)(*(int *)(iVar3 + DAT_00179884 + uVar2 * 4) + iVar3 + DAT_00179884))();
      return iVar3;
    }
  }
  return 0;
}


