/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d85d4  Symbol: FUN_001d85d4 */

char ** FUN_001d85d4(char **param_1,undefined4 param_2,int param_3,int param_4)

{
  char *pcVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined auStack_34 [8];
  char *local_2c;
  
  pcVar8 = *(char **)(DAT_001d87a8 + 0x1d85e8);
  *param_1 = pcVar8 + 0xc;
  pcVar1 = (char *)FUN_001eec14(param_3,param_4,auStack_34,0);
  uVar7 = (param_4 - param_3) * 2;
  pcVar9 = pcVar1 + *(int *)(pcVar1 + -0xc);
  local_2c = pcVar1;
  pvVar2 = operator_new__(uVar7);
  while( true ) {
    uVar3 = FUN_002067f0(param_2,pvVar2,pcVar1,uVar7);
    if (uVar7 <= uVar3) {
      uVar7 = uVar3 + 1;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      pvVar2 = operator_new__(uVar7);
      uVar3 = FUN_002067f0(param_2,pvVar2,pcVar1,uVar7);
    }
    FUN_001ee484(param_1,pvVar2,uVar3);
    sVar4 = strlen(pcVar1);
    if (pcVar1 + sVar4 == pcVar9) break;
    pcVar6 = *param_1;
    pcVar1 = pcVar1 + sVar4 + 1;
    iVar5 = *(int *)(pcVar6 + -0xc);
    uVar3 = iVar5 + 1;
    if ((*(uint *)(pcVar6 + -8) < uVar3) || (0 < *(int *)(pcVar6 + -4))) {
      FUN_001ee274(param_1,uVar3);
      pcVar6 = *param_1;
      iVar5 = *(int *)(pcVar6 + -0xc);
    }
    pcVar6[iVar5] = '\0';
    pcVar6 = *param_1;
    if (pcVar6 + -0xc != pcVar8) {
      *(undefined4 *)(pcVar6 + -4) = 0;
      *(uint *)(pcVar6 + -0xc) = uVar3;
      pcVar6[uVar3] = '\0';
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pcVar1 = local_2c + -0xc;
  if ((pcVar1 != pcVar8) && (iVar5 = FUN_0021100c(local_2c + -4,0xffffffff), iVar5 < 1)) {
    operator_delete(pcVar1);
  }
  return param_1;
}


