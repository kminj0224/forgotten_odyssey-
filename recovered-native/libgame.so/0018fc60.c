/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fc60  Symbol: FUN_0018fc60 */

int * FUN_0018fc60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)0x0;
  iVar4 = DAT_0018fc88 + 0x18fc6c;
  if ((-1 < param_1) &&
     (piVar3 = (int *)FUN_0018fb60(param_2), iVar2 = DAT_0018fc90, iVar1 = DAT_0018fc8c,
     piVar3 != (int *)0x0)) {
    *piVar3 = param_1;
    piVar3[1] = iVar4 + iVar1;
    piVar3[2] = iVar4 + iVar2;
  }
  return piVar3;
}


