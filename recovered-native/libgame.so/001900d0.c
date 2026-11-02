/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001900d0  Symbol: FUN_001900d0 */

void FUN_001900d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != (int *)0x0) {
    if ((param_1[0x35] != 0) && (param_1[0x2b] == -1)) {
      return;
    }
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (param_1[0x1a] == 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x54);
        uVar4 = 1;
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0x58);
        uVar4 = 2;
      }
      if (*(int *)(iVar1 + 0x6c) == DAT_0019014c) {
        uVar2 = *(undefined4 *)(iVar1 + 0x7c);
      }
      else {
        uVar2 = 0;
      }
      iVar1 = param_1[1];
      goto LAB_00190120;
    }
  }
  uVar4 = 2;
  iVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
LAB_00190120:
  FUN_001a5374(uVar2,uVar3,iVar1,param_1,0,8,DAT_00190150,uVar4,0,0,param_3,0,0,0,0,param_2,param_3)
  ;
  return;
}


