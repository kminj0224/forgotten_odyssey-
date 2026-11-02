/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001511fc  Symbol: setTexture */

/* cocos2d::CCRibbon::setTexture(cocos2d::CCTexture2D*) */

void __thiscall cocos2d::CCRibbon::setTexture(CCRibbon *this,CCTexture2D *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x100) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x100));
  }
  *(CCTexture2D **)(this + 0x100) = param_1;
  pcVar2 = *(code **)(*(int *)this + 0x80);
  uVar1 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
  (*pcVar2)(this,uVar1);
  return;
}


