/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fd94  Symbol: unzGetOffset64 */

/* cocos2d::unzGetOffset64(void*) */

undefined8 cocos2d::unzGetOffset64(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  if ((param_1 != (void *)0x0) &&
     ((*(uint *)((int)param_1 + 0x60) | *(uint *)((int)param_1 + 100)) != 0)) {
    uVar4 = *(uint *)((int)param_1 + 0x38);
    uVar1 = *(uint *)((int)param_1 + 0x3c);
    if (((DAT_0015fdd0 ^ uVar4 | uVar1) == 0) ||
       ((((uVar4 | uVar1) == 0 || (*(uint *)((int)param_1 + 0x50) != uVar4)) ||
        (*(uint *)((int)param_1 + 0x54) != uVar1)))) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x58);
      uVar3 = *(undefined4 *)((int)param_1 + 0x5c);
    }
  }
  return CONCAT44(uVar3,uVar2);
}


