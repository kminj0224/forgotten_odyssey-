/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001afcd4  Symbol: FUN_001afcd4 */

void FUN_001afcd4(int *param_1,int param_2,void *param_3,long param_4,size_t param_5)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = fseek(*(FILE **)(param_2 + 0xc),param_4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x43;
    (**(code **)*param_1)(param_1);
  }
  sVar2 = fread(param_3,1,param_5,*(FILE **)(param_2 + 0xc));
  if (param_5 != sVar2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x42;
    (**(code **)*param_1)(param_1);
  }
  return;
}


