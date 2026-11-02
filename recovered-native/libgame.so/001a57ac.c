/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a57ac  Symbol: FUN_001a57ac */

void FUN_001a57ac(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_001a57e0 + 0x1a57ba;
  if (**(int **)(iVar1 + DAT_001a57e4) == 0) {
    **(int **)(iVar1 + DAT_001a57e4) = *(int *)(iVar1 + DAT_001a57e8) + 0xa8;
  }
  uStack_8 = param_3;
  uStack_4 = param_4;
  vfprintf(**(FILE ***)(iVar1 + DAT_001a57e4),param_2,&uStack_8);
  return;
}


