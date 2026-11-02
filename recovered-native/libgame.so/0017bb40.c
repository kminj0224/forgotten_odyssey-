/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017bb40  Symbol: FUN_0017bb40 */

void FUN_0017bb40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    if ((param_1[0x35] != 0) && (param_1[0x2b] == -1)) {
      return;
    }
    iVar1 = *param_1;
    param_1[0x15] = param_2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) == DAT_0017bba8)) {
      uVar2 = *(undefined4 *)(iVar1 + 0x7c);
      goto LAB_0017bb74;
    }
  }
  uVar2 = 0;
LAB_0017bb74:
  FUN_001a5374(uVar2,param_1[0x1c],param_1[0x1b],param_1,0,4,param_2,2,0,0,param_4,param_5,0,0,0,
               param_3,param_4,param_5);
  param_1[0x19] = 0;
  return;
}


