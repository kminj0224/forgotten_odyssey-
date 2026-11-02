/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019cd00  Symbol: FUN_0019cd00 */

void * FUN_0019cd00(int param_1,void *param_2,size_t param_3)

{
  undefined4 *puVar1;
  void *__dest;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x10); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((int)param_3 < (int)(puVar1[2] - puVar1[1])) goto LAB_0019cd6a;
    if (iVar2 < (int)puVar1[3]) {
      iVar2 = puVar1[3];
    }
  }
  if (iVar2 == 0) {
    iVar2 = 0xfa;
  }
  iVar2 = iVar2 * 4;
  if ((int)(iVar2 + param_3 * -4) < 0 != SBORROW4(iVar2,param_3 * 4)) {
    iVar2 = param_3 * 4;
  }
  puVar1 = (undefined4 *)(***(code ***)(DAT_0019cd90 + 0x19cd0c + DAT_0019cd94))(iVar2 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    puVar1[1] = puVar1 + 5;
    puVar1[2] = (int)puVar1 + iVar2 + 0x14;
    *puVar1 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
LAB_0019cd6a:
    __dest = (void *)puVar1[1];
    memcpy(__dest,param_2,param_3);
    iVar2 = puVar1[1];
    *(undefined *)(iVar2 + param_3) = 0;
    puVar1[1] = (undefined *)(iVar2 + param_3) + 1;
    puVar1[4] = puVar1[4] + 1;
  }
  return __dest;
}


