/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f5b6  Symbol: unzGetCurrentFileZStreamPos64 */

/* cocos2d::unzGetCurrentFileZStreamPos64(void*) */

undefined8 cocos2d::unzGetCurrentFileZStreamPos64(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if ((param_1 != (void *)0x0) && (iVar1 = *(int *)((int)param_1 + 0xe0), iVar1 != 0)) {
    iVar2 = *(uint *)(iVar1 + 0xc0) + *(uint *)(iVar1 + 0x40);
    iVar3 = *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0x44) +
            (uint)CARRY4(*(uint *)(iVar1 + 0xc0),*(uint *)(iVar1 + 0x40));
  }
  return CONCAT44(iVar3,iVar2);
}


