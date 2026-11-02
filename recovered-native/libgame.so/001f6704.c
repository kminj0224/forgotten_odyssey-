/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f6704  Symbol: FUN_001f6704 */

int FUN_001f6704(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_001c60f4(DAT_001f67c8 + 0x1f6714);
  iVar4 = *(int *)(*param_2 + 0xc);
  iVar2 = *(int *)(iVar4 + iVar1 * 4);
  if (iVar2 != 0) {
    return iVar2;
  }
  piVar3 = (int *)operator_new(0x128);
  iVar2 = DAT_001f67cc + 0x1f6750;
  *piVar3 = iVar2;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *(undefined *)(piVar3 + 4) = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  *(undefined *)(piVar3 + 0x49) = 0;
  FUN_001f20dc(piVar3,param_2,iVar2,0,param_4);
  FUN_001c5f50(*param_2,piVar3,iVar1);
  return *(int *)(iVar4 + iVar1 * 4);
}


