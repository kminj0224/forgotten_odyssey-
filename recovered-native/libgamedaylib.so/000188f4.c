/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000188f4  Symbol: FUN_000188f4 */

undefined4 FUN_000188f4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *__s1;
  
  iVar3 = FUN_000181e8();
  if (0 < iVar3) {
    __s1 = *(void **)(param_1 + 0xc);
    if (*(int *)(param_1 + 4) - (int)__s1 < iVar3) {
      uVar4 = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = (int)__s1 + iVar3;
      if (((*(uint *)(param_1 + 8) & 4) != 0) && (*(char *)((int)__s1 + iVar3) == '$')) {
        *(int *)(param_1 + 0xc) = (int)__s1 + iVar3 + 1;
      }
      if ((((iVar3 < 10) ||
           (iVar5 = memcmp(__s1,(void *)(DAT_000189dc + 0x1894c),8), iVar2 = DAT_000189e0,
           iVar5 != 0)) ||
          ((cVar1 = *(char *)((int)__s1 + 8), cVar1 != '.' && cVar1 != '_' && (cVar1 != '$')))) ||
         (*(char *)((int)__s1 + 9) != 'N')) {
        uVar4 = FUN_00018180(param_1,__s1,iVar3);
      }
      else {
        *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) + 0x16) - iVar3;
        uVar4 = FUN_00018180(param_1,iVar2 + 0x189c0,0x15);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    return uVar4;
  }
  return 0;
}


