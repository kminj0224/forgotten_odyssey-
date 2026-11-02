/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001905fc  Symbol: FUN_001905fc */

undefined4 FUN_001905fc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0019064c + 0x190608;
  if ((param_3 == 0) || (iVar3 = *(int *)(param_3 + 0x168), -1 < iVar3 << 0x14)) {
    if (param_1 == 0) {
      if (param_2 == 0) {
        param_2 = iVar2 + DAT_00190654;
      }
      FUN_001900d0(param_3,iVar2 + DAT_00190658,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00179638(param_3,param_1,param_3,iVar2,param_4);
    }
  }
  else {
    *(int *)(param_3 + 0x168) = iVar3 + DAT_00190650;
    uVar1 = FUN_001905a4(param_1,param_2);
    *(int *)(param_3 + 0x168) = iVar3;
  }
  return uVar1;
}


