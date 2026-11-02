/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f837c  Symbol: FUN_001f837c */

undefined4 *
FUN_001f837c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,
            _Ios_Iostate *param_9,longdouble *param_10)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  char *local_28;
  int *local_24;
  
  pcVar3 = *(char **)(DAT_001f846c + 0x1f83a0);
  local_28 = pcVar3 + 0xc;
  local_38 = param_3;
  uStack_34 = param_4;
  if (param_7 == '\0') {
    FUN_001f6aa8(&local_40,param_2,param_3,param_4,param_5,param_6,param_8,param_9,&local_28);
  }
  else {
    FUN_001f766c();
  }
  pcVar2 = local_28;
  local_38 = local_40;
  uStack_34 = uStack_3c;
  local_24 = (int *)FUN_001c5b90();
  std::__convert_to_v<long_double>(pcVar2,param_10,param_9,&local_24);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  pcVar2 = local_28 + -0xc;
  if ((pcVar2 != pcVar3) && (iVar1 = FUN_0021100c(local_28 + -4,0xffffffff), iVar1 < 1)) {
    operator_delete(pcVar2);
  }
  return param_1;
}


