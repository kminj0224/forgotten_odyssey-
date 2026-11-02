/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eed40  Symbol: FUN_001eed40 */

undefined4 * FUN_001eed40(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_2 == (char *)0x0) {
    pcVar3 = (char *)0xffffffff;
  }
  else {
    sVar1 = strlen(param_2);
    pcVar3 = param_2 + sVar1;
  }
  uVar2 = FUN_001eec14(param_2,pcVar3,param_3,0);
  *param_1 = uVar2;
  return param_1;
}


