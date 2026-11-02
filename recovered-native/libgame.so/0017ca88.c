/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ca88  Symbol: FUN_0017ca88 */

int FUN_0017ca88(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  size_t __n;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar6 = DAT_0017cb48 + 0x17ca94;
  if (param_2 == 0) {
    FUN_0017b7fc(param_1,1,iVar6 + DAT_0017cb4c);
  }
  else {
    if (**(int **)(iVar6 + DAT_0017cb50) != 0) {
      (***(code ***)(iVar6 + DAT_0017cb58))
                (**(undefined4 **)(iVar6 + DAT_0017cb54),iVar6 + DAT_0017cb5c,
                 *(undefined4 *)(param_2 + 8));
    }
    iVar2 = FUN_001795e0(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    __n = FUN_0019c49c(*(undefined4 *)(param_2 + 8));
    iVar4 = __n + 5;
    puVar3 = (undefined *)(***(code ***)(iVar6 + DAT_0017cb60))(iVar4);
    if (puVar3 != (undefined *)0x0) {
      *puVar3 = 0x20;
      puVar3[1] = 0x25;
      puVar5 = puVar3 + iVar4;
      puVar5[-3] = 0x3b;
      puVar5[-2] = 0x20;
      puVar5[-1] = 0;
      memcpy(puVar3 + 2,*(void **)(param_2 + 8),__n);
      iVar1 = DAT_0017cb68;
      *(undefined **)(iVar2 + 0xc) = puVar3;
      *(undefined **)(iVar2 + 0x10) = puVar3;
      *(int *)(iVar2 + 0x28) = iVar6 + iVar1;
      *(int *)(iVar2 + 0x18) = iVar4;
      *(undefined **)(iVar2 + 0x14) = puVar5;
      return iVar2;
    }
    FUN_00179430(param_1,0);
    (***(code ***)(iVar6 + DAT_0017cb64))(iVar2);
  }
  return 0;
}


