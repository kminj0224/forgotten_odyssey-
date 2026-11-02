/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b7fc  Symbol: FUN_0017b7fc */

void FUN_0017b7fc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0xd4) == 0)) || (*(int *)(param_1 + 0xac) != -1)) {
    if (param_2 - 1U < 0x60) {
      iVar1 = DAT_0017b95c + 0x17b808 + DAT_0017b960;
                    /* WARNING: Could not emulate address calculation at 0x0017b82c */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(int *)(iVar1 + (param_2 - 1U) * 4) + iVar1))();
      return;
    }
    iVar1 = DAT_0017b95c + 0x17b808 + DAT_0017ba40;
    if (param_1 != 0) {
      *(int *)(param_1 + 0x54) = param_2;
    }
    FUN_001a5374(0,0,0,param_1,0,1,param_2,3,0,0,param_3,0,0,0,0,iVar1,param_3);
    if ((param_1 != 0) && (*(undefined4 *)(param_1 + 0xc) = 0, *(int *)(param_1 + 0x120) == 0)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
  }
  return;
}


