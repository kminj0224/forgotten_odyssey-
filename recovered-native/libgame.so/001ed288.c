/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed288  Symbol: FUN_001ed288 */

int FUN_001ed288(void **param_1,void **param_2)

{
  int iVar1;
  uint __n;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)*param_1 + -0xc);
  uVar2 = *(uint *)((int)*param_2 + -0xc);
  __n = uVar2;
  if (uVar3 <= uVar2) {
    __n = uVar3;
  }
  iVar1 = memcmp(*param_1,*param_2,__n);
  if (iVar1 == 0) {
    iVar1 = uVar3 - uVar2;
  }
  return iVar1;
}


