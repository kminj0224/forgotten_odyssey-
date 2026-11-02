/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0002099c  Symbol: FUN_0002099c */

int FUN_0002099c(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_000209dc;
  do {
    iVar3 = *param_1;
    if (param_2 != iVar3) {
      return iVar3;
    }
    iVar2 = (*pcVar1)(param_2,param_3,param_1);
  } while (iVar2 != 0);
  return iVar3;
}


