/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002106d8  Symbol: __fixunsdfsi */

uint __fixunsdfsi(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (SUB41((uint)param_2 >> 0x1f,0)) {
    return 0;
  }
  iVar1 = param_2 * 2 + 0x200000;
  if ((uint)(param_2 * 2) < 0xffe00000) {
    if (-1 < iVar1) {
      return 0;
    }
    uVar2 = -(iVar1 >> 0x15) - 0x3e1;
    if (-1 < (int)uVar2) {
      return (param_2 << 0xb | 0x80000000U | param_1 >> 0x15) >> (uVar2 & 0xff);
    }
  }
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  return 0xffffffff;
}


