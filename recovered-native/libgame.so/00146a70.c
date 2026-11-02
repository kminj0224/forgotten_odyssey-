/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146a70  Symbol: ~CCKeypadDispatcher */

/* cocos2d::CCKeypadDispatcher::~CCKeypadDispatcher() */

CCKeypadDispatcher * __thiscall
cocos2d::CCKeypadDispatcher::~CCKeypadDispatcher(CCKeypadDispatcher *this)

{
  undefined4 *puVar1;
  
  *(int *)this = *(int *)(DAT_00146ac0 + 0x146a7a) + 8;
  if (*(CCObject **)(this + 0x14) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14));
  }
  puVar1 = *(undefined4 **)(this + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    free((void *)puVar1[2]);
    free(puVar1);
  }
  puVar1 = *(undefined4 **)(this + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    free((void *)puVar1[2]);
    free(puVar1);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


