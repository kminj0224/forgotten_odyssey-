/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fb60  Symbol: FUN_0018fb60 */

undefined4 * FUN_0018fb60(undefined4 param_1)

{
  undefined4 *__s;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_0018fbd8 + 0x18fb6c;
  __s = (undefined4 *)(***(code ***)(iVar2 + DAT_0018fbdc))(0x24);
  if (__s == (undefined4 *)0x0) {
    FUN_0018f77c(iVar2 + DAT_0018fbe0);
  }
  else {
    memset(__s,0,0x24);
    piVar3 = *(int **)(iVar2 + DAT_0018fbe4);
    iVar1 = FUN_00189c50(*piVar3 << 1);
    __s[4] = iVar1;
    if (iVar1 == 0) {
      (***(code ***)(iVar2 + DAT_0018fbe8))(__s);
      __s = (undefined4 *)0x0;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar2 = FUN_001a4320(param_1);
      __s[3] = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_00189c50(*piVar3 << 1);
      }
      __s[5] = iVar2;
      __s[1] = 0;
      __s[2] = 0;
      *__s = 0;
      __s[6] = 0xffffffff;
      __s[8] = 0;
    }
  }
  return __s;
}


