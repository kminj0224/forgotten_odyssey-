/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a828  Symbol: FUN_0018a828 */

undefined4 FUN_0018a828(void **param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = DAT_0018a918 + 0x18a832;
  if ((param_1 == (void **)0x0) || (pvVar3 = param_1[3], pvVar3 == (void *)0x2)) {
LAB_0018a914:
    uVar1 = 0;
  }
  else {
    pvVar2 = param_1[2];
    if (pvVar2 <= param_2) {
      if (pvVar3 == (void *)0x1) {
        pvVar4 = (void *)((int)param_2 + 10);
LAB_0018a8ac:
        if (*param_1 == (void *)0x0) {
          pvVar3 = (void *)(***(code ***)(iVar5 + DAT_0018a920))(pvVar4);
LAB_0018a8d0:
          if (pvVar3 != (void *)0x0) goto LAB_0018a90c;
        }
        else {
          if ((uint)((int)pvVar2 - (int)param_1[1]) < 100) {
            pvVar3 = (void *)(***(code ***)(iVar5 + DAT_0018a91c))
                                       (*param_1,pvVar4,DAT_0018a91c,
                                        *(code ***)(iVar5 + DAT_0018a91c),param_4);
            goto LAB_0018a8d0;
          }
          pvVar3 = (void *)(***(code ***)(iVar5 + DAT_0018a920))(pvVar4);
          if (pvVar3 != (void *)0x0) {
            memcpy(pvVar3,*param_1,(size_t)param_1[1]);
            (***(code ***)(iVar5 + DAT_0018a924))(*param_1);
            *(undefined *)((int)pvVar3 + (int)param_1[1]) = 0;
            goto LAB_0018a90c;
          }
        }
LAB_0018a902:
        FUN_001898e8(iVar5 + DAT_0018a928);
        goto LAB_0018a914;
      }
      if ((pvVar3 == (void *)0x0) || (pvVar3 == (void *)0x3)) {
        pvVar4 = (void *)((int)pvVar2 << 1);
        if (pvVar2 == (void *)0x0) {
          pvVar4 = (void *)((int)param_2 + 10);
        }
        for (; pvVar4 < param_2; pvVar4 = (void *)((int)pvVar4 << 1)) {
          if ((int)pvVar4 < 0) goto LAB_0018a902;
        }
      }
      else {
        pvVar4 = (void *)((int)param_2 + 10);
      }
      if ((pvVar3 != (void *)0x3) || (pvVar3 = param_1[4], pvVar3 == (void *)0x0))
      goto LAB_0018a8ac;
      pvVar2 = (void *)((int)*param_1 - (int)pvVar3);
      if (pvVar4 < pvVar2) {
        memmove(pvVar3,*param_1,(size_t)param_1[1]);
        *param_1 = param_1[4];
        *(undefined *)((int)param_1[4] + (int)param_1[1]) = 0;
        param_1[2] = (void *)((int)param_1[2] + (int)pvVar2);
      }
      else {
        pvVar3 = (void *)(***(code ***)(iVar5 + DAT_0018a91c))(pvVar3,(int)pvVar4 + (int)pvVar2);
        if (pvVar3 == (void *)0x0) goto LAB_0018a902;
        param_1[4] = pvVar3;
        pvVar3 = (void *)((int)pvVar3 + (int)pvVar2);
LAB_0018a90c:
        *param_1 = pvVar3;
      }
      param_1[2] = pvVar4;
    }
    uVar1 = 1;
  }
  return uVar1;
}


