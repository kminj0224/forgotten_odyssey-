/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e33e4  Symbol: FUN_001e33e4 */

undefined4 *
FUN_001e33e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,float *param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  char *local_30;
  int *local_2c [2];
  
  puVar1 = param_8;
  pcVar6 = *(char **)(DAT_001e34f0 + 0x1e33f8);
  local_30 = pcVar6 + 0xc;
  local_40 = param_3;
  uStack_3c = param_4;
  FUN_001ee274(&local_30,0x20);
  FUN_001e24fc(&local_48,param_2,local_40,uStack_3c,param_5,param_6,param_7,puVar1,&local_30);
  pcVar5 = local_30;
  local_40 = local_48;
  uStack_3c = uStack_44;
  local_2c[0] = (int *)FUN_001c5b90();
  ppiVar4 = local_2c;
  std::__convert_to_v<float>(pcVar5,param_9,(_Ios_Iostate *)puVar1,ppiVar4);
  iVar2 = FUN_001df02c(&local_40);
  iVar3 = FUN_001df02c(&param_5);
  if (iVar2 == iVar3) {
    ppiVar4 = (int **)(*puVar1 | 2);
  }
  pcVar5 = local_30 + -0xc;
  if (iVar2 == iVar3) {
    *puVar1 = (uint)ppiVar4;
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  if ((pcVar5 != pcVar6) && (iVar2 = FUN_0021100c(local_30 + -4,0xffffffff), iVar2 < 1)) {
    operator_delete(pcVar5);
  }
  return param_1;
}


