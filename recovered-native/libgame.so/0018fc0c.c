/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fc0c  Symbol: FUN_0018fc0c */

int * FUN_0018fc0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0018fc54 + 0x18fc18;
  if ((0 < param_2) && (param_1 != 0)) {
    piVar1 = (int *)FUN_0018fb60(param_3);
    iVar2 = DAT_0018fc58;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    *piVar1 = param_1;
    piVar1[1] = iVar3 + iVar2;
    piVar1[2] = 0;
    iVar2 = FUN_0018aa58(piVar1[4],param_1,param_2,0,param_4);
    if (iVar2 == 0) {
      return piVar1;
    }
    (***(code ***)(iVar3 + DAT_0018fc5c))(piVar1);
  }
  return (int *)0x0;
}


