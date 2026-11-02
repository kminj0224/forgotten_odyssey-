/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002049bc  Symbol: FUN_002049bc */

void FUN_002049bc(int param_1)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  
  ppvVar1 = (void **)*(void **)(param_1 + 0x18);
  while ((ppvVar1 != (void **)0x0 && (iVar2 = FUN_0021100c(ppvVar1 + 3,0xffffffff), iVar2 == 0))) {
    pvVar3 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar3;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


