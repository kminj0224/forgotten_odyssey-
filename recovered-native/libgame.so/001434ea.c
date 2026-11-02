/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001434ea  Symbol: CCRectEqualToRect */

/* cocos2d::CCRect::CCRectEqualToRect(cocos2d::CCRect const&, cocos2d::CCRect const&) */

void __thiscall cocos2d::CCRect::CCRectEqualToRect(CCRect *this,CCRect *param_1,CCRect *param_2)

{
  int iVar1;
  
  iVar1 = CCPoint::CCPointEqualToPoint((CCPoint *)this,param_1,param_2);
  if (iVar1 != 0) {
    CCSize::CCSizeEqualToSize((CCSize *)(this + 8),param_1 + 2,param_2);
  }
  return;
}


