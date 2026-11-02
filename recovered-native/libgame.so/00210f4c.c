/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00210f4c  Symbol: __muldi3 */

undefined8 __muldi3(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_1 & ~(param_1 & 0xffff0000);
  uVar4 = param_3 & ~(param_3 & 0xffff0000);
  uVar1 = uVar2 * uVar4;
  uVar4 = (param_1 >> 0x10) * uVar4;
  uVar2 = (param_3 >> 0x10) * uVar2;
  iVar5 = (param_1 >> 0x10) * (param_3 >> 0x10);
  uVar3 = uVar4 + uVar2;
  if (CARRY4(uVar4,uVar2)) {
    iVar5 = iVar5 + 0x10000;
  }
  uVar2 = uVar3 * 0x10000;
  return CONCAT44(param_1 * param_4 + param_3 * param_2 +
                  iVar5 + (uVar3 >> 0x10) + (uint)CARRY4(uVar1,uVar2),uVar1 + uVar2);
}


