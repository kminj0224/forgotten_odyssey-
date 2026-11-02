/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144410  Symbol: CCSet */

/* cocos2d::CCSet::CCSet() */

CCSet * __thiscall cocos2d::CCSet::CCSet(CCSet *this)

{
  void *pvVar1;
  void *__s;
  
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00144444 + 0x144420) + 8;
  pvVar1 = operator_new(0x18);
  __s = (void *)((int)pvVar1 + 4);
  memset(__s,0,0x10);
  *(void **)((int)pvVar1 + 0xc) = __s;
  *(void **)((int)pvVar1 + 0x10) = __s;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(void **)(this + 0x14) = pvVar1;
  return this;
}


