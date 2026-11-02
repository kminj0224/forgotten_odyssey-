/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f32b8  Symbol: FUN_001f32b8 */

int ** FUN_001f32b8(int **param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,byte param_8,byte param_9)

{
  int *piVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  code *pcVar5;
  uint uVar6;
  char local_23c;
  undefined4 local_230;
  uint uStack_22c;
  uint uStack_228;
  code *pcStack_224;
  wchar_t awStack_220 [129];
  
  uVar6 = (uint)param_9;
  piVar1 = (int *)FUN_001f1db0(param_5 + 0x6c);
  uVar2 = FUN_001f324c(param_5 + 0x6c);
  pcVar5 = *(code **)(*piVar1 + 0x28);
  local_230 = (*pcVar5)(piVar1,0x25);
  if (uVar6 != 0) {
    pcVar5 = (code *)0x0;
  }
  uStack_228 = (uint)param_8;
  uStack_22c = uVar6;
  if (uVar6 == 0) {
    pcVar5 = pcStack_224;
    uStack_228 = 0;
    uStack_22c = (uint)param_8;
  }
  pcStack_224 = pcVar5;
  FUN_00207480(uVar2,awStack_220,0x80,&local_230,param_7);
  sVar3 = wcslen(awStack_220);
  local_23c = (char)param_4;
  if ((local_23c == '\0') &&
     (sVar4 = (**(code **)(*param_3 + 0x30))(param_3,awStack_220,sVar3), sVar3 != sVar4)) {
    local_23c = '\x01';
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  *param_1 = param_3;
  *(char *)(param_1 + 1) = local_23c;
  return param_1;
}


