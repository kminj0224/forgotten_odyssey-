/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f836  Symbol: unztell64 */

/* cocos2d::unztell64(void*) */

undefined8 cocos2d::unztell64(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == (void *)0x0) || (iVar3 = *(int *)((int)param_1 + 0xe0), iVar3 == 0)) {
    uVar1 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(iVar3 + 0x68);
    uVar2 = *(undefined4 *)(iVar3 + 0x6c);
  }
  return CONCAT44(uVar2,uVar1);
}


