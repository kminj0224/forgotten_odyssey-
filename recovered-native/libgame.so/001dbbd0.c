/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dbbd0  Symbol: FUN_001dbbd0 */

int ** FUN_001dbbd0(int **param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,char param_8,char param_9)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  char local_b4;
  undefined local_ac;
  char cStack_ab;
  char cStack_aa;
  undefined uStack_a9;
  int *local_a8;
  int *piStack_a4;
  char acStack_a0 [132];
  
  piVar1 = (int *)FUN_001da5b8(param_5 + 0x6c);
  uVar2 = FUN_001dbb64(param_5 + 0x6c);
  uVar3 = uVar2;
  if (*(char *)(piVar1 + 7) != '\0') {
    uVar3 = (uint)*(byte *)((int)piVar1 + 0x42);
  }
  local_ac = (undefined)uVar3;
  if (*(char *)(piVar1 + 7) == '\0') {
    FUN_00204560(piVar1);
    local_ac = (**(code **)(*piVar1 + 0x18))(piVar1,0x25);
  }
  if (param_9 != '\0') {
    uStack_a9 = 0;
  }
  if (param_9 != '\0') {
    cStack_ab = param_9;
    cStack_aa = param_8;
  }
  else {
    cStack_ab = param_8;
    cStack_aa = param_9;
  }
  FUN_00206e2c(uVar2,acStack_a0,0x80,&local_ac,param_7);
  sVar4 = strlen(acStack_a0);
  local_b4 = (char)param_4;
  local_a8 = param_3;
  piStack_a4 = param_4;
  if ((local_b4 == '\0') &&
     (sVar5 = (**(code **)(*param_3 + 0x30))(param_3,acStack_a0,sVar4), sVar4 != sVar5)) {
    local_b4 = '\x01';
  }
  *param_1 = local_a8;
  param_1[1] = piStack_a4;
  *param_1 = param_3;
  *(char *)(param_1 + 1) = local_b4;
  return param_1;
}


