/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ce18  Symbol: initWithCapacity */

/* cocos2d::CCArray::initWithCapacity(unsigned int) */

undefined4 __thiscall cocos2d::CCArray::initWithCapacity(CCArray *this,uint param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  puVar1 = (undefined4 *)malloc(0xc);
  *puVar1 = 0;
  pvVar2 = malloc(param_1 << 2);
  puVar1[2] = pvVar2;
  puVar1[1] = param_1;
  *(undefined4 **)(this + 0x14) = puVar1;
  return 1;
}


