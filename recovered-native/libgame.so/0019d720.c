/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d720  Symbol: FUN_0019d720 */

undefined4 * FUN_0019d720(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *__s;
  int iVar3;
  code **ppcVar4;
  
  iVar3 = DAT_0019d780 + 0x19d72a;
  if ((*(int *)(iVar3 + DAT_0019d784) != 0) || (iVar1 = FUN_0019d5e4(), iVar1 != 0)) {
    ppcVar4 = *(code ***)(iVar3 + DAT_0019d788);
    puVar2 = (undefined4 *)(**ppcVar4)(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar2 = 1;
    puVar2[2] = 0x80;
    puVar2[3] = 0;
    __s = (void *)(**ppcVar4)(0xa00);
    puVar2[4] = 0;
    puVar2[1] = __s;
    puVar2[5] = 0;
    if (__s != (void *)0x0) {
      memset(__s,0,0xa00);
      return puVar2;
    }
    (***(code ***)(iVar3 + DAT_0019d78c))(puVar2);
  }
  return (undefined4 *)0x0;
}


