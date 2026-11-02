/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142cd6  Symbol: convertToWindowSpace */

/* cocos2d::CCNode::convertToWindowSpace(cocos2d::CCPoint const&) */

undefined8 __thiscall cocos2d::CCNode::convertToWindowSpace(CCNode *this,CCPoint *param_1)

{
  CCNode *pCStack_10;
  CCPoint *pCStack_c;
  
  pCStack_10 = this;
  pCStack_c = param_1;
  convertToWorldSpace((CCPoint *)&pCStack_10);
  CCDirector::sharedDirector();
  CCDirector::convertToUI((CCPoint *)this);
  return CONCAT44(pCStack_10,this);
}


