/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189ab8  Symbol: FUN_00189ab8 */

undefined4
FUN_00189ab8(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00189b48;
  iVar3 = DAT_00189b3c + 0x189ac8;
  if (*param_1 == 0) {
    iVar1 = (***(code ***)(iVar3 + DAT_00189b40))(0x18);
    *param_1 = iVar1;
    iVar2 = DAT_00189b44;
    if (iVar1 == 0) {
LAB_00189b0e:
      FUN_001898e8(iVar3 + iVar2);
      return 0xffffffff;
    }
    *param_2 = 3;
    *param_3 = 0;
  }
  else {
    iVar1 = *param_2;
    if (iVar1 <= *param_3) {
      *param_2 = iVar1 << 1;
      iVar1 = (***(code ***)(iVar3 + iVar2))(*param_1,iVar1 << 4);
      *param_1 = iVar1;
      iVar2 = DAT_00189b4c;
      if (iVar1 == 0) goto LAB_00189b0e;
    }
  }
  *(undefined4 *)(*param_3 * 8 + *param_1) = param_4;
  *(undefined4 *)(*param_3 * 8 + 4 + *param_1) = param_5;
  *param_3 = *param_3 + 1;
  return 0;
}


