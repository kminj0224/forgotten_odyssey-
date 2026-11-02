/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001acd04  Symbol: FUN_001acd04 */

void FUN_001acd04(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  if (*(int *)(iVar2 + 0x24) == 0) {
    uVar3 = *(uint *)(iVar2 + 0x2c);
    if (1 < uVar3) {
      uVar3 = 2;
    }
    uVar1 = param_7 - *param_6;
    if ((uVar1 < uVar3) || (uVar1 = uVar3, uVar3 != 2)) {
      *(undefined4 *)(iVar2 + 0x24) = 1;
      uVar3 = uVar1;
    }
    (**(code **)(iVar2 + 0xc))(param_1,param_2,*param_3);
  }
  else {
    jcopy_sample_rows(iVar2 + 0x20,0,*param_6 * 4 + param_5,0,1,*(undefined4 *)(iVar2 + 0x28));
    *(undefined4 *)(iVar2 + 0x24) = 0;
    uVar3 = 1;
  }
  *param_6 = *param_6 + uVar3;
  *(uint *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) - uVar3;
  if (*(int *)(iVar2 + 0x24) == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}


