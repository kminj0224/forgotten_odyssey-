/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147424  Symbol: CCBMFontConfiguration */

/* cocos2d::CCBMFontConfiguration::CCBMFontConfiguration() */

CCBMFontConfiguration * __thiscall
cocos2d::CCBMFontConfiguration::CCBMFontConfiguration(CCBMFontConfiguration *this)

{
  void *pvVar1;
  int iVar2;
  void *__s;
  
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00147468 + 0x147434) + 8;
  pvVar1 = operator_new(0x18);
  __s = (void *)((int)pvVar1 + 4);
  memset(__s,0,0x10);
  iVar2 = DAT_0014746c;
  *(void **)((int)pvVar1 + 0xc) = __s;
  iVar2 = *(int *)(iVar2 + 0x147454);
  *(void **)((int)pvVar1 + 0x10) = __s;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(void **)(this + 0x14) = pvVar1;
  *(undefined4 *)(this + 0x18) = 0;
  *(int *)(this + 0x2c) = iVar2 + 0xc;
  *(undefined4 *)(this + 0x30) = 0;
  return this;
}


