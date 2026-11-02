/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019aad0  Symbol: FUN_0019aad0 */

void FUN_0019aad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void **ppvVar1;
  int iVar2;
  
  FUN_0017c498();
  ppvVar1 = (void **)FUN_0017c008(param_1,param_2);
  iVar2 = DAT_0019ab1c + 0x19aaf2;
  if (ppvVar1 != (void **)0x0) {
    FUN_0019db24(0);
    if (*ppvVar1 != (void *)0x0) {
      memcpy(*ppvVar1,*(void **)(iVar2 + DAT_0019ab20),0x70);
    }
    FUN_0019a7a8(ppvVar1,param_3,param_4,param_5,0);
  }
  return;
}


