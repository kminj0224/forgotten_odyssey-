/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e2c64  Symbol: Item_Buy_Sell_Effect_Stop */

/* Market_Store::Item_Buy_Sell_Effect_Stop() */

void __thiscall Market_Store::Item_Buy_Sell_Effect_Stop(Market_Store *this)

{
  cocos2d::CCNode::getChildByTag((CCNode *)this,0x69);
  cocos2d::CCNode::stopAllActions();
  cocos2d::CCNode::getChildByTag((CCNode *)this,0x6a);
  cocos2d::CCNode::stopAllActions();
  return;
}


