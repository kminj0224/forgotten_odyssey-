/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d354  Symbol: menuWithItems */

/* cocos2d::CCMenu::menuWithItems(cocos2d::CCMenuItem*, ...) */

undefined8 cocos2d::CCMenu::menuWithItems(CCMenuItem *param_1,...)

{
  int *this;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = in_r1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  this = (int *)operator_new(0x120);
  CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0014d3d0 + 0x14d376);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x150;
  this[0x40] = iVar1 + 0x180;
  this[0x41] = iVar1 + 0x18c;
  this[0x44] = iVar1 + 0x19c;
  *(CCLayer *)((int)this + 0x117) = (CCLayer)0x0;
  this[0x47] = 0;
  iVar1 = initWithItems((CCMenu *)this,param_1,(__va_list)&uStack_c);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return CONCAT44(param_1,this);
}


