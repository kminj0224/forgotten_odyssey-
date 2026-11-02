/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fac0  Symbol: setSprite */

/* cocos2d::CCProgressTimer::setSprite(cocos2d::CCSprite*) */

void __thiscall cocos2d::CCProgressTimer::setSprite(CCProgressTimer *this,CCSprite *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (*(CCSprite **)(this + 0x104) != param_1) {
    if (param_1 != (CCSprite *)0x0) {
      CCObject::retain((CCObject *)param_1);
    }
    if (*(CCObject **)(this + 0x104) != (CCObject *)0x0) {
      CCObject::release(*(CCObject **)(this + 0x104));
    }
    *(CCSprite **)(this + 0x104) = param_1;
    pcVar2 = *(code **)(*(int *)this + 0x80);
    uVar1 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    (*pcVar2)(this,uVar1);
    if (*(void **)(this + 0x10c) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x10c));
      *(undefined4 *)(this + 0x10c) = 0;
      *(undefined4 *)(this + 0x108) = 0;
    }
  }
  return;
}


