/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189c04  Symbol: FUN_00189c04 */

int * FUN_00189c04(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00189c44 + 0x189c10;
  if ((param_2 == 0) || (param_1 == 0)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(***(code ***)(iVar2 + DAT_00189c48))(0x14);
    if (piVar1 == (int *)0x0) {
      FUN_001898e8(iVar2 + DAT_00189c4c);
    }
    else {
      piVar1[1] = param_2;
      piVar1[2] = param_2;
      piVar1[3] = 2;
      *piVar1 = param_1;
    }
  }
  return piVar1;
}


