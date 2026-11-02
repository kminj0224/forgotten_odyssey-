/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019cd98  Symbol: FUN_0019cd98 */

void * FUN_0019cd98(int param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  void *__dest;
  undefined *__dest_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (void *)0x0) {
    __dest = (void *)FUN_0019cd00(param_1,param_4,param_5);
  }
  else {
    iVar4 = 0;
    for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if ((int)(param_3 + 1 + param_5) < (int)(puVar2[2] - puVar2[1])) goto LAB_0019ce24;
      if (iVar4 < (int)puVar2[3]) {
        iVar4 = puVar2[3];
      }
    }
    if (iVar4 == 0) {
      iVar4 = 0xfa;
    }
    iVar4 = iVar4 * 4;
    iVar3 = param_3 + 1 + param_5;
    iVar1 = iVar3 * 4;
    if (iVar4 + iVar3 * -4 < 0 != SBORROW4(iVar4,iVar1)) {
      iVar4 = iVar1;
    }
    puVar2 = (undefined4 *)(***(code ***)(DAT_0019ce60 + 0x19cda4 + DAT_0019ce64))(iVar4 + 0x18);
    if (puVar2 == (undefined4 *)0x0) {
      __dest = (void *)0x0;
    }
    else {
      puVar2[3] = iVar4;
      puVar2[4] = 0;
      puVar2[1] = puVar2 + 5;
      puVar2[2] = (int)puVar2 + iVar4 + 0x14;
      *puVar2 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar2;
LAB_0019ce24:
      __dest = (void *)puVar2[1];
      memcpy(__dest,param_2,param_3);
      iVar4 = puVar2[1];
      *(undefined *)(iVar4 + param_3) = 0x3a;
      __dest_00 = (undefined *)(iVar4 + param_3) + 1;
      puVar2[1] = __dest_00;
      memcpy(__dest_00,param_4,param_5);
      iVar4 = puVar2[1];
      *(undefined *)(iVar4 + param_5) = 0;
      puVar2[1] = (undefined *)(iVar4 + param_5) + 1;
      puVar2[4] = puVar2[4] + 1;
    }
  }
  return __dest;
}


