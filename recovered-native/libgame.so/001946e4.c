/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001946e4  Symbol: FUN_001946e4 */

void FUN_001946e4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00194748 + 0x1946f0;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_0018a990(param_1,iVar2 + DAT_0019474c);
  FUN_0018ab00(param_1,*param_2);
  iVar1 = DAT_00194758;
  if (param_2[1] != 0) {
    FUN_0018a990(param_1,iVar2 + DAT_00194750);
    FUN_0018ac20(param_1,param_2[1]);
    iVar1 = DAT_00194754;
    if (param_2[2] == 0) goto LAB_0019473a;
  }
  FUN_0018a990(param_1,iVar2 + iVar1);
  FUN_0018ac20(param_1,param_2[2]);
LAB_0019473a:
  FUN_0018a990(param_1,iVar2 + DAT_0019475c);
  return;
}


