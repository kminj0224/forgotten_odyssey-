/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179430  Symbol: FUN_00179430 */

void FUN_00179430(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_001794cc + 0x17943c;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xac) == -1)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = 2;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = 1;
  }
  if (param_2 == 0) {
    FUN_001a5374(0,0,0,param_1,0,1,2,3,0,0,0,0,0,0,0,iVar1 + DAT_001794d4);
  }
  else {
    FUN_001a5374(0,0,0,param_1,0,1,2,3,0,0,param_2,0,0,0,0,iVar1 + DAT_001794d0,param_2);
  }
  return;
}


