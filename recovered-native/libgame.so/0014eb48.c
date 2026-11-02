/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014eb48  Symbol: initWithLabel */

/* cocos2d::CCMenuItemLabel::initWithLabel(cocos2d::CCNode*, cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

undefined4 __thiscall
cocos2d::CCMenuItemLabel::initWithLabel
          (CCMenuItemLabel *this,CCNode *param_1,CCObject *param_2,_func_void_CCObject_ptr *param_3)

{
  CCMenuItem::initWithTarget((CCObject *)this,(_func_void_CCObject_ptr *)param_2);
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  this[0x11c] = (CCMenuItemLabel)0xff;
  this[0x11d] = (CCMenuItemLabel)0xff;
  this[0x11e] = (CCMenuItemLabel)0xff;
  this[0x114] = (CCMenuItemLabel)0x7e;
  this[0x115] = (CCMenuItemLabel)0x7e;
  this[0x116] = (CCMenuItemLabel)0x7e;
  (**(code **)(*(int *)this + 0x10c))
            (this,param_1,this + 0x114,*(code **)(*(int *)this + 0x10c),param_3);
  return 1;
}


