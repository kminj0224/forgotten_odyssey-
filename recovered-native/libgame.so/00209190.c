/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00209190  Symbol: FUN_00209190 */

undefined4 FUN_00209190(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *__s1;
  
  iVar3 = FUN_00208a84();
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
           (iVar5 = memcmp(__s1,(void *)(DAT_00209278 + 0x2091e8),8), iVar2 = DAT_0020927c,
           iVar5 != 0)) ||
          ((cVar1 = *(char *)((int)__s1 + 8), cVar1 != '.' && cVar1 != '_' && (cVar1 != '$')))) ||
         (*(char *)((int)__s1 + 9) != 'N')) {
        uVar4 = FUN_00208a1c(param_1,__s1,iVar3);
      }
      else {
        *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) + 0x16) - iVar3;
        uVar4 = FUN_00208a1c(param_1,iVar2 + 0x20925c,0x15);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    return uVar4;
  }
  return 0;
}


