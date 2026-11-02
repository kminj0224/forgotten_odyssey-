/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001982ac  Symbol: FUN_001982ac */

int FUN_001982ac(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00198354 + 0x1982b8;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) &&
     (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '&')) {
    FUN_0017a4a4(param_1);
    iVar1 = FUN_001981f8(param_1);
    if (iVar1 == 0) {
      FUN_00195ba4(param_1,0x44,iVar3 + DAT_00198358,0,0);
    }
    else {
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (iVar2 = *(int *)(param_1 + 0x24), *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) < 0xfa))
      {
        FUN_0017a2bc(iVar2,0xfa);
      }
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == ';') {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar1;
        }
        iVar3 = FUN_00196400(iVar1);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_0017a4a4(param_1);
        return iVar3;
      }
      FUN_00195ba4(param_1,0x17,iVar3 + DAT_0019835c,0,0);
      if (param_2 != (int *)0x0) {
        *param_2 = iVar1;
      }
    }
  }
  return 0;
}


